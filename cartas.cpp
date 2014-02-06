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
    if(color == 'r' || color == 'n')
    this->color = color;
}

void Cartas::setNumero(int numero)
{
    if(numero >0 || numero < 13)
    this->numero = numero;
}

void Cartas::setPalo(char palo)
{
    if(palo == 'e' ||palo == 't' ||palo == 'c' ||palo == 'd')
    this->palo = palo;
}
