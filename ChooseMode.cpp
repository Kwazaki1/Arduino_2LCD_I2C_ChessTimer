#include <Globales.h>
#include <Functions.h>

void choosemode(){
  if (isButtonPressed(MODE, 0)) {
    String modes[] = {"Rapid", "Blitz", "Bullet", "Classic"};
    lcdBothClear();
    lcdBothPrint(1, 5, modes[mod]);
    mod = (mod+1) % 4;
  }
  else if (isButtonPressed(Pause, 5)) {
    State = 2;
    lcdBothClear();
  }
}