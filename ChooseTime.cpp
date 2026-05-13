#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void choosetime(){
  if (FirstTime3) {
    FirstTime3 = false;
    reset = 0;
    switch (mod) {
      case 0: lcdBothPrint(9, 1, "60 min"); countdownTime1 = countdownTime2 = 3600; break;
      case 1: lcdBothPrint(9, 1, "10 min"); countdownTime1 = countdownTime2 = 600;  break;
      case 2: lcdBothPrint(9, 1, "3 min "); countdownTime1 = countdownTime2 = 180;  break;
      case 3: lcdBothPrint(9, 1, "1 min "); countdownTime1 = countdownTime2 = 60;   break;
    }
  }
  if (isButtonPressed(MODE, 0)) {
    switch (mod) {
      case 0:
        switch (++mod0 % 2) {
          case 0: lcdBothPrint(9, 1, "60 min "); countdownTime1 = countdownTime2 = 3600; incr = 0; reset = 0; break;
          case 1: lcdBothPrint(9, 1, "90 min "); countdownTime1 = countdownTime2 = 5400; incr = 0; reset = 1; break;
        }
      break;

      case 1:
        switch (++mod1 % 3) {
          case 0: lcdBothPrint(9, 1, "10 min "); countdownTime1 = countdownTime2 = 600;  incr = 0;  reset = 0; break;
          case 1: lcdBothPrint(9, 1, "15 | 10"); countdownTime1 = countdownTime2 = 900;  incr = 10; reset = 1; break;
          case 2: lcdBothPrint(9, 1, "30 min "); countdownTime1 = countdownTime2 = 1800; incr = 0;  reset = 2; break;
        }
      break;

      case 2:
        switch (++mod2 % 4) {
          case 0: lcdBothPrint(9, 1, "3 min "); countdownTime1 = countdownTime2 = 180; incr = 0; reset = 0; break;
          case 1: lcdBothPrint(9, 1, "3 | 2 "); countdownTime1 = countdownTime2 = 180; incr = 2; reset = 1; break;
          case 2: lcdBothPrint(9, 1, "5 min "); countdownTime1 = countdownTime2 = 300; incr = 0; reset = 2; break;
          case 3: lcdBothPrint(9, 1, "5 | 5 "); countdownTime1 = countdownTime2 = 300; incr = 5; reset = 3; break;
        }
      break;

      case 3:
        switch (++mod3 % 3) {
          case 0: lcdBothPrint(9, 1, "1 min "); countdownTime1 = countdownTime2 = 60;  incr = 0; reset = 0; break;
          case 1: lcdBothPrint(9, 1, "1 | 2 "); countdownTime1 = countdownTime2 = 60;  incr = 2; reset = 1; break;
          case 2: lcdBothPrint(9, 1, "2 | 1 "); countdownTime1 = countdownTime2 = 120; incr = 1; reset = 2; break;
        }
      break;
    }
  }

  else if (isButtonPressed(Pause, 5)){
    State = 3;
  }
}