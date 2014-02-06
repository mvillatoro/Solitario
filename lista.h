#ifndef LISTA_H
#define LISTA_H

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
    void agregar(int valor);
    void insertar(int valor, int pos);
    int buscar(int valor);
    int getlength();
    int getvalor(int pos);
    void borrar_al_inicio();

    private:
    nodo* inicio;
    nodo* final;
    nodo* actual;
    int cuantos;

};

#endif // LISTA_H
