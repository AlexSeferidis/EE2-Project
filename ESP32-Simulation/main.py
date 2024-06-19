from machine import Pin, I2C
import ssd1306
import time

# ESP32 Pin assignment
i2c = I2C(0, scl=Pin(22), sda=Pin(21))
acc_btn_pin = 14
back_btn_pin = 12
param_btn_pin = 26
DB_btn_pin = 27
upl_btn_pin = 25
downl_btn_pin = 33
leftl_btn_pin = 32
rightl_btn_pin = 35
upr_btn_pin = 4
downr_btn_pin = 15
leftr_btn_pin = 2
rightr_btn_pin = 16

# 4 Buttons
acc_btn = Pin(acc_btn_pin, Pin.IN, Pin.PULL_DOWN)
back_btn = Pin(back_btn_pin, Pin.IN, Pin.PULL_DOWN)
param_btn = Pin(param_btn_pin, Pin.IN, Pin.PULL_DOWN)
DB_btn = Pin(DB_btn_pin, Pin.IN, Pin.PULL_DOWN)

# Left joystick
upl_btn = Pin(upl_btn_pin, Pin.IN, Pin.PULL_DOWN)
downl_btn = Pin(downl_btn_pin, Pin.IN, Pin.PULL_DOWN)
leftl_btn = Pin(leftl_btn_pin, Pin.IN, Pin.PULL_DOWN)
rightl_btn = Pin(rightl_btn_pin, Pin.IN, Pin.PULL_DOWN)

# Right joystick
upr_btn = Pin(upr_btn_pin, Pin.IN, Pin.PULL_DOWN)
downr_btn = Pin(downr_btn_pin, Pin.IN, Pin.PULL_DOWN)
leftr_btn = Pin(leftr_btn_pin, Pin.IN, Pin.PULL_DOWN)
rightr_btn = Pin(rightr_btn_pin, Pin.IN, Pin.PULL_DOWN)

oled_width = 128
oled_height = 64
oled = ssd1306.SSD1306_I2C(oled_width, oled_height, i2c)

# Default image data (x, y, zoom, maxitr)
img = [0, 0, 1, 50]

# Display initial message to verify OLED is working
oled.text('Hello, Wokwi!', 10, 10)
oled.show()
time.sleep(2)  # Wait for 2 seconds

# Previous state variables for the joystick buttons
prev_leftl_state = 0
prev_rightl_state = 0

while True:
    # Read the state of the buttons
    acc_state = acc_btn.value()
    back_state = back_btn.value()
    param_state = param_btn.value()
    DB_state = DB_btn.value()

    # Read the state of the left joystick
    upl_state = upl_btn.value()
    downl_state = downl_btn.value()
    leftl_state = leftl_btn.value()
    rightl_state = rightl_btn.value()

    # Read the state of the right joystick
    upr_state = upr_btn.value()
    downr_state = downr_btn.value()
    leftr_state = leftr_btn.value()
    rightr_state = rightr_btn.value()

    # Clear the OLED display
    oled.fill(0)

    # Set up UI
    oled.text('Maths Accelerator', 1, 1)
    oled.text('x: ', 1, 10)
    oled.text('y: ', 1, 20)
    oled.text('zoom: ', 1, 30)
    oled.text('maxitr: ', 1, 40)
    oled.text(str(img[0]), 30, 10)
    oled.text(str(img[1]), 30, 20)
    oled.text(str(img[2]), 50, 30)
    oled.text(str(img[3]), 60, 40)

    # Left joystick controls
    if upl_state == 1: # y+
        img[1] += 1
    if downl_state == 1: # y-
        img[1] -= 1
    if rightl_state == 1: # x+
        img[0] += 1
    if leftl_state == 1: # x-
        img[0] -= 1

    # Right joystick controls
    if upr_state == 1: # fine zoom (+)
        img[2] += 1
    if downr_state == 1: # fine zoom (-)
        img[2] -= 1
    if rightr_state == 1: # coarse zoom (+)
        img[2] += 5
    if leftr_state == 1: # coarse zoom (-)
        img[2] -= 5


    # Enter menu
    if DB_state == 1:
        oled.fill(0)
        oled.text('Connecting...', 1, 10)
        oled.show()
        # ADD SERVERSIDE CONNECTION HERE
        # FOR NOW GET ARRAY
        data = [1, 2, 3, 4 ,5]
        time.sleep(1)

        # PLACEHOLDER MENU
        backd_flag = False

        while not backd_flag:
            oled.fill(0)
            oled.text('Database:', 1, 1)
            # oled.show()

            for i in range (0, len(data)):
                oled.text('id: ', 1, (i+1)*10)
                oled.text(str(data[i]), 30, (i+1)*10)

            oled.show()


            # Update button states within the menu loop
            acc_state = acc_btn.value()
            back_state = back_btn.value()
            # param_state = param_btn.value() 
            # DB_state = DB_btn.value() 

            # Update left joystick states within menu loop
            upl_state = upl_btn.value()
            downl_state = downl_btn.value()

            if back_state == 1: # Back button
                backd_flag = True
                oled.fill(0)
                oled.text('Leaving database...', 1, 10)
                oled.show()
            
            if upl_state == 1: # Left joystick up
                data = data[1:] + data[:1]

            if downl_state == 1: # Left joystick down
                data = data[-1:] + data[:-1]

            if acc_state == 1: # Accept button
                oled.fill(0)
                oled.text('Selected id: ' + str(data[0]), 1, 10)
                oled.show()
                time.sleep(1)

            # Add a short delay to debounce and reduce CPU load
            time.sleep(0.1)

    if param_state == 1:
        
        editing = 0 #default
        ui_track = 10 # default

        backp_flag = False
        while not backp_flag:
            #SETUP PARAM EDITOR UI
            oled.fill(0)
            oled.text('Param Editor:', 1, 1)

            oled.text('x', 10, 10)
            oled.text('y', 35, 10)
            oled.text('zoom', 55, 10)
            oled.text('itr', 100, 10)

            oled.text(str(img[0]), 10, 30)
            oled.text(str(img[1]), 35, 30)
            oled.text(str(img[2]), 55, 30)
            oled.text(str(img[3]), 100, 30)

            oled.text('+', ui_track, 20)
            oled.text('-', ui_track, 40)

            oled.show()

            # Update button states within the menu loop
            acc_state = acc_btn.value()
            back_state = back_btn.value()
            param_state = param_btn.value()
            DB_state = DB_btn.value()

            # Update left joystick states
            upl_state = upl_btn.value()
            downl_state = downl_btn.value()     
            leftl_state = leftl_btn.value()     
            rightl_state = rightl_btn.value()       

            if back_state == 1: # Back button
                backp_flag = True
                oled.fill(0)
                oled.text('Leaving Editor...', 1, 10)
                oled.show()

            if rightl_state == 1 and prev_rightl_state == 0:
                if editing == 3:
                    editing = 0
                    ui_track = 10
                elif editing == 2:
                    editing = 3
                    ui_track = 100
                elif editing == 1:
                    editing = 2
                    ui_track = 55
                elif editing == 0:
                    editing = 1
                    ui_track = 35
                time.sleep(0.1)

            if leftl_state == 1 and prev_leftl_state == 0:
                if editing == 3:
                    editing = 2
                    ui_track = 55
                elif editing == 2:
                    editing = 1
                    ui_track = 35
                elif editing == 1:
                    editing = 0
                    ui_track = 10
                elif editing == 0:
                    editing = 3
                    ui_track = 100
                time.sleep(0.1)

            if upl_state == 1:
                if editing == 0:
                    img[0] += 1
                elif editing == 1:
                    img[1] += 1
                elif editing == 2:
                    img[2] += 1
                elif editing == 3:
                    img[3] += 1
                time.sleep(0.1)

            if downl_state == 1:
                if editing == 0:
                    img[0] -= 1
                elif editing == 1:
                    img[1] -= 1
                elif editing == 2:
                    img[2] -= 1
                elif editing == 3:
                    img[3] -= 1
                time.sleep(0.1)

            # Update previous states
            prev_leftl_state = leftl_state
            prev_rightl_state = rightl_state

            time.sleep(0.1)

    # Update the OLED display
    oled.show()

    # Add a short delay to debounce and reduce CPU load
    time.sleep(0.1)
