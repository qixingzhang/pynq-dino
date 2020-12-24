# pynq-dino
* Playing Google Chrome dino game automatically by pynq-z2 board
* Read game frame from HDMI_IN and output to HDMI_OUT
* Using a Arduino Uno as peripheral to generate USB keyboard signal

## Devices and Materials
* PYNQ-z2 board
* Arduino UNO
* wires/connecters

## Program Arduino
First program Arduino UNO using the code in `usb_keyboard.ino`

## Download Arduino Firmware
the `firmware` folders contains two firmwares for Arduino UNO. `Arduino-keyboard-0.3.hex` enables Arduino UNO to work as HID devices, `Arduino-usbserial-uno.hex` is the original firmware for Arduino UNO. Here we using Flip to upload the firmware, click the [link](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/FLIP) to download and install.

<img src="https://github.com/qixingzhang/pynq-dino/blob/main/images/flip.png" width="400" />

1. Select device as `ATmega16U2`
2. Open USB port
3. Browse and select firmware
4. Upload

Once upload, unplug and replug the arduino, it will continus sending signals to press space if the digital pin 0 is high. If it doesn't work, please double-click the .exe file in the `drivers` folder to install the driver for arduino.

## Paly for Fun
Find the notebook in `jupyter_notebook` folder, make sure the chrome window fill the half-left of the screen.

Video link: [https://youtu.be/8jcDL5_CIB0](https://youtu.be/8jcDL5_CIB0)