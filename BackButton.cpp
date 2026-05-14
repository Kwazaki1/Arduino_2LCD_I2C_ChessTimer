#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void backFun(){
  if (State == 3){
    lcdBothClear();
    game_running = false;
    FirstTime3 = true;
    State = 2;
  }
  else if (State == 2){
    lcdBothPrint(8, 1, "        ");
    lcdBothPrint(12, 0, " ");
    lcd1.setCursor(3, 0); lcd1.write(2);
    lcd2.setCursor(3, 0); lcd2.write(2);
    incr = 0;
    FirstTime3 = true;
    State = 1;
  }
  else if (State == 1){
    lcdBothClear();
    FirstTime3 = true;
    State = 0;
  }
}