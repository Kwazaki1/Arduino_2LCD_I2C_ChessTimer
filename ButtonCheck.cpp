#include "Globals.h"
#include <Arduino.h>

bool isButtonPressed(int pin, int index) {
  static bool lastState[8] = {false};

  bool currentState = digitalRead(pin) == LOW;
  unsigned long now = millis();

  if (currentState && !lastState[index]) {
    if (now - lastButtonTimes[index] > debounceDelay) {
      lastButtonTimes[index] = now;

      digitalWrite(LED, HIGH);
      delay(40);
      digitalWrite(LED, LOW);

      lastState[index] = true;
      return true;
    }
  }

  if (!currentState) {
    lastState[index] = false;
  }

  return false;
}