#include "src/GLOBALS.h"
#include "src/state/StateRouter.h"
#include "src/Timer.h"

StateRouter stateRouter;
Timer myTimer;
Timer aTimer;
    
void setup() {
    gb.begin();
    
    stateRouter = StateRouter();
    createTimer(myTimer);
    resetTimer(myTimer);
}

void loop() {
    while(!gb.update());
    stateRouter.loop();
    myTimer.activateTimer = true;
    StateType stateType= stateRouter.getCurrentState();
    
      if(stateType==StateType::GAME_LOOP) {
         runTimer(myTimer);
         paint(myTimer.valueOfTime);
      }
      else if(stateType==StateType::GAME_OVER) {
         resetTimer(myTimer);  
      }
      else{
    
      } 
}

/*

States

Game Loop :
    Acquire input from the player
    Update the game status as a result of user input.
    Update the game status as a result of time.
    Check for collisions among objects.
    Update objects based on game physics.

App Loop :
    APP or Game state with enum

*/
