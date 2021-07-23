#include <Gamebuino-Meta.h>
#include "src/GLOBALS.h"

void setup() {
    gb.begin();
}

void loop() {
    while(!gb.update());

}
