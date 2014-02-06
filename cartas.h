#ifndef CARTAS_H
#define CARTAS_H
#include "mainwindow.h"

class Cartas
{
public:

    //Funciones
    Cartas();
    int getNumero();
    char getColor();
    char getPalo();

    void setNumero(int numero);
    void setColor(char color);
    void setPalo(char palo);

private:

    //Variables
    int numero;
    char color;
    char palo;



};

#endif // CARTAS_H
