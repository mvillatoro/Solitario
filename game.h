#ifndef GAME_H
#define GAME_H
#include "barajas.h"


class Game
{
public:
    Game();

    void llenarSubBarajas();

    Cartas *Espadas[13];
    Cartas *Treboles[13];
    Cartas *Corazones[13];
    Cartas *Diamantes[13];

private:
    Barajas bar;
    Cartas card;


};

#endif // GAME_H
