#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void chooseTime(){
  if (FirstTime3) {
    FirstTime3 = false;
    lcd1.setCursor(12, 0); lcd1.write(2);
    lcd2.setCursor(12, 0); lcd2.write(2);
    re_set = 0;
    switch (mod) {
      case 0:
        lcdBothPrint(0, 1, "Classic "); 
        switch (mod0 % 2) {
          case 0: lcdBothPrint(9, 1, "60 min "); countdownTime1 = countdownTime2 = 3600; incr = 0; break;          
          case 1: lcdBothPrint(9, 1, "90 min "); countdownTime1 = countdownTime2 = 5400; incr = 0; re_set = 1; break;
        }
      break;

      case 1:
        lcdBothPrint(0, 1, " Rapid  ");
        switch (mod1 % 3) {
          case 0: lcdBothPrint(9, 1, "10 min "); countdownTime1 = countdownTime2 = 600;  incr = 0;  break;
          case 1: lcdBothPrint(9, 1, "15 | 10"); countdownTime1 = countdownTime2 = 900;  incr = 10; re_set = 1; break;
          case 2: lcdBothPrint(9, 1, "30 min "); countdownTime1 = countdownTime2 = 1800; incr = 0;  re_set = 2; break;
        }
      break;

      case 2:
        lcdBothPrint(0, 1, " Blitz  ");
        switch (mod2 % 4) {
          case 0: lcdBothPrint(10, 1, "3 min  "); countdownTime1 = countdownTime2 = 180; incr = 0; break;
          case 1: lcdBothPrint(10, 1, "3 | 2  "); countdownTime1 = countdownTime2 = 180; incr = 2; re_set = 1; break;
          case 2: lcdBothPrint(10, 1, "5 min  "); countdownTime1 = countdownTime2 = 300; incr = 0; re_set = 2; break;
          case 3: lcdBothPrint(10, 1, "5 | 5  "); countdownTime1 = countdownTime2 = 300; incr = 5; re_set = 3; break;
        }
      break;

      case 3:
        lcdBothPrint(0, 1, " Bullet ");
        switch (mod3 % 3) {
          case 0: lcdBothPrint(10, 1, "1 min  "); countdownTime1 = countdownTime2 = 60;  incr = 0; break;
          case 1: lcdBothPrint(10, 1, "1 | 2  "); countdownTime1 = countdownTime2 = 60;  incr = 2; re_set = 1; break;
          case 2: lcdBothPrint(10, 1, "2 | 1  "); countdownTime1 = countdownTime2 = 120; incr = 1; re_set = 2; break;
        }
      break;
    }
  }
  if (isButtonPressed(Mode)) {
    switch (mod) {
      case 0:
        switch (++mod0 % 2) {
          case 0: lcdBothPrint(9, 1, "60 min "); countdownTime1 = countdownTime2 = 3600; incr = 0; re_set = 0; break;
          case 1: lcdBothPrint(9, 1, "90 min "); countdownTime1 = countdownTime2 = 5400; incr = 0; re_set = 1; break;
        }
      break;

      case 1:
        switch (++mod1 % 3) {
          case 0: lcdBothPrint(9, 1, "10 min "); countdownTime1 = countdownTime2 = 600;  incr = 0;  re_set = 0; break;
          case 1: lcdBothPrint(9, 1, "15 | 10"); countdownTime1 = countdownTime2 = 900;  incr = 10; re_set = 1; break;
          case 2: lcdBothPrint(9, 1, "30 min "); countdownTime1 = countdownTime2 = 1800; incr = 0;  re_set = 2; break;
        }
      break;

      case 2:
        switch (++mod2 % 4) {
          case 0: lcdBothPrint(10, 1, "3 min  "); countdownTime1 = countdownTime2 = 180; incr = 0; re_set = 0; break;
          case 1: lcdBothPrint(10, 1, "3 | 2  "); countdownTime1 = countdownTime2 = 180; incr = 2; re_set = 1; break;
          case 2: lcdBothPrint(10, 1, "5 min  "); countdownTime1 = countdownTime2 = 300; incr = 0; re_set = 2; break;
          case 3: lcdBothPrint(10, 1, "5 | 5  "); countdownTime1 = countdownTime2 = 300; incr = 5; re_set = 3; break;
        }
      break;

      case 3:
        switch (++mod3 % 3) {
          case 0: lcdBothPrint(10, 1, "1 min  "); countdownTime1 = countdownTime2 = 60;  incr = 0; re_set = 0; break;
          case 1: lcdBothPrint(10, 1, "1 | 2  "); countdownTime1 = countdownTime2 = 60;  incr = 2; re_set = 1; break;
          case 2: lcdBothPrint(10, 1, "2 | 1  "); countdownTime1 = countdownTime2 = 120; incr = 1; re_set = 2; break;
        }
      break;
    }
  }

  else if (isButtonPressed(Select)){
    State = 3;
  }
}