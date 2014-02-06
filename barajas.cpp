#include "barajas.h"

Barajas::Barajas()
{
    contador = 0;
    crearBaraja();
}

void Barajas::crearBaraja()
{

    for(int p = 0; p < 4; p++)
    {
        for(int n = 0; n < 13; n++)
        {
            if(p==0) //crea los corazones
            {
                crearCarta('c', n+1,'r',contador);
            }
            else if(p==1) // crea los diamantes
            {
                crearCarta('d', n+1,'r',contador);
            }
            else if(p==2) // crea las espadas
            {
                crearCarta('e',n+1,'n',contador);
            }
            else if(p==3) // crea los treboles
            {
                crearCarta('t',n+1,'n',contador);
            }
        }
    }
}

void Barajas::crearCarta(char palo ,int numero, char color, int pos)
{
    this->Baraja[pos] = new Cartas();

    this->Baraja[pos]->setColor(color);
    this->Baraja[pos]->setNumero(numero);
    this->Baraja[pos]->setPalo(palo);
    contador++;
}
