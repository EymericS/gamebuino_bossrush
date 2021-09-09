#ifndef DEF_PLAYER
#define DEF_PLAYER

#include "Entity.h"

const int VELOCITY = 1;

class Player : public Entity {

    private:
    void draw();
        
    protected:

    public:

    enum class Input { LEFT, RIGHT, UP, DOWN, BUTTON_A, BUTTON_B };

    Player();
    Player(int _maxLife);
    Player(int _maxLife, Vector2D _position);

    void handle_input(Input input);

    void loop();
};

#endif