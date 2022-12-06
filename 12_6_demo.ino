#include "Adafruit_NeoPixel.h"

int ledPin = 13;

Adafruit_NeoPixel neopixel(1, 32, NEO_RGB);

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
