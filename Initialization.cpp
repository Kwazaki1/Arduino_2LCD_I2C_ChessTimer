#include "Globals.h"

hd44780_I2Cexp lcd1(0x27, 16, 2);
hd44780_I2Cexp lcd2(0x25, 16, 2);

const unsigned long debounceDelay = 150;

unsigned long previousMillis = 0,
              lastButtonTimes[8] = {0},
              now = 0;

const int Select  = 5;
const int Mode    = 2;
const int Reset   = 4;
const int Back    = 3;
const int Pl1     = 6;
const int Pl2     = 7;
const int BUZZER  = 8;
const int LED     = 9;

bool FirstTime  = true;
bool FirstTime2 = true;
bool FirstTime3 = true;
bool FirstTime4 = true;

int mod    = 0;
int mod0   = 0;
int mod1   = 0;
int mod2   = 0;
int mod3   = 0;
int State  = 0;
int re_set = 0;

int m1 = 0;
int s1 = 0;
int m2 = 0;
int s2 = 0;
int countdownTime1 = 0;
int countdownTime2 = 0;
int incrTime = 6;
int incr = 0;

bool game_running    = false;
bool isPaused        = false;
bool pl1Turn         = true;
bool isPl1BtnPressed = false;
bool isPl2BtnPressed = false;