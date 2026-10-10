#include <Arduino.h>

const int switchPin = 4;   // change to your GPIO pin
int switchState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(switchPin, INPUT_PULLUP);  // use pull-up if button connects to GND
}

void loop() {
  switchState = digitalRead(switchPin);

  if (switchState == LOW) {
    Serial.println("Switch pressed");
  } else {
    Serial.println("Switch released");
  }

  delay(200);
}
