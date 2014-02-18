#include "mylabel.h"

Mylabel::Mylabel(QWidget *parent) :
    QLabe(parent)
{
}

void Mylabel::mousePressEvent(QMouseEvent *event)
{

      x= event->x;
      y=event->y;

      cout<< x,y;

}
