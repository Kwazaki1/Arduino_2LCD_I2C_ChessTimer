#ifndef GLOBALS_H
#define GLOBALS_H

#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

//Declaring the LCD screens by their address
extern hd44780_I2Cexp lcd1;
extern hd44780_I2Cexp lcd2;

//Declaring buttons
extern const int MODE,
                 BACK,
                 RESET,
                 Pause,
                 pl1_button,
                 pl2_button,
                 BUZZER,
                 LED;

//the game modes
extern int mod,
           mod0,
           mod1,
           mod2,
           mod3;

extern int State;
extern int reset;

//Contraindications to unnecessary repetition of functions
extern bool FirstTime,
            FirstTime2,
            FirstTime3;

//setting debounce delay value by milli seconds
extern const unsigned long debounceDelay;
extern unsigned long       previousMillis,
                           now,
                           lastButtonTimes[8];
extern bool isPl1BtnPressed;
extern bool isPl2BtnPressed;
extern bool ChooseModeScreenError;
#endif