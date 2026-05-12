#include <Globals.h>
#include <TimeValuesVariables.h>
#include <Functions.h>

void Back(){
  if (State == 3){
    game_running = false;
    FirstTime3 = true;
    mod0 = 0, mod1 = 0, mod2 = 0, mod3 = 0;
    lcdBothClear();
    State--;
  }
  else if (State == 2){
    mod = 0, mod0 = 0, mod1 = 0, mod2 = 0, mod3 = 0;
    FirstTime3 = true;
    lcdBothClear();
    lcdBothPrint(5, 1, "Classic");
    State--;
  }
  else return;
}