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

    void setNumero(int numero);
    void setColor(char color);
    void setPalo(char palo);

    void addALista();
    void buscarEnLista();
    //Lista elementos;

private:

    //Variables
    int numero;
    char color;
    char palo;




};

#endif // CARTAS_H
