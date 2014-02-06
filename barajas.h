#ifndef BARAJAS_H
#define BARAJAS_H
#include "qpixmap.h"

#include "cartas.h"


class Barajas
{
public:
    Barajas();
    Cartas *Baraja[52];
    QPixmap imagenDeCarta;

private:

    void generarImagen();
    void asignarImagenes();

    int contador;

    void crearBaraja();
    void crearCarta(char palo, int numero, char color, int pos);

    QPixmap todasLasImagenes[52];
};

#endif // BARAJAS_H
