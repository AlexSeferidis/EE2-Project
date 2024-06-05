import asyncio
import json
import requests
import websockets
import random
from time import sleep
import intel_jtag_uart
import urllib3
import hashlib

urllib3.disable_warnings()

# first get the filter values from the db
# write it to a local array
# keep passing the values of that array to the FPGA
# store the number that should be represented by the switches

# when the number is different to the one stored
# write the new value to the db
# change the filter coeffcients

# 0 = 1
# 1 = 0.7
# 2 = 0.6
# 3 = 0.5
# 4 = 0.4
# 5 = 0.3
# 6 = 0.2
# 7 = 0.1
tap_values = [1, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1]

TLD = "https://ec2-18-171-135-226.eu-west-2.compute.amazonaws.com:8080"

# filter values change
# check it also in db
# when josh sends an update in the score, it changes on the screen


x, y, button, switch = 0, 0, 0, 0

async def parse_tap_setting(s, glbl_username, glbl_settting, glbl_scores, glbl_gameid):
    num = int(s.split(",")[3])
    await glbl_settting.get()
    await glbl_settting.put(num)
    glbl_taps = [tap_values[num], tap_values[num]]
    username = await glbl_username.get()
    await glbl_username.put(username)
    if username != "": change_filter(username, glbl_taps)
    print("this is the username: ", username)

    gameid = await glbl_gameid.get()
    await glbl_gameid.put(gameid)
    print("this is the game_id: ", gameid)
    if gameid != "": await score_req(gameid, glbl_settting, glbl_scores)

    scores = await glbl_scores.get()
    await glbl_scores.put(scores)
    print("this is the scores: ", scores)
    FPGA_write(scores, glbl_taps)


# x,y,button,switch_num
async def FPGAdata(websocket, glbl_username, glbl_settting, glbl_scores, glbl_gameid):
    await glbl_username.put("")
    await glbl_settting.put(0)
    await glbl_scores.put([0, 0])
    await glbl_gameid.put("")
    previous = "0,0,0,"
    new_end = 0
    while True:
        ju.write("".encode())
        data = str(ju.read())
        start = data.find("(")
        end = data.find(")")
        if start == -1 or end == -1:
            await asyncio.gather(*[websocket.send(previous) for websocket in connected])
            continue
        while end < len(data) and end < start:
            new_end =  data[end+1:].find(")")
            if new_end == -1:
                break
            end += new_end + 1
        if new_end == -1:
            await asyncio.gather(*[websocket.send(previous) for websocket in connected])
            continue
        last = data[start+1:end]
        if last != "":
            previous = last
            await asyncio.gather(*[websocket.send(last) for websocket in connected])
            await parse_tap_setting(last, glbl_username, glbl_settting, glbl_scores, glbl_gameid)
        else:
            await asyncio.gather(*[websocket.send(previous) for websocket in connected])#
    # pass

#score,score_val,username,game_id
#game,game_id,username
async def parse_command(s, websocket, glbl_username, glbl_settting, glbl_scores, glbl_gameid):
    cm = s.split(",")
    if len(cm) < 0:
        raise Exception("not enough arguements")
    elif cm[0] == "auth":
        await auth(cm[1], cm[2], websocket, glbl_username, glbl_settting)
    elif cm[0] == "colourset":
        change_colour(cm[1], cm[2])
    elif cm[0] == "score":
        print("this is the is the list of arguements recieved: \n", cm)
        await change_score(glbl_username, glbl_gameid, cm[1], 0, 0, cm[2],cm[3])
    elif cm[0] == "game":
        await create_game(glbl_username, cm[1], glbl_gameid, cm[2])

async def recv(websocket, glbl_username, glbl_settting, glbl_scores, glbl_gameid):
    while True:
        message = await websocket.recv()
        await parse_command(message, websocket, glbl_username, glbl_settting, glbl_scores, glbl_gameid)

async def score_req(game_id, glbl_settting, glbl_scores):
    try:
        url = f"{TLD}/game/all_scores/{game_id}"
        response = requests.get(url, verify=False)
        if response.status_code == 200:
            data = dict(response.json())
            s1 = data["score1"]
            s2 = data["score2"]
            await glbl_scores.get()
            await glbl_scores.put([data["score1"], data["score2"]])
            s1 = str(data["score1"]).zfill(2)
            s2 = str(data["score2"]).zfill(2)

            setting = await glbl_settting.get()
            await glbl_settting.put(setting)
            print("s1: ", s1, "|", "s2: ", s2)
            FPGA_write([s1, s2], [tap_values[setting], tap_values[setting]])

        else:
            print(f"Error: Request failed with status code {response.status_code}")
    except Exception as e:
        # print(e)
        # print("failed to get score")
        pass 



async def auth(username, password, websocket, glbl_username, glbl_settting):
    url = f"{TLD}/auth"
    jsonbody = {"username": username, "password": hashlib.sha256(password.encode()).hexdigest()}
    response = requests.post(url, verify=False, json=jsonbody)
    if response.status_code == 200:
        data = response.json()
        if data["status"] == "success" and data["auth"] == True and "colour" in data:
            await websocket.send(data["colour"])
            await get_filter(username, glbl_settting)
            await glbl_username.get()
            await glbl_username.put(username)
        else:
            await websocket.send("false")

    else:
        print(f"Error: Request failed with status code {response.status_code}")


async def create_game(glbl_username, gameid, glbl_gameid, username):
    url = f"{TLD}/game/add"
    # username = await glbl_username.get()
    await glbl_username.put(username)
    # game_id = await glbl_gameid.get()
    await glbl_gameid.put(gameid)
    jsonbody = {"username": username, "game_id": gameid}
    response = requests.post(url, verify=False, json=jsonbody)
    if response.status_code == 200:
        data = response.json()
        print("response after sending game/add:")
        print(json.dumps(data, indent=4))
    else:
        print(f"Error: Request failed with status code {response.status_code}")


async def change_score(glbl_username, glbl_gameid, score, kills, deaths, username, game_id):
    url = f"{TLD}/game/update"

    # username = await glbl_username.get()
    await glbl_username.put(username)
    # game_id = await glbl_gameid.get()
    await glbl_gameid.put(game_id)
    jsonbody = {
        "username": username,
        "game_id": game_id,
        "score": score,
        "kills": kills,
        "deaths": deaths,
    }
    response = requests.patch(url, verify=False, json=jsonbody)
    if response.status_code == 200:
        # print(response)
        data = response.json()
        print("response after sending game/update:")
        print(json.dumps(data, indent=4))
    else:
        print(f"Error: Request failed with status code {response.status_code}")


def change_colour(username, colour): #Made this non async - check
    url = (
        f"{TLD}/colour/update"
    )
    jsonbody = {"username": username, "colour": colour}
    response = requests.patch(url, verify=False, json=jsonbody)
    if response.status_code == 200:
        # print(response)
        data = response.json()
        # print(json.dumps(data, indent=4))
    else:
        print(f"Error: Request failed with status code {response.status_code}")


def change_filter(username, taps):
    url = (
        f"{TLD}/filter/modify"
    )
    jsonbody = {"username": username, "taps": taps}
    response = requests.post(url, verify=False, json=jsonbody)

# get the filter values from the db
# writes it to global variables
# passes the values to the FPGA
async def get_filter(username, glbl_settting):
    url = f"{TLD}/filter/get"
    jsonbody = {"username": username}
    response = requests.get(url, verify=False, json=jsonbody)
    if response.status_code == 200:
        data = response.json()
        print(data)
        glbl_taps = data["taps"]
        await glbl_settting.get()
        await glbl_settting.put(tap_values.index(glbl_taps[0]))
        FPGA_write([0, 0], glbl_taps)
    else:
        print(f"Error: Request failed with status code {response.status_code}")

# send score and taps to FPGA
# scores = array
# taps = array
def FPGA_write(scores, taps):
    s = f'({str(scores[0]).zfill(2)},{str(scores[1]).zfill(2)},{taps[0]},{taps[1]})\0'
    # print(s)
    for i in range(5):
        ju.write(s.encode())
        pass


connected = set()

if _name_ == "_main_":
    try:
        ju = intel_jtag_uart.intel_jtag_uart()
    except Exception as e:
        print(e)
        exit()

    async def handler(websocket, path):
        connected.add(websocket)
        try:
            glbl_username = asyncio.Queue()
            glbl_settting = asyncio.Queue()
            glbl_scores = asyncio.Queue()
            glbl_gameid = asyncio.Queue()
            print("running")
            await asyncio.gather(FPGAdata(websocket, glbl_username, glbl_settting, glbl_scores, glbl_gameid), recv(websocket, glbl_username, glbl_settting, glbl_scores, glbl_gameid))
        except:
            print("connection closed")
        finally:
           connected.remove(websocket)


    start_server = websockets.serve(handler, "localhost", 12000)

    asyncio.get_event_loop().run_until_complete(start_server)
    asyncio.get_event_loop().run_forever()