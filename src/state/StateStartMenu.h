#ifndef DEF_STATE_START_MENU
#define DEF_STATE_START_MENU

#include "../GLOBALS.h"
#include "State.h"
#include "../vector2d/Vector2D.h"
#include "StateStatus.h"

class StateStartMenu : public State {
    private:
    
    bool m_isDisplayed;
    int m_frameCount;
    StateStatus m_status;
    
    public:

    static const int BLINK_RATE = 10;

    StateStartMenu();
    ~StateStartMenu();

    // Getters

    // Setters

    // Methods

    StateStatus loop();
    void handleInput();

};

#endif