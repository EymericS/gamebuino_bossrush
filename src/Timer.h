#ifndef PLATFORMER_TIMER
#define PLATFORMER_TIMER

#include <Gamebuino-Meta.h>

#include "GLOBALS.h"

struct Timer {
  uint32_t timeInMilliseconds;
  uint32_t tempTime;
  uint16_t valueOfTime[5] = {0, 0, 0, 0, 0};
  bool activateTimer;
};

void createTimer(Timer &aTimer);
void resetTimer(Timer &aTimer);
void incrementTime(Timer &aTimer);
void pauseForTimer(Timer &aTimer);
void computeTime(Timer &aTimer);
void runTimer(Timer &aTimer);

void paintTimer(const uint16_t * aTime);
void paint(const uint16_t * aTime);
#endif