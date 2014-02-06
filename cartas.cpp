#include "cartas.h"

Cartas::Cartas()
{
}

char Cartas::getColor()
{
    return this->color;
}

int Cartas::getNumero()
{
    return this->numero;
}

char Cartas::getPalo()
{
    return this->palo;
}

void Cartas::setColor(char color)
{
    this->color = color;
}

void Cartas::setNumero(int numero)
{
    this->numero = numero;
}

void Cartas::setPalo(char palo)
{
    this->palo = palo;
}
