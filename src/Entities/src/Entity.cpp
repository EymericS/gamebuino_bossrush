#include "../Entity.h"


Entity::Entity() : Entity(100, Vector2D(0, 0)) {
    
}

Entity::Entity(int _maxLife, Vector2D _position) {
    m_current_life = m_max_amout_life = _maxLife;
    m_position = _position;
}