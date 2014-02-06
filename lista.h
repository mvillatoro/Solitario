#ifndef LISTA_H
#define LISTA_H

#include "cartas.h"

class nodo{
public:
    int numero;
    nodo* sig;
    nodo* ant;
    nodo(int val){  sig=ant=0;    numero=val;         }
};

class Lista
{
public:
    Lista();
    void agregar(Cartas naipe);
    int buscar(Cartas naipe);
    int getlength();
    Cartas getvalor(int pos);

    private:
    nodo* inicio;
    nodo* final;
    nodo* actual;
    int cuantos;

};

#endif // LISTA_H
