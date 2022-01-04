/*
  Copyright (c) 2014-2015 NicoHood
  Copyright (c) 2022 FuBuKi
  See the readme for credit to other people.
*/

#include "HID-Project.h"

const int pinLed = LED_BUILTIN;
const int MX01 = 2;
const int MX02 = 3;
const int MX03 = 4;
const int MX04 = 5;
const int MX05 = 7;
const int MX06 = 8;
const int MX07 = 21;
const int MX08 = 20;
const int MX09 = 19;
const int MX10 = 18;
const int MX11 = 14;
const int MX12 = 16;
const int VGround = 6;

const byte mask = 0b111;
byte VX01 = 0;
byte VX02 = 0;
byte VX03 = 0;
byte VX04 = 0;
byte VX05 = 0;
byte VX06 = 0;
byte VX07 = 0;
byte VX08 = 0;
byte VX09 = 0;
byte VX10 = 0;
byte VX11 = 0;
byte VX12 = 0;

boolean LX01 = false;
boolean LX02 = false;
boolean LX03 = false;
boolean LX04 = false;
boolean LX05 = false;
boolean LX06 = false;
boolean LX07 = false;
boolean LX08 = false;
boolean LX09 = false;
boolean LX10 = false;
boolean LX11 = false;
boolean LX12 = false;

boolean LXAL = false;

void setup() {
  // Prepare led + buttons
  pinMode(pinLed, OUTPUT);
  pinMode(MX01, INPUT_PULLUP);
  pinMode(MX02, INPUT_PULLUP);
  pinMode(MX03, INPUT_PULLUP);
  pinMode(MX04, INPUT_PULLUP);
  pinMode(MX05, INPUT_PULLUP);
  pinMode(MX06, INPUT_PULLUP);
  pinMode(MX07, INPUT_PULLUP);
  pinMode(MX08, INPUT_PULLUP);
  pinMode(MX09, INPUT_PULLUP);
  pinMode(MX10, INPUT_PULLUP);
  pinMode(MX11, INPUT_PULLUP);
  pinMode(MX12, INPUT_PULLUP);
  pinMode(VGround, OUTPUT);
  digitalWrite(VGround, LOW);

  // Sends a clean report to the host. This is important on any Arduino type.
  Keyboard.begin();
}

void loop() {
  
  // Reset LED state
  LXAL = false;

  VX01 <<= 1;
  if (!digitalRead(MX01)) {
    VX01 += 1;
  }
  // Try debounce by 3 times
  if (((VX01 & mask) == mask) && !LX01) {
    Keyboard.press(KEY_LEFT_SHIFT);
    LX01 = true;
    LXAL = true;
  } else if (((VX01 & mask) != mask) && LX01) {
    Keyboard.release(KEY_LEFT_SHIFT);
    LX01 = false;
  }

  VX02 <<= 1;
  if (!digitalRead(MX02)) {
    VX02 += 1;
  }
  // Try debounce by 3 times
  if (((VX02 & mask) == mask) && !LX02) {
    Keyboard.press(KEY_TAB);
    LX02 = true;
    LXAL = true;
  } else if (((VX02 & mask) != mask) && LX02) {
    Keyboard.release(KEY_TAB);
    LX02 = false;
  }

  VX03 <<= 1;
  if (!digitalRead(MX03)) {
    VX03 += 1;
  }
  // Try debounce by 3 times
  if (((VX03 & mask) == mask) && !LX03) {
    Keyboard.press(KEY_ESC);
    LX03 = true;
    LXAL = true;
  } else if (((VX03 & mask) != mask) && LX03) {
    Keyboard.release(KEY_ESC);
    LX03 = false;
  }

  VX04 <<= 1;
  if (!digitalRead(MX04)) {
    VX04 += 1;
  }
  // Try debounce by 3 times
  if (((VX04 & mask) == mask) && !LX04) {
    Keyboard.press(KEY_F1);
    LX04 = true;
    LXAL = true;
  } else if (((VX04 & mask) != mask) && LX04) {
    Keyboard.release(KEY_F1);
    LX04 = false;
  }

  VX05 <<= 1;
  if (!digitalRead(MX05)) {
    VX05 += 1;
  }
  // Try debounce by 3 times
  if (((VX05 & mask) == mask) && !LX05) {
    Keyboard.press(KEY_F2);
    LX05 = true;
    LXAL = true;
  } else if (((VX05 & mask) != mask) && LX05) {
    Keyboard.release(KEY_F2);
    LX05 = false;
  }

  VX06 <<= 1;
  if (!digitalRead(MX06)) {
    VX06 += 1;
  }
  // Try debounce by 3 times
  if (((VX06 & mask) == mask) && !LX06) {
    Keyboard.press(KEY_F3);
    LX06 = true;
    LXAL = true;
  } else if (((VX06 & mask) != mask) && LX06) {
    Keyboard.release(KEY_F3);
    LX06 = false;
  }

  VX07 <<= 1;
  if (!digitalRead(MX07)) {
    VX07 += 1;
  }
  // Try debounce by 3 times
  if (((VX07 & mask) == mask) && !LX07) {
    Keyboard.press(KEY_F4);
    LX07 = true;
    LXAL = true;
  } else if (((VX07 & mask) != mask) && LX07) {
    Keyboard.release(KEY_F4);
    LX07 = false;
  }

  VX08 <<= 1;
  if (!digitalRead(MX08)) {
    VX08 += 1;
  }
  // Try debounce by 3 times
  if (((VX08 & mask) == mask) && !LX08) {
    Keyboard.press(KEY_F5);
    LX08 = true;
    LXAL = true;
  } else if (((VX08 & mask) != mask) && LX08) {
    Keyboard.release(KEY_F5);
    LX08 = false;
  }

  VX09 <<= 1;
  if (!digitalRead(MX09)) {
    VX09 += 1;
  }
  // Try debounce by 3 times
  if (((VX09 & mask) == mask) && !LX09) {
    Keyboard.press(KEY_F6);
    LX09 = true;
    LXAL = true;
  } else if (((VX09 & mask) != mask) && LX09) {
    Keyboard.release(KEY_F6);
    LX09 = false;
  }

  VX10 <<= 1;
  if (!digitalRead(MX10)) {
    VX10 += 1;
  }
  // Try debounce by 3 times
  if (((VX10 & mask) == mask) && !LX10) {
    Keyboard.press(KEY_LEFT_CTRL);
    LX10 = true;
    LXAL = true;
  } else if (((VX10 & mask) != mask) && LX10) {
    Keyboard.release(KEY_LEFT_CTRL);
    LX10 = false;
  }

  VX11 <<= 1;
  if (!digitalRead(MX11)) {
    VX11 += 1;
  }
  // Try debounce by 3 times
  if (((VX11 & mask) == mask) && !LX11) {
    Keyboard.press(KEY_F7);
    LX11 = true;
    LXAL = true;
  } else if (((VX11 & mask) != mask) && LX11) {
    Keyboard.release(KEY_F7);
    LX11 = false;
  }

  VX12 <<= 1;
  if (!digitalRead(MX12)) {
    VX12 += 1;
  }
  // Try debounce by 3 times
  if (((VX12 & mask) == mask) && !LX12) {
    Keyboard.press(KEY_F8);
    LX12 = true;
    LXAL = true;
  } else if (((VX12 & mask) != mask) && LX12) {
    Keyboard.release(KEY_F8);
    LX12 = false;
  }

  if (LXAL) digitalWrite(pinLed, HIGH);
  else digitalWrite(pinLed, LOW);

  // Wait 3ms so that total debounce time meets say 10ms
  delay(3);
}
