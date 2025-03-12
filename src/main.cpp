#include <Arduino.h>

const int ledPin = 4;
const int switchPin = 3;
bool crSt = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool buttonPressed = !digitalRead(switchPin);

  if (buttonPressed)
  {
    crSt = !crSt;
  }

  if (crSt)
  {
    digitalWrite(ledPin,HIGH);
  } else {
    digitalWrite(ledPin,LOW);
  }
  delay(100);
}