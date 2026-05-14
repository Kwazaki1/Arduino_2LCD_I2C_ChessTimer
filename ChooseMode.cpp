#include "Globals.h"
#include "Functions.h"

void chooseMode(){
  
  if (!FirstTime4){
    lcdBothClear();
    String modes[] = {"Classic ", " Rapid  ", " Blitz  ", " Bullet ", };
    lcdBothPrint(0, 1, modes[mod]);
    lcd1.setCursor(3, 0); lcd1.write(2);
    lcd2.setCursor(3, 0); lcd2.write(2);
    FirstTime4 = true;
  }
  if (isButtonPressed(Mode)) {
    String modes[] = {" Rapid  ", " Blitz  ", " Bullet ", "Classic "};
    lcdBothPrint(0, 1, modes[mod]);
    mod = (mod+1) % 4;
  }
  else if (isButtonPressed(Select)) {
    lcdBothPrint(3, 0, " ");
    State = 2;
  }
}