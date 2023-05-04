import pyfirmata
import time

# establish a connection to the board
board = pyfirmata.Arduino('COM5')

# set up the LED on pin 8
led_pin = board.get_pin('d:8:o')

# turn the LED on and off in a loop
while True:
    led_pin.write(1)  # turn the LED on
    time.sleep(1)     # delay for 1 second
    led_pin.write(0)  # turn the LED off
    time.sleep(1)     # delay for 1 second
