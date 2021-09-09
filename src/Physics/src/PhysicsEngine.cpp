#include "../PhysicsEngine.h"


const uint8_t isOnOnePlatform(Player &player) {
  return ( (player->getPosition().axisY()+ player->getVelocity()) >= (gb.display.height() - UNDER_CENTER_Y_HERO) ) ? ID_GROUND : NO_ID ;
}