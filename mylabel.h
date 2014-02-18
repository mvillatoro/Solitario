#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
#include <QMouseEvent>
#include "iostream"

using namespace std;

class Mylabel : public QLabel
{
    Q_OBJECT
public:
    explicit Mylabel(QWidget *parent = 0);
        void mousePressEvent(QMouseEvent *event);

protected:


    int x,y;

signals:

public slots:

};

#endif // MYLABEL_H
