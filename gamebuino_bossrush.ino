#include "src/GLOBALS.h"
#include "src/state/StateRouter.h"
#include "src/Timer.h"

StateRouter stateRouter;

void setup() {
    gb.begin();
    
    stateRouter = StateRouter();

}

void loop() {
    while(!gb.update());
    stateRouter.loop();
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
