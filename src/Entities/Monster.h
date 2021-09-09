#ifndef DEF_MONSTER
#define DEF_MONSTER

#include "Entity.h"

class Monster : public Entity {

    private:
    void compute_movement();
        
    protected:

    public:

    Monster();
    void loop();
};

#endif