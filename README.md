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

## Download Arduino firmware
the `firmware` folders contains two firmwares for Arduino UNO. `Arduino-keyboard-0.3.hex` enables Arduino UNO to work as HID devices, `Arduino-usbserial-uno.hex` is the original firmware for Arduino UNO. Here we using the tool Flip to upload the firmware

