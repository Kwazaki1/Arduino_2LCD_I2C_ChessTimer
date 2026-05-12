#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

hd44780_I2Cexp lcd1(0x27, 16, 2);
hd44780_I2Cexp lcd2(0x25, 16, 2);

const unsigned long debounceDelay = 150;

unsigned long previousMillis = 0,
              lastButtonTimes[8] = {0},
              now = 0;

const int MODE = 2,
          BACK = 3,
          RESET = 4,
          Pause = 5,
          pl1_button = 6,
          pl2_button = 7,
          BUZZER = 8,
          LED = 9;

bool FirstTime = true,
     FirstTime2 = true,
     FirstTime3 = true;

int mod = 0,
    mod0 = 0,
    mod1 = 0,
    mod2 = 0,
    mod3 = 0,
    State = 0;

int m1 = 0,
    s1 = 0,
    m2 = 0,
    s2 = 0,
    countdownTime1 = 0,
    countdownTime2 = 0,
    incr = 0;

bool game_running = false,
     isPaused = false,
     pl1Turn = true;