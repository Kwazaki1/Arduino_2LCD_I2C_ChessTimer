#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void Back(){
  lcdBothClear();
  if (State == 3){
    game_running = false;
    FirstTime3 = true;
    mod0 = 0, mod1 = 0, mod2 = 0, mod3 = 0;
    incr = 0;
    
    switch (mod) {
      case 0:
      lcdBothPrint(1, 1, "Classic"); 
        switch (reset) {
          case 0: lcdBothPrint(9, 1, "90 min "); countdownTime1 = countdownTime2 = 5400; incr = 0; break;          
          case 1: lcdBothPrint(9, 1, "60 min "); countdownTime1 = countdownTime2 = 3600; incr = 0; break;
        }
      break;

      case 1:
        lcdBothPrint(1, 1, "Rapid");
        switch (reset) {
          case 0: lcdBothPrint(9, 1, "10 min "); countdownTime1 = countdownTime2 = 600;  incr = 0;  break;
          case 1: lcdBothPrint(9, 1, "15 | 10"); countdownTime1 = countdownTime2 = 900;  incr = 10; break;
          case 2: lcdBothPrint(9, 1, "30 min "); countdownTime1 = countdownTime2 = 1800; incr = 0;  break;
        }
      break;

      case 2:
        lcdBothPrint(1, 1, "Blitz");
        switch (reset) {
          case 0: lcdBothPrint(9, 1, "3 min  "); countdownTime1 = countdownTime2 = 180; incr = 0; break;
          case 1: lcdBothPrint(9, 1, "3 | 2  ");  countdownTime1 = countdownTime2 = 180; incr = 2; break;
          case 2: lcdBothPrint(9, 1, "5 min  "); countdownTime1 = countdownTime2 = 300; incr = 0; break;
          case 3: lcdBothPrint(9, 1, "5 | 5  ");  countdownTime1 = countdownTime2 = 300; incr = 5; break;
        }
      break;

      case 3:
        lcdBothPrint(1, 1, "Bullet");
        switch (reset) {
          case 0: lcdBothPrint(9, 1, "1 | 2  "); countdownTime1 = countdownTime2 = 60;  incr = 2; break;
          case 1: lcdBothPrint(9, 1, "2 | 1  "); countdownTime1 = countdownTime2 = 120; incr = 1; break;
          case 2: lcdBothPrint(9, 1, "1 min  "); countdownTime1 = countdownTime2 = 60;  incr = 0; break;
        }
      break;
    } 
    State--;
  }
  else if (State == 2){
    mod = 0, mod0 = 0, mod1 = 0, mod2 = 0, mod3 = 0;
    incr = 0;
    FirstTime3 = true;
    lcdBothPrint(1, 1, "Classic");
    State--;
  }
  else return;
}