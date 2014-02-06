#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qpixmap.h"
#include "qlabel.h"
#include "qmessagebox.h"
#include "barajas.h"
#include "cartas.h"

#include <QMainWindow>
#include "qtoolbar.h"
#include<stdlib.h>
#include<time.h>

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

    void barajear(int cant);
};

#endif // MAINWINDOW_H
