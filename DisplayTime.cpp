#include "Globals.h"
#include "TimeValuesVariables.h"

void displayTime(){

  m1 = countdownTime1 / 60; s1 = countdownTime1 % 60;
  m2 = countdownTime2 / 60; s2 = countdownTime2 % 60;

  String p1 = (m1 < 10 ? "0" : "") + String(m1) + ":" + (s1 < 10 ? "0" : "") + String(s1);
  String p2 = (m2 < 10 ? "0" : "") + String(m2) + ":" + (s2 < 10 ? "0" : "") + String(s2);

  lcd1.setCursor(0, 1); lcd1.print(p1);
  lcd1.setCursor(11, 1); lcd1.print(p2);
  lcd2.setCursor(0, 1); lcd2.print(p1);
  lcd2.setCursor(11, 1); lcd2.print(p2);

  if (FirstTime2) {
    lcd1.setCursor(6, 1); lcd1.print("     ");
    lcd2.setCursor(6, 1); lcd2.print("     ");
    lcd1.setCursor(pl1Turn ? 6 : 9, 1); lcd1.write(pl1Turn ? 1 : 0);
    lcd2.setCursor(pl1Turn ? 6 : 9, 1); lcd2.write(pl1Turn ? 1 : 0);
    FirstTime2 = false;
  }
}