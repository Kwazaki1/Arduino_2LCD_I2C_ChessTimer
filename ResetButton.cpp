#include <Globals.h>
#include <TimeValuesVariables.h>
#include <Functions.h>

void Reset(){
  if(game_running == true){
    game_running = false;
  }
  FirstTime = true;
  FirstTime2 = true;
  lcdBothPrint(0, 1, "                ");
  switch (mod) {
      case 0:
        switch (mod0 % 2) {
          case 0: lcdBothPrint(5, 1, "90 min "); countdownTime1 = countdownTime2 = 5400; break;
          case 1: lcdBothPrint(5, 1, "60 min "); countdownTime1 = countdownTime2 = 3600; break;
        }
      break;

      case 1:
        switch (mod1 % 3) {
          case 0: lcdBothPrint(5, 1, "10 min "); countdownTime1 = countdownTime2 = 600; break;
          case 1: lcdBothPrint(5, 1, "15 | 10"); countdownTime1 = countdownTime2 = 900; incr = 10; break;
          case 2: lcdBothPrint(5, 1, "30 min "); countdownTime1 = countdownTime2 = 1800; break;
        }
      break;

      case 2:
        switch (mod2 % 4) {
          case 0: lcdBothPrint(5, 1, "3 min "); countdownTime1 = countdownTime2 = 180; break;
          case 1: lcdBothPrint(5, 1, "3 | 2"); countdownTime1 = countdownTime2 = 180; incr = 2; break;
          case 2: lcdBothPrint(5, 1, "5 min "); countdownTime1 = countdownTime2 = 300; break;
          case 3: lcdBothPrint(5, 1, "5 | 5"); countdownTime1 = countdownTime2 = 300; incr = 5; break;
        }
      break;

      case 3:
        switch (mod3 % 3) {
          case 0: lcdBothPrint(5, 1, "1 | 2"); countdownTime1 = countdownTime2 = 60; incr = 2; break;
          case 1: lcdBothPrint(5, 1, "2 | 1"); countdownTime1 = countdownTime2 = 120; incr = 1; break;
          case 2: lcdBothPrint(5, 1, "1 min"); countdownTime1 = countdownTime2 = 60; break;
        }
      break;
    }
  MatchSetup();
}