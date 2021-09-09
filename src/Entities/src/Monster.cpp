#include "../Monster.h"

Monster::Monster() : Entity(100) {
    
}

void Monster::compute_movement() {
    // Mouvement gauche ou droite ?? haut / bas
}

void Monster::loop() {
    compute_movement();
    // Print nouvelle position
}