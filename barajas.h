#ifndef BARAJAS_H
#define BARAJAS_H

#include "cartas.h"


class Barajas
{
public:
    Barajas();
    Cartas *Baraja[52];

private:

    int contador;

    void crearBaraja();
    void crearCarta(int numero, char color, char palo, int pos);

};

#endif // BARAJAS_H
