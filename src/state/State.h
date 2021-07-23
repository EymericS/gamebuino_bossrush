#ifndef DEF_STATE
#define DEF_STATE

#include "StateStatus.h"

class State {
    private:

    public:

    virtual StateStatus loop() = 0;
    virtual void handleInput() = 0;

};

#endif