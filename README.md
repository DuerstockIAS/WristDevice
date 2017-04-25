# WristDevice
# NRF24L01 Radio Unit
## Schematic
### Hookup Guide
For Arduino Uno:

![nrf-ardino-en](https://cloud.githubusercontent.com/assets/25937243/25401966/52dc78a8-29c5-11e7-84e1-01b5861500c2.png)

For Arduino Micro:

![52dc78a8-29c5-11e7-84e1-01b5861500c2 copy](https://cloud.githubusercontent.com/assets/25937243/25404964/b31d8978-29cf-11e7-8943-8ac87f0d64cf.png)

## Commumicating Arduino to Computer
One NRF unit connected directly to Arduino mounted on wrist device, the other NRF unit connected to an Arduino connected via USB adapter directly to computer.

## Important Notes
- In order to utilise the "Keyboard.h" library, an Arduino Micro or Leonardo must be used. 
- A special NRF Repository was acquired from https://github.com/nRF24/RF24



# Old Considerations (Using Bluetooth Device):
## Windows

## macOS

System Preferences > Bluetooth  
Pair with the bluesmirf device in question.

Launch Terminal and type:  
`screen /dev/cu.<PAIRED BLUESMIRF DEVICE> 9600`   

To quit screen:  
` CTRL+A+K followed by Y`

You're connected to the bluesmirf device now. 

## Usage from an Arduino
Print using:  
`bluetooth.print("Aliens")`  
Whatever you type in the console on your computer can be read using:

`bluetooth.read()`

The tutorial for using the bluesmirf is [here](https://learn.sparkfun.com/tutorials/using-the-bluesmirf)
