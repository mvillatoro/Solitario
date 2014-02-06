#include "Lista.h"

Lista::Lista()
{
    inicio=final=actual=0;
    cuantos=0;
}

void Lista::agregar(int valor)
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

void Lista::insertar(int valor, int pos)
{
    nodo* tmp;
    tmp=new nodo(valor);

    if(pos==0)
    {
        tmp->sig=inicio;
        inicio->ant = tmp;
        inicio = tmp;
        cuantos++;

    }
    else if(pos<cuantos)
    {
        actual=inicio;
        for(int i=0; i<pos; i++)
        {
            actual=actual->sig;
        }

        tmp->sig=actual;
        tmp->ant=actual->ant;
        actual->ant=tmp;
        tmp->ant->sig=tmp;
        cuantos++;

    }
}

int Lista::buscar(int valor)
{
    nodo *temp = inicio;
    for(int i=0; i<getlength(); i++)
    {
        if(temp->numero == valor)
        return i;
        temp = temp->sig;
    }

    return -1;
}

int Lista::getlength()
{
    return cuantos;
}

int Lista::getvalor(int pos)
{
    nodo *temp=inicio;
    for(int i=0;i<pos; i++)
    {
        temp=temp->sig;
    }
    return temp->numero;
}

void Lista::borrar_al_inicio()
{
    if(this->cuantos==1)
    {
        delete this->inicio;
        inicio = final = 0;
        cuantos = 0;

    }
    else
    {
        this->actual = this->inicio->sig;
        this->actual->ant = 0;
        delete this->inicio;
        inicio = actual;
        cuantos--;
    }

}
