#ifndef DEF_GLOBAL
#define DEF_GLOBAL

#include <Gamebuino-Meta.h>

#include "GBTools.h"
#include "timer.h"

extern const uint8_t font3x5[];
const uint8_t GAME_IS_FINISH_STATE = 4;

//Constantes pour le timer
const uint8_t DAYS_NUMBER = 0;
const uint8_t HOURS_NUMBER = 1;
const uint8_t MINUTES_NUMBER = 2;
const uint8_t SECONDS_NUMBER = 3;
const uint8_t MILLISECONDS_NUMBER = 4;
const uint32_t MAX_TIME_OF_GAME = 20000;

const int VELOCITY = 1;

#endif