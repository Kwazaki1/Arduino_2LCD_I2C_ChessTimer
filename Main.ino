#include <Globals.h>
#include <Functions.h>
#include <TimeValuesVariables.h>

void setup(){
  int buttonPins[] = {Pause, pl1_button, pl2_button, MODE, BACK, RESET};
  for (int i = 0; i < 6; i++){
    pinMode(buttonPins[i], INPUT_PULLUP);}
  pinMode(BUZZER, OUTPUT); digitalWrite(BUZZER, LOW);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  lcd1.init(); lcd2.init();
  lcd1.backlight(); lcd2.backlight();
  createArrows();
  lcdBothPrint(2, 1, "Choose Mode");
  State = 1;
  previousMillis = millis();
}

void loop(){

  if (State == 1) choosemode();

  else if (State == 2) choosetime();

  else if (State == 3){
    if (!game_running) MatchSetup();
    RunTimmer();
  }

  if (isButtonPressed(RESET, 2) && State == 3){
    Reset();
  }

  else if (isButtonPressed(BACK, 1)){
    Back();
  }
}