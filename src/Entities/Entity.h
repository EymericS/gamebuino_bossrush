#ifndef DEF_ENTITY
#define DEF_ENTITY

#include "../vector2d/Vector2D.h"
#include "../GLOBALS.h"

class Entity {
    private:

    protected:
    
    int m_current_life;
    int m_max_amout_life;
    Vector2D m_position;

    public:

    Entity();
    Entity(int _maxLife);
    Entity(int _maxLife, Vector2D _position);

    virtual void loop() = 0;
};

#endif