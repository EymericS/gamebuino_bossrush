#include "../StateGameOver.h"

StateGameOver::StateGameOver() {
    m_isDisplayed = true;
    m_frameCount = 0;
    m_status = StateStatus::START;
}


StateGameOver::~StateGameOver() {
    
}

// Getters

// Setters

// Methods

StateStatus StateGameOver::loop() {
    m_status = StateStatus::CONTINUE;
    m_frameCount += 1;;

    gb.display.clear();
    gb.display.setFont( font3x5 );
    gb.display.setColor(WHITE);
    gb.display.setFontSize(2);
    GBTools::printCentered("GAME OVER", 0, -10);

    if(m_isDisplayed) {
        gb.display.setFontSize(1);
        GBTools::printCentered("Press A to REPLAY", 0, 10);
    }

    if(m_frameCount >= StateGameOver::BLINK_RATE) {
        m_frameCount = 0;
        m_isDisplayed = !m_isDisplayed;
    }

    handleInput();

    return m_status;
}

void StateGameOver::handleInput() {
    if(gb.buttons.pressed(BUTTON_A)) {
        m_status = StateStatus::NEXT;
    }
}