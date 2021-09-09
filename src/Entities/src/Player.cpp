#include "../Player.h"

Player::Player() : Entity(100, Vector2D(0, 0)) {
    
}

Player::Player(int _maxLife) : Entity(_maxLife, Vector2D(0,0)) {

}

Player::Player(int _maxLife, Vector2D _position) : Entity(_maxLife, _position) {

}

void Player::handle_input(Input input) {
    switch (input) {
        case Input::LEFT:
            m_position.axisX(m_position.axisX()-VELOCITY);
            break;
        case Input::RIGHT:
            m_position.axisX(m_position.axisX()+VELOCITY);
            break;
        case Input::UP:
            // m_position.axisY(m_position.axisY()-VELOCITY);
            break;
        case Input::DOWN:
            // m_position.axisY(m_position.axisY()+VELOCITY);
            break;
        case Input::BUTTON_A:
            // move BUTTON_A
            break;
        case Input::BUTTON_B:
            // move BUTOON_B
            break;
    
        default:
            break;
    }
}

void Player::draw() {
    int16_t size = 5;

    //gb.display.clear();
    gb.display.setColor(GREEN);
    gb.display.fillRect((int16_t) m_position.axisX(), (int16_t) m_position.axisY(), size, size);
}

void Player::loop() {
    draw();
    // Print nouvelle position
}