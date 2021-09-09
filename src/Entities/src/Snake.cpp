#include "../Snake.h"

Snake::Snake() : Monster(), direction(true) {
    //Direction true => right, false =>  left
}

void Snake::compute_movement(){
    if (direction){
        int positionX = m_position.axisX();
        if (gb.display.width() >= positionX + 4 + 1){
            m_position.axisX(m_position.axisX()+VELOCITY);
        }
        else direction = !direction;
    }
    else{
        if (0 <=  m_position.axisX()-VELOCITY){
            m_position.axisX(m_position.axisX()-VELOCITY);
        }
        else direction = !direction;
    }
}

void Snake::draw(){
    int16_t size = 4;

    //gb.display.clear();
    gb.display.setColor(RED);
    gb.display.fillRect((int16_t) m_position.axisX(), (int16_t) m_position.axisY(), size, size);
}

void Snake::loop() {
    compute_movement();
    draw();
}

