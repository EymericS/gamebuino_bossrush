#include "Timer.h"

void createTimer(Timer &aTimer) {
  aTimer.activateTimer = false;
}

void resetTimer(Timer &aTimer) {
  aTimer.timeInMilliseconds = 0;
  aTimer.tempTime = 0;
}

void incrementTime(Timer &aTimer) {
  aTimer.tempTime += gb.getTimePerFrame();
}

void pauseForTimer(Timer &aTimer) {
  if(aTimer.tempTime != 0) {
    aTimer.timeInMilliseconds += aTimer.tempTime;
    aTimer.tempTime = 0;
  }
}

// Décomposer le temps écoulé en jours, heures, minutes et secondes
void computeTime(Timer &aTimer) {
  uint32_t rest = aTimer.timeInMilliseconds + aTimer.tempTime;

  const uint16_t DAYS_IN_FRAMES    = 24*60*60*1000;
  const uint16_t HOURS_IN_FRAMES   = 60*60*1000;
  const uint16_t MINUTES_IN_FRAMES = 60*1000;
  const uint16_t SECONDS_IN_FRAMES = 1000;

  uint16_t nbDays = 0;
  uint16_t nbHours = 0;
  uint16_t nbMinutes = 0;
  uint16_t nbSeconds = 0;

  // Calculer les jours
  if(rest >= DAYS_IN_FRAMES) {
    nbDays = (uint16_t)(rest / DAYS_IN_FRAMES);
    rest = (rest - (nbDays * DAYS_IN_FRAMES));
  }
  // Calculer les heures
  if(rest >= HOURS_IN_FRAMES) {
    nbHours = (uint16_t)(rest / HOURS_IN_FRAMES);
    rest = (rest - (nbHours * HOURS_IN_FRAMES));
  }
  // Calculer les minutes
  if(rest >= MINUTES_IN_FRAMES) {
    nbMinutes = (uint16_t)(rest / MINUTES_IN_FRAMES);
    rest = (rest - (nbMinutes * MINUTES_IN_FRAMES));
  }
  // Calculer les secondes
  if(rest >= SECONDS_IN_FRAMES) {
    nbSeconds = (uint16_t)(rest / SECONDS_IN_FRAMES);
    rest = (rest - (nbSeconds * SECONDS_IN_FRAMES));
  }

  aTimer.valueOfTime[DAYS_NUMBER] = nbDays;
  aTimer.valueOfTime[HOURS_NUMBER] = nbHours;
  aTimer.valueOfTime[MINUTES_NUMBER] = nbMinutes;
  aTimer.valueOfTime[SECONDS_NUMBER] = nbSeconds;
  aTimer.valueOfTime[MILLISECONDS_NUMBER] = rest;
}

void runTimer(Timer &aTimer) {
  if(aTimer.activateTimer) {
    incrementTime(aTimer);
    computeTime(aTimer);
  } else {
    pauseForTimer(aTimer);
  }
}

// Afficher le chronomètre
void paintTimer(const uint16_t * aTime) {
  gb.display.setFontSize(1);
  gb.display.setColor(WHITE);
  
  uint16_t nbSeconds = aTime[SECONDS_NUMBER];
  if(nbSeconds < 10) {
    gb.display.print("0");
  }
  gb.display.printf("%d:", nbSeconds);
  uint16_t nbMilliseconds = aTime[MILLISECONDS_NUMBER];
  if(nbMilliseconds < 100) {
    gb.display.print("0");
  }
  if(nbMilliseconds < 10) {
    gb.display.print("0");
  }
  gb.display.printf("%d", nbMilliseconds);
}

void paint(const uint16_t * aTime) {
/* affichage du jeu... */
paintTimer(aTime);
}