#ifndef PLATFORMER_TIMER
#define PLATFORMER_TIMER

#include <Gamebuino-Meta.h>

#include "Constants.h"

struct Timer {
  uint32_t timeInMilliseconds;
  uint32_t tempTime;
  uint16_t valueOfTime[5] = {0, 0, 0, 0, 0};
  bool activateTimer;
};

void createTimer(Timer &aTimer);

#endif