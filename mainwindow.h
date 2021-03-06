#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<stdlib.h>
#include <QFrame>
#include<time.h>
#include "qpixmap.h"
#include "qlabel.h"
#include "qmessagebox.h"
#include "barajas.h"
#include "cartas.h"
#include "qtoolbar.h"
#include "QDragEnterEvent"
#include "QDropEvent"
#include "qmimedata.h"
#include "qdrag.h"
#include "QPainter"
#include "mylabel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Cartas *Barajeada[52];
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAcerca_de_triggered();

private:

    Ui::MainWindow *ui;
    Barajas todasLasCartas;
    int cantidad;
    void generarMillonesDeBurritos();
    void barajear(int cant, int random);
    int value;



    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *event);
};

#endif // MAINWINDOW_H
