#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void RunTimmer(){
  if (isButtonPressed(Pause, 0) && !FirstTime) isPaused = !isPaused;
  if (isButtonPressed(pl2_button, 7) && FirstTime) {
    isPaused = false;
    FirstTime = false;
  }
  if (isButtonPressed(pl1_button, 6) && pl1Turn) { 
    FirstTime2 = true; 
    if (incrTime >=0) countdownTime1 += incr;
    incrTime = 5;
    pl1Turn = false;
  }
  if (isButtonPressed(pl2_button, 7) && !pl1Turn) { 
    FirstTime2 = true;
    if (incrTime >=0) countdownTime2 += incr;
    incrTime = 5;
    pl1Turn = true;
  }

  now = millis();
  
  if (isPaused) {
    previousMillis = now;
    return;
  }


  else if (!isPaused && now - previousMillis >= 1000) {
    previousMillis += 1000;
    if (pl1Turn && countdownTime1 > 0){
      countdownTime1--;
      incrTime--;
      }
    else if (!pl1Turn && countdownTime2 > 0) countdownTime2--;
    displayTime();

    if (countdownTime1 == 0 || countdownTime2 == 0) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(BUZZER, HIGH); delay(200);
        digitalWrite(BUZZER, LOW); delay(20);
        digitalWrite(BUZZER, HIGH); delay(200);
        digitalWrite(BUZZER, LOW); delay(350);
      }
      game_running = false;
    }
  }
}