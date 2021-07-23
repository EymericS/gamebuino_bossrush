#include "../StateRouter.h"

StateRouter::StateRouter() {
    m_currentState = StateType::START_MENU;
    m_startMenu = new StateStartMenu();
    m_gameOver = new StateGameOver();
}

StateRouter::~StateRouter() {

}

// Getters

StateType StateRouter::getCurrentState() const {
    return m_currentState;
}

// Setters


// Methods

void StateRouter::loop() {
    switch (getCurrentState()) {
        case StateType::START_MENU:
            if(m_startMenu->loop() == StateStatus::NEXT) {
                m_currentState = StateType::GAME_OVER;
            }
            break;

        case StateType::GAME_OVER:
            if(m_gameOver->loop() == StateStatus::NEXT) {
                m_currentState = StateType::START_MENU;
            }
            break;
    
        default:
            break;
    }
}