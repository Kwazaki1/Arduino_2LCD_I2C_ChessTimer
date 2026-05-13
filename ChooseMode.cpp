#include "Globals.h"
#include "Functions.h"

void choosemode(){
  if (isButtonPressed(MODE, 0)) {
    ChooseModeScreenError = false;
    String modes[] = {"Rapid  ", "Blitz  ", "Bullet ", "Classic"};
    lcdBothClear();
    lcdBothPrint(1, 5, modes[mod]);
    mod = (mod+1) % 4;
  }
  else if (isButtonPressed(Pause, 5) && ChooseModeScreenError == false) {
    State = 2;
  }
}