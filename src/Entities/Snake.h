#ifndef DEF_SNAKE
#define DEF_SNAKE

#include "Monster.h"



class Snake : public Monster{

    private:
    bool direction;
    

    protected : 

    public:
    
    Snake();
    Snake(Vector2D _position);

    void loop();
};

#endif

