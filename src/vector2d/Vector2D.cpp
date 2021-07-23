#include "Vector2D.h"

Vector2D::Vector2D()
: m_axisX(0), m_axisY(0) {

}

Vector2D::Vector2D(int _axisX, int _axisY)
: m_axisX(_axisX), m_axisY(_axisY) {

}

// Getters

int Vector2D::axisX() {
    return m_axisX;
}

int Vector2D::axisY() {
    return m_axisY;
}

// Setters

void Vector2D::axisX(int _axisX) {
    m_axisX = _axisX;
}

void Vector2D::axisY(int _axisY) {
    m_axisY = _axisY;
}

// Methods