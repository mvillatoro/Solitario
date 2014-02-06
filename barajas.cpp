#include "barajas.h"

Barajas::Barajas()
{
    contador = 0;
    crearBaraja();
    //llenarSubBarajas();
}

void Barajas::crearBaraja()
{

    for(int p = 0; p < 4; p++)
    {
        for(int n = 0; n < 13; n++)
        {
            if(p==0) //crea los corazones
            {
                crearCarta(n+1,'r','c',contador);
            }
            else if(p==1) // crea los diamantes
            {
                crearCarta(n+1,'r','d',contador);
            }
            else if(p==2) // crea las espadas
            {
                crearCarta(n+1,'n','e',contador);
            }
            else if(p==3) // crea los treboles
            {
                crearCarta(n+1,'n','t',contador);
            }
        }
    }
}

void Barajas::crearCarta(int numero, char color, char palo , int pos)
{
    this->Baraja[pos] = new Cartas();

    this->Baraja[pos]->setColor(color);
    this->Baraja[pos]->setNumero(numero);
    this->Baraja[pos]->setPalo(palo);
    contador++;
}
