#include "DigiKeyboard.h"
#include "Wire.h"

#define CARDKB_ADDR 0x5F

void setup() {
  delay(10);
  Wire.begin();
}

void loop() {
  Wire.requestFrom(CARDKB_ADDR, 1);
  while (Wire.available()) {
    char c = Wire.read();
    if (c != 0) {
      DigiKeyboard.print(c);
    }
  }
}
