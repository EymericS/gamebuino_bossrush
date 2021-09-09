#ifndef DEF_MONSTER
#define DEF_MONSTER

#include "Entity.h"

class Monster : public Entity {

    private:
    void compute_movement();
    void draw();
    protected:
    
    public:

    Monster();
    virtual void loop() = 0;
};

#endif