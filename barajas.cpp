#include "barajas.h"

Barajas::Barajas()
{
    contador = 0;
    crearBaraja();
    generarImagen();
    asignarImagenes();

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

void Barajas::asignarImagenes()
{
    for(int i = 0; i < 52; i++)
    {
        QPixmap imagenTemporal = todasLasImagenes[i];
        Baraja[i]->setImagen(imagenTemporal);
    }
}

void Barajas::generarImagen()
{
    QPixmap myc01r(":/Images/c01r.png");
    todasLasImagenes[0] = myc01r;

    QPixmap myc02r(":/Images/c02r.png");
    todasLasImagenes[1] = myc02r;

    QPixmap myc03r(":/Images/c03r.png");
    todasLasImagenes[2] = myc03r;

    QPixmap myc04r(":/Images/c04r.png");
    todasLasImagenes[3] = myc04r;

    QPixmap myc05r(":/Images/c05r.png");
    todasLasImagenes[4] = myc05r;

    QPixmap myc06r(":/Images/c06r.png");
    todasLasImagenes[5] = myc06r;

    QPixmap myc07r(":/Images/c07r.png");
    todasLasImagenes[6] = myc07r;

    QPixmap myc08r(":/Images/c08r.png");
    todasLasImagenes[7] = myc08r;

    QPixmap myc09r(":/Images/c09r.png");
    todasLasImagenes[8] = myc09r;

    QPixmap myc10r(":/Images/c10r.png");
    todasLasImagenes[9] = myc10r;

    QPixmap myc11r(":/Images/c11r.png");
    todasLasImagenes[10] = myc11r;

    QPixmap myc12r(":/Images/c12r.png");
    todasLasImagenes[11] = myc12r;

    QPixmap myc13r(":/Images/c13r.png");
    todasLasImagenes[12] = myc13r;

    //Diamantes
    QPixmap myd01r(":/Images/d01r.png");
    todasLasImagenes[13] = myd01r;

    QPixmap myd02r(":/Images/d02r.png");
    todasLasImagenes[14] = myd02r;

    QPixmap myd03r(":/Images/d03r.png");
    todasLasImagenes[15] = myd03r;

    QPixmap myd04r(":/Images/d04r.png");
    todasLasImagenes[16] = myd04r;

    QPixmap myd05r(":/Images/d05r.png");
    todasLasImagenes[17] = myd05r;

    QPixmap myd06r(":/Images/d06r.png");
    todasLasImagenes[18] = myd06r;

    QPixmap myd07r(":/Images/d07r.png");
    todasLasImagenes[19] = myd07r;

    QPixmap myd08r(":/Images/d08r.png");
    todasLasImagenes[20] = myd08r;

    QPixmap myd09r(":/Images/d09r.png");
    todasLasImagenes[21] = myd09r;

    QPixmap myd10r(":/Images/d10r.png");
    todasLasImagenes[22] = myd10r;

    QPixmap myd11r(":/Images/d11r.png");
    todasLasImagenes[23] = myd11r;

    QPixmap myd12r(":/Images/d12r.png");
    todasLasImagenes[24] = myd12r;

    QPixmap myd13r(":/Images/d13r.png");
    todasLasImagenes[25] = myd13r;

    //Espadas
    QPixmap mye01n(":/Images/e01n.png");
    todasLasImagenes[26] = mye01n;

    QPixmap mye02n(":/Images/e02n.png");
    todasLasImagenes[27] = mye02n;

    QPixmap mye03n(":/Images/e03n.png");
    todasLasImagenes[28] = mye03n;

    QPixmap mye04n(":/Images/e04n.png");
    todasLasImagenes[29] = mye04n;

    QPixmap mye05n(":/Images/e05n.png");
    todasLasImagenes[30] = mye05n;

    QPixmap mye06n(":/Images/e06n.png");
    todasLasImagenes[31] = mye06n;

    QPixmap mye07n(":/Images/e07n.png");
    todasLasImagenes[32] = mye07n;

    QPixmap mye08n(":/Images/e08n.png");
    todasLasImagenes[33] = mye08n;

    QPixmap mye09n(":/Images/e09n.png");
    todasLasImagenes[34] = mye09n;

    QPixmap mye10n(":/Images/e10n.png");
    todasLasImagenes[35] = mye10n;

    QPixmap mye11n(":/Images/e11n.png");
    todasLasImagenes[36] = mye11n;

    QPixmap mye12n(":/Images/e12n.png");
    todasLasImagenes[37] = mye12n;

    QPixmap mye13n(":/Images/e13n.png");
    todasLasImagenes[38] = mye13n;

    //Treboles
    QPixmap myt01n(":/Images/t01n.png");
    todasLasImagenes[39] = myt01n;

    QPixmap myt02n(":/Images/t02n.png");
    todasLasImagenes[40] = myt02n;

    QPixmap myt03n(":/Images/t03n.png");
    todasLasImagenes[41] = myt03n;

    QPixmap myt04n(":/Images/t04n.png");
    todasLasImagenes[42] = myt04n;

    QPixmap myt05n(":/Images/t05n.png");
    todasLasImagenes[43] = myt05n;

    QPixmap myt06n(":/Images/t06n.png");
    todasLasImagenes[44] = myt06n;

    QPixmap myt07n(":/Images/t07n.png");
    todasLasImagenes[45] = myt07n;

    QPixmap myt08n(":/Images/t08n.png");
    todasLasImagenes[46] = myt08n;

    QPixmap myt09n(":/Images/t09n.png");
    todasLasImagenes[47] = myt09n;

    QPixmap myt10n(":/Images/t10n.png");
    todasLasImagenes[48] = myt10n;

    QPixmap myt11n(":/Images/t11n.png");
    todasLasImagenes[49] = myt11n;

    QPixmap myt12n(":/Images/t12n.png");
    todasLasImagenes[50] = myt12n;

    QPixmap myt13n(":/Images/t13n.png");
    todasLasImagenes[51] = myt13n;

}






















