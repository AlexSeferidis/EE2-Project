import asyncio
import json # not sure if this is needed
import websockets
import requests
import urllib3
from time import sleep
from pynq import Overlay
from pynq.lib.video import *

# urllib3.disable_warnings() 

# SERVER SIDE 
URL = "http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/"
POLL_INTERVAL = 5 # Interval for polling of server



# jsonbody = {"x_offset": x_offset, "y_offset": y_offset, "zoom": zoom, "max_iterations": max_iterations}
while True:
        response = requests.get(URL, verify=False)
        if response.status_code == 200: # if request succeded
            rx_data = response.json()
            x, y, zoom, maxitr = data['x_offset'], data['y_offset'], data['zoom'], data['max_iterations']
            print("x = " + str(x))
            print("y = " + str(y))
            print("zoom = " + str(zoom))
            print("maxitr = " + str(maxitr))
        else: # in case of failed request
            print(f"HTTP Request Failed")
            print(f"Status code: {response.status_code}")
    except Exception as e:
        print(f"Exception occured: {e}")