#ifndef GAME_H
#define GAME_H
#include "barajas.h"
#include "lista.h"


class Game
{
public:
    Game();

    void llenarSubBarajas();


private:
    Barajas *bar;
    Cartas card;

    Cartas *Espadas;
    Cartas *Treboles;
    Cartas *Corazones;
    Cartas *Diamantes;


};

#endif // GAME_H
