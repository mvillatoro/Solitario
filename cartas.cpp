#include "cartas.h"

Cartas::Cartas()
{
    this->usada = false;
    this->bocaAbajo = true;
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

bool Cartas::getUsada()
{
    return this->usada;
}

bool Cartas::getBocaAbajo()
{

    return this->bocaAbajo;

}

QPixmap Cartas::getImagen()
{
    return this->imagen;
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

void Cartas::setUsada(bool usa)
{
    this->usada = usa;
}

void Cartas::setBocaAbajo(bool bocaAbajo)
{
    this->bocaAbajo = bocaAbajo;
}

void Cartas::setImagen(QPixmap imagen)
{
    this->imagen = imagen;
}
