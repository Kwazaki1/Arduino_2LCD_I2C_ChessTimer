#include "Globals.h"

void lcdBothPrint(int col, int row, const String& text) {
  lcd1.setCursor(col, row); lcd1.print(text);
  lcd2.setCursor(col, row); lcd2.print(text);
}

void lcdBothClear(){
  lcd1.clear(); lcd2.clear();
}

void createArrows(){
  byte rightArrow[8] = {
  0b00000, // Row 1
  0b01000, // Row 2
  0b01100, // Row 3
  0b01110, // Row 4
  0b01100, // Row 5
  0b01000, // Row 6
  0b00000, // Row 7
  0b00000};// Row 8
  byte leftArrow[8]  = {
  0b00000, // Row 1
  0b00010, // Row 2
  0b00110, // Row 3
  0b01110, // Row 4
  0b00110, // Row 5
  0b00010, // Row 6
  0b00000, // Row 7
  0b00000};// Row 8
  byte downArrow[8]  = {
  0b00000, // Row 1
  0b00000, // Row 2
  0b11111, // Row 3
  0b11111, // Row 4
  0b01110, // Row 5
  0b00100, // Row 6
  0b00000, // Row 7
  0b00000};

  lcd1.createChar(0, rightArrow); lcd2.createChar(0, rightArrow);
  lcd1.createChar(1, leftArrow);  lcd2.createChar(1, leftArrow);
  lcd1.createChar(2, downArrow);  lcd2.createChar(2, downArrow);
}