#include "../StateStartMenu.h"

StateStartMenu::StateStartMenu() {
    m_isDisplayed = false;
    m_frameCount = 0;
    m_status = StateStatus::START;
}


StateStartMenu::~StateStartMenu() {
    
}

// Getters

// Setters

// Methods

StateStatus StateStartMenu::loop() {
    m_status = StateStatus::CONTINUE;
    m_frameCount += 1;

    if(m_frameCount >= StateStartMenu::BLINK_RATE) {
        m_frameCount = 0;
        m_isDisplayed = !m_isDisplayed;

        if(m_isDisplayed) {
            String text = "Press A to PLAY";
            uint16_t textWidth, textHeight;

            gb.display.setFont( font3x5 );
            gb.display.setColor(WHITE);

            gb.display.getTextBounds(text.c_str(), &textWidth, &textHeight);
            gb.display.cursorX = gb.display.width() / 2 - textWidth / 2;
            gb.display.cursorY = gb.display.height() / 2 - textHeight / 2;
            gb.display.print(text);
        }
        else {
            gb.display.clear();
        }
    }

    handleInput();

    return m_status;
}

void StateStartMenu::handleInput() {
    if(gb.buttons.pressed(BUTTON_A)) {
        m_status = StateStatus::NEXT;
    }
}