#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void Back(){
  if (State == 3){
    lcdBothClear();
    game_running = false;
    FirstTime3 = true;
    State--;
  }
  else if (State == 2){
    lcdBothPrint(8, 1, "        ");
    incr = 0;
    FirstTime3 = true;
    State--;
  }
  else return;
}