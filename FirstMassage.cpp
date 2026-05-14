#include "Globals.h"
#include "Functions.h"

void firstMassage (){
  if (FirstTime4){
  lcdBothPrint(2, 1, "Choose Mode");
  FirstTime4 = false;
  }
  if (isButtonPressed(Select));
  else if (isButtonPressed(Mode)) {
    lcdBothPrint(0, 1, "Classic");
    State = 1;
    return;
  }
  else if (isButtonPressed(Reset));
  else if (isButtonPressed(Back));
  else if (isButtonPressed(Pl1));
  else if (isButtonPressed(Pl2));
}

