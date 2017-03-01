# WristDevice

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