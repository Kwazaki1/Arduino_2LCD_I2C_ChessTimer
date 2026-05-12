#include "Globals.h"

hd44780_I2Cexp lcd1(0x27, 16, 2);
hd44780_I2Cexp lcd2(0x25, 16, 2);

const unsigned long debounceDelay = 150;

unsigned long previousMillis = 0,
              lastButtonTimes[8] = {0},
              now = 0;

const int MODE         = 2;
const int BACK         = 3;
const int RESET        = 4;
const int Pause        = 5;
const int pl1_button   = 6;
const int pl2_button   = 7;
const int BUZZER       = 8;
const int LED          = 9;

bool FirstTime  = true;
bool FirstTime2 = true;
bool FirstTime3 = true;

int mod   = 0;
int mod0  = 0;
int mod1  = 0;
int mod2  = 0;
int mod3  = 0;
int State = 0;

int m1 = 0,
    s1 = 0,
    m2 = 0,
    s2 = 0,
    countdownTime1 = 0,
    countdownTime2 = 0,
    incrTime = 5,
    incr = 0;

bool game_running = false;
bool isPaused     = false;
bool pl1Turn      = true;