#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void setup(){
  int buttonPins[] = {Select, Mode, Reset, Back, Pl1, Pl2};
  for (int i = 0; i < 6; i++){
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  pinMode(BUZZER, OUTPUT); digitalWrite(BUZZER, LOW);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  lcd1.init(); lcd2.init();
  lcd1.backlight(); lcd2.backlight();
  createArrows();
  previousMillis = millis();
}

void loop(){

  if (State == 0) firstMassage();

  else if (State == 1) chooseMode();

  else if (State == 2) chooseTime();

  else if (State == 3){
    if (game_running == false) matchSetup();
    runTimmer();
  }

  if (isButtonPressed(Reset)){
    if (State == 3) resetFun();
    else return;
  }

  else if (isButtonPressed(Back)){
    backFun();
  }
}