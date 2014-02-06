#include "mainwindow.h"
#include <QApplication>
#include "iostream"
#include "qmessagebox.h"
#include "barajas.h"
#include "game.h"

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

    QMessageBox *box = new QMessageBox();

    Barajas *baraja = new Barajas();
    Game *juego = new Game();

//    int number = baraja->Baraja[20]->getNumero();
//    char colo = baraja->Baraja[20]->getColor();
//    char pal = baraja->Baraja[20]->getPalo();

        int number = juego->Corazones[12]->getNumero();
        char colo = juego->Corazones[12]->getColor();
        char pal = juego->Corazones[12]->getPalo();

    QString numero;
    QString colore;
    QString palore;

    numero.append(QString("%1").arg(number));
    colore.append(QString(colo));
    palore.append(QString(pal));



    box->setText(numero + colore + palore);
    box->show();


    return a.exec();


}
