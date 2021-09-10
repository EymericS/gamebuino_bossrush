#ifndef DEF_STATE_GAME_OVER
#define DEF_STATE_GAME_OVER

#include "../GLOBALS.h"
#include "State.h"
#include "../vector2d/Vector2D.h"
#include "StateStatus.h"
#include "../Timer.h"

class StateGameOver : public State {
    private:
    
    bool m_isDisplayed;
    int m_frameCount;
    StateStatus m_status;
    
    public:

    static const int BLINK_RATE = 20;

    StateGameOver();
    ~StateGameOver();

    // Getters

    // Setters

    // Methods

    StateStatus loop();
    void handleInput();

};

#endif