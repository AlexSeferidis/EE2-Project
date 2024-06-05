import asyncio
import json
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


# HARDWARE SIDE
overlay = Overlay("/home/xilinx/elec50015.bit")
X_RES = 640
Y_RES = 480

async def poll():
    # jsonbody = {"x_offset": x_offset, "y_offset": y_offset, "zoom": zoom, "max_iterations": max_iterations}
    while True:
        try:
            response = requests.get(URL, verify=False)
            if response.status_code == 200: # if request succeded
                rx_data = response.json()
                x, y, zoom, maxitr = data['x_offset'], data['y_offset'], data['zoom'], data['max_iterations']
                await update_hw(x, y, zoom, maxitr)
            else: # in case of failed request
                print(f"HTTP Request Failed")
                print(f"Status code: {response.status_code}")
        except Exception as e:
            print(f"Exception occured: {e}")
    await asyncio.sleep(POLL_INTERVAL)
    

async def update_hw(x, y, zoom, maxitr):
    await send_to_fpga(x, y, zoom, maxitr)
    await hdmi_output()
                

    
async def send_to_fpga(x, y, zoom, maxitr):
    pixgen = overlay.pixel_generator_0
    # pixgen.register_map
    pixgen.register_map.gp0 = x
    pixgen.register_map.gp1 = y
    pixgen.register_map.gp2 = zoom
    pixgen.register_map.gp3 = maxitr 
    print("gp0: " + str(pixgen.register_map.gp0))
    print("gp1: " + str(pixgen.register_map.gp1))
    print("gp2: " + str(pixgen.register_map.gp2))
    print("gp3: " + str(pixgen.register_map.gp3))


async def hdmi_output():
    hdmi_out = overlay.video.hdmi_out
    hdmi_out._vdma = overlay.video.axi_vdma #Use the correct VDMA!
    hdmi_out.configure(videoMode)
    hdmi_out.start()
    
    hdmi_out.writeframe(frame)


    
    


if __name__ == "__main__":
    
    async def main():
        
        await poll()
        
    asyncio.get_event_loop().run_until_complete(main())
    
    # close for stability (here?)
    imgen_vdma.stop()
    hdmi_out.close()
    