#ifndef CARTAS_H
#define CARTAS_H
#include "lista.h"

class Cartas
{
public:

    //Funciones
    Cartas();
    int getNumero();
    char getColor();
    char getPalo();
    bool getUsada();

    void setNumero(int numero);
    void setColor(char color);
    void setPalo(char palo);
    void setUsada(bool usa);

private:

    //Variables
    bool usada;
    int numero;
    char color;
    char palo;




};

#endif // CARTAS_H
