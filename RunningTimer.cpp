#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void runTimmer(){
  if (isButtonPressed(Select) && !FirstTime) isPaused = !isPaused;
  if (isButtonPressed(Pl1)) { 
    isPl1BtnPressed = true;
  }
  else if (isButtonPressed(Pl2)) {
    isPl2BtnPressed = true;
  }
  if (isPl2BtnPressed && FirstTime) {
    isPaused = false;
    FirstTime = false;
    isPl2BtnPressed = false;
  }
  else if (isPl1BtnPressed && pl1Turn) {
    countdownTime1 += incr;
    FirstTime2 = true; 
    pl1Turn = false;
    isPl1BtnPressed = false;
  }
  else if (isPl2BtnPressed && !pl1Turn) { 
    countdownTime2 += incr;
    FirstTime2 = true;
    pl1Turn = true;
    isPl2BtnPressed = false;
  }
  else {
    isPl1BtnPressed = false;
    isPl2BtnPressed = false;
  }

  now = millis();
  
  if (isPaused) {
    previousMillis = now;
    return;
  }

  else if (!isPaused && now - previousMillis >= 1000) {
    previousMillis += 1000;
    
    if (pl1Turn && countdownTime1 > 0) countdownTime1--;
      
    else if (!pl1Turn && countdownTime2 > 0) countdownTime2--;

    displayTime();

    if (countdownTime1 == 0 || countdownTime2 == 0) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(BUZZER, HIGH); delay(200);
        digitalWrite(BUZZER, LOW);  delay(20);
        digitalWrite(BUZZER, HIGH); delay(200);
        digitalWrite(BUZZER, LOW);  delay(350);
      }
      game_running = false;
    }
  }
}