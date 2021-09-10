#ifndef DEF_STATE_GAME_LOOP
#define DEF_STATE_GAME_LOOP

#include "../GLOBALS.h"
#include "State.h"
#include "../vector2d/Vector2D.h"
#include "StateStatus.h"
#include "../Entities/Player.h"
#include "../Entities/Snake.h"

class StateGameLoop : public State {
    private:
    
    int m_frameCount;
    StateStatus m_status;
    Player m_player;
    Snake m_snake;
    
    public:

    StateGameLoop();
    ~StateGameLoop();

    // Getters

    // Setters

    // Methods

    StateStatus loop();
    void handleInput();

};

#endif