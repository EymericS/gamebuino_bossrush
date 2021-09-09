// Etat du personnage
const uint8_t ON_THE_PLATFORM_STATE = 0; // ... le personnage est sur le sol
const uint8_t FREE_FALL_STATE = 1; // ......... le personnage est en chute libre
const uint8_t PUSH_FOR_JUMP_STATE = 2; // ..... le personnage donne une impulsion pour sauter
const uint8_t JUMP_STATE = 3; // .............. le personnage saute

// Identifiants des plateformes
const uint8_t NO_ID = 0;
const uint8_t ID_GROUND = 1;

// Gravité
const uint8_t GRAVITY = 2;