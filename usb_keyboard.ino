#include <hid_keys.h>
#include <USBKeyboard.h>

int space, keyA, keyW, keyS, keyD;

void setup() {
  // put your setup code here, to run once:
  Keyboard.init();
  for (int i = 2; i < 10; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  space = digitalRead(0);
  // keyA = digitalRead(2);
  // keyW = digitalRead(3);
  // keyS = digitalRead(4);
  // keyD = digitalRead(5);

  if (space==1) {
    Keyboard.sendKeyStroke(KEY_SPACE, 0);
  }
  // if (keyA==0) {
  //   Keyboard.sendKeyStroke(KEY_A, 0);
  // }
  // if (keyW==0) {
  //   Keyboard.sendKeyStroke(KEY_W, 0);
  // }
  // if (keyS==0) {
  //   Keyboard.sendKeyStroke(KEY_S, 0);
  // }
  // if (keyD==0) {
  //   Keyboard.sendKeyStroke(KEY_D, 0);
  // }

  // delay(10);
}