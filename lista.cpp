#include "Lista.h"

/*
Lista::Lista()
{
    inicio=final=actual=0;
    cuantos=0;
}
void Lista::agregar(Carta naipe)
{
    nodo* tmp;
    tmp=new nodo(valor);
    if(cuantos==0)
    {
        inicio=final=tmp;
        cuantos++;
    }
    else
    {
        final->sig=tmp;
        tmp->ant=final;
        final=tmp;
        cuantos++;
    }
}

int Lista::buscar(Cartas naipe)
{
    nodo *temp = inicio;
    for(int i=0; i<getlength(); i++)
    {
        if(temp->numero == naipe)
        return i;
        temp = temp->sig;
    }

    return -1;
}

int Lista::getlength()
{
    return cuantos;
}

Cartas Lista::getvalor(int pos)
{
    nodo *temp=inicio;
    for(int i=0;i<pos; i++)
    {
        if(temp=temp->sig)
        {
            return temp->sig;
        }
        else
            temp = temp->sig;
    }
}
*/
