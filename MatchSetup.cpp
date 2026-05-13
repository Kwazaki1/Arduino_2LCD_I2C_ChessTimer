#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void MatchSetup(){
  lcdBothClear();
  game_running = true;
  FirstTime = true;
  FirstTime2 = true;
  FirstTime3 = true;
  isPaused = true;
  pl1Turn = true;
  isPl1BtnPressed = false;
  isPl2BtnPressed = false;
  previousMillis = millis();
  lcd2.setCursor(0, 0); lcd2.print(" YOU        OPP");
  lcd1.setCursor(0, 0); lcd1.print(" OPP        YOU");
  displayTime();
}