#include "game.h"

Game::Game()
{
    llenarSubBarajas();
}

void Game::llenarSubBarajas()
{
    for(int c = 0 ; c < 13; c++)
    {
        Corazones[c] = new Cartas();
        Corazones[c] = bar.Baraja[c];

    }
    for(int d = 13   ; d < 26; d++)
    {
       Diamantes[d-13] = new Cartas();
       Diamantes[d-13] = bar.Baraja[d];

    }
    for(int e = 26 ; e < 39; e++)
    {
        Espadas[e-26] = new Cartas();
        Espadas[e-26] = bar.Baraja[e];
    }
    for(int t = 39 ; t < 52; t++)
    {
        Treboles[t-39] = new Cartas();
        Treboles[t-39] = bar.Baraja[t];

    }
}
