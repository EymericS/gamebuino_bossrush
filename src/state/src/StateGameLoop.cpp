#include "../StateGameLoop.h"

StateGameLoop::StateGameLoop() {
    m_status = StateStatus::START;
}


StateGameLoop::~StateGameLoop() {
    
}

// Getters

// Setters

// Methods

StateStatus StateGameLoop::loop() {
    m_status = StateStatus::CONTINUE;

    gb.display.clear();
    
    String text = "Welcome in gamme loop";
    uint16_t textWidth, textHeight;

    gb.display.setFont( font3x5 );
    gb.display.setColor(WHITE);

    gb.display.getTextBounds(text.c_str(), &textWidth, &textHeight);
    gb.display.cursorX = gb.display.width() / 2 - textWidth / 2;
    gb.display.cursorY = gb.display.height() / 2 - textHeight / 2;
    gb.display.print(text);

    handleInput();

    return m_status;
}

void StateGameLoop::handleInput() {
    if(gb.buttons.pressed(BUTTON_A)) {
        m_status = StateStatus::NEXT;
    }
}