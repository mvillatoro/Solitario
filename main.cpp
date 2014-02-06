#include "mainwindow.h"
#include <QApplication>
#include "iostream"
#include "qmessagebox.h"
#include "barajas.h"

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

    QMessageBox *box = new QMessageBox();

    Barajas *baraja = new Barajas();

    int number = baraja->Baraja[43]->getNumero();
    char colo = baraja->Baraja[43]->getColor();
    char pal = baraja->Baraja[43]->getPalo();

//    int number = baraja->Corazones[1]->getNumero();
//    char colo = baraja->Corazones[1]->getColor();
//    char pal = baraja->Corazones[1]->getPalo();


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
