#include "../StateGameLoop.h"

StateGameLoop::StateGameLoop() {
    m_status = StateStatus::START;
    m_player = Player();
    m_snake = Snake();
}


StateGameLoop::~StateGameLoop() {
    
}

// Getters

// Setters

// Methods

StateStatus StateGameLoop::loop() {
    m_status = StateStatus::CONTINUE;

    handleInput();

    gb.display.clear();
    
    String text = "Welcome in game";
    uint16_t textWidth, textHeight;

    gb.display.setFont( font3x5 );
    gb.display.setColor(WHITE);

    gb.display.getTextBounds(text.c_str(), &textWidth, &textHeight);
    gb.display.cursorX = gb.display.width() / 2 - textWidth / 2;
    gb.display.cursorY = gb.display.height() / 2 - textHeight / 2;
    gb.display.print(text);

    m_player.loop();
    m_snake.loop();

    return m_status;
}

void StateGameLoop::handleInput() {
    if(gb.buttons.pressed(BUTTON_A)) {
        m_status = StateStatus::NEXT;
    }
    if(gb.buttons.pressed(BUTTON_B)) {

    }
    if(gb.buttons.pressed(BUTTON_UP)) {
        
    }
    if(gb.buttons.pressed(BUTTON_DOWN)) {

    }
    if(gb.buttons.pressed(BUTTON_RIGHT)) {
        m_player.handle_input(Player::Input::RIGHT);
    }
    if(gb.buttons.pressed(BUTTON_LEFT)) {
        m_player.handle_input(Player::Input::LEFT);
    }
}