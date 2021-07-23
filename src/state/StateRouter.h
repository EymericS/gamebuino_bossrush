#ifndef DEF_STATE_ROUTER
#define DEF_STATE_ROUTER

#include "State.h"
#include "StateStartMenu.h"
#include "StateGameOver.h"
#include "StateType.h"
#include "StateStatus.h"

class StateRouter {
    private:

    StateType m_currentState;
    StateStartMenu* m_startMenu;
    StateGameOver* m_gameOver;

    public:

    StateRouter();
    ~StateRouter();

    // Getters

    StateType getCurrentState() const;

    // Setters


    // Methods

    void loop();

    private:

    void handleInput();


};

#endif