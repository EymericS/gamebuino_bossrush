#include "../Snake.h"

Snake::Snake() : Monster(), direction(true) {
    //Direction true => left, false => right
}

void Snake::compute_movement(){
    if (direction){
        if (gb.display.width <= m_position.axisX()+VELOCITY){
            m_position.axisX(m_position.axisX()+VELOCITY);
        }
    }
    else{
        if (0 >=  m_position.axisX()-VELOCITY){
            m_position.axisX(m_position.axisX()-VELOCITY);
        }
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

