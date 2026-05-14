#include "Globals.h"
#include "Functions.h"
#include "TimeValuesVariables.h"

void resetFun(){
  FirstTime = true;
  FirstTime2 = true;
  isPl1BtnPressed = false;
  isPl2BtnPressed = false;
  lcdBothPrint(0, 1, "                ");
  switch (mod) {
    case 0:
      switch (re_set) {
        case 0: lcdBothPrint(9, 1, "60 min "); countdownTime1 = countdownTime2 = 3600; break;
        case 1: lcdBothPrint(9, 1, "90 min "); countdownTime1 = countdownTime2 = 5400; break;
      }
   break;

    case 1:
      switch (re_set) {
        case 0: lcdBothPrint(9, 1, "10 min "); countdownTime1 = countdownTime2 = 600; break;
        case 1: lcdBothPrint(9, 1, "15 | 10"); countdownTime1 = countdownTime2 = 900; break;
        case 2: lcdBothPrint(9, 1, "30 min "); countdownTime1 = countdownTime2 = 1800;break;
      }
   break;

    case 2:
      switch (re_set) {
        case 0: lcdBothPrint(10, 1, "3 min  "); countdownTime1 = countdownTime2 = 180; break;
        case 1: lcdBothPrint(10, 1, "3 | 2  "); countdownTime1 = countdownTime2 = 180; break;
        case 2: lcdBothPrint(10, 1, "5 min  "); countdownTime1 = countdownTime2 = 300; break;
        case 3: lcdBothPrint(10, 1, "5 | 5  "); countdownTime1 = countdownTime2 = 300; break;
      }
   break;

    case 3:
      switch (re_set) { 
        case 0: lcdBothPrint(10, 1, "1 min  "); countdownTime1 = countdownTime2 = 60;  break;
        case 1: lcdBothPrint(10, 1, "1 | 2  "); countdownTime1 = countdownTime2 = 60;  break;
        case 2: lcdBothPrint(10, 1, "2 | 1  "); countdownTime1 = countdownTime2 = 120; break;
      }
   break;
  }
  matchSetup();
}