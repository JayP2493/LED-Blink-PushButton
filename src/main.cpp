#include <Arduino.h>

const int ledPin = 4;
const int switchPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);
  delay(2000);
  digitalWrite(ledPin,LOW);
  delay(500);
}