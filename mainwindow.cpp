#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

        cantidad = 0;
       barajear(cantidad);
//        QPixmap mypix(":/Images/c01r.png");
//        QLabel *i=new QLabel(this);
//        i->setPixmap(mypix);
//        i->setGeometry(241,282,125,180);
//       // i->setScaledContents(true);
        ui->setupUi(this);
//        i->raise();
//        i->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAcerca_de_triggered()
{
    QMessageBox *box;
    box = new QMessageBox();
    box->setText("Desarollado por Mario v. \n @maritoxvilla en twitter \n Para Micsi");
    box->show();
}

void MainWindow::llenarDeCartas()
{
    //Corazones
    QPixmap myc01r(":/Images/c01r.png");
    QPixmap myc02r(":/Images/c02r.png");
    QPixmap myc03r(":/Images/c03r.png");
    QPixmap myc04r(":/Images/c04r.png");
    QPixmap myc05r(":/Images/c05r.png");
    QPixmap myc06r(":/Images/c06r.png");
    QPixmap myc07r(":/Images/c07r.png");
    QPixmap myc08r(":/Images/c08r.png");
    QPixmap myc09r(":/Images/c09r.png");
    QPixmap myc10r(":/Images/c10r.png");
    QPixmap myc11r(":/Images/c11r.png");
    QPixmap myc12r(":/Images/c12r.png");
    QPixmap myc13r(":/Images/c13r.png");

    //Diamantes
    QPixmap myd01r(":/Images/d01r.png");
    QPixmap myd02r(":/Images/d02r.png");
    QPixmap myd03r(":/Images/d03r.png");
    QPixmap myd04r(":/Images/d04r.png");
    QPixmap myd05r(":/Images/d05r.png");
    QPixmap myd06r(":/Images/d06r.png");
    QPixmap myd07r(":/Images/d07r.png");
    QPixmap myd08r(":/Images/d08r.png");
    QPixmap myd09r(":/Images/d09r.png");
    QPixmap myd10r(":/Images/d10r.png");
    QPixmap myd11r(":/Images/d11r.png");
    QPixmap myd12r(":/Images/d12r.png");
    QPixmap myd13r(":/Images/d13r.png");

    //Espadas
    QPixmap mye01n(":/Images/e01n.png");
    QPixmap mye02n(":/Images/e02n.png");
    QPixmap mye03n(":/Images/e03n.png");
    QPixmap mye04n(":/Images/e04n.png");
    QPixmap mye05n(":/Images/e05n.png");
    QPixmap mye06n(":/Images/e06n.png");
    QPixmap mye07n(":/Images/e07n.png");
    QPixmap mye08n(":/Images/e08n.png");
    QPixmap mye09n(":/Images/e09n.png");
    QPixmap mye10n(":/Images/e10n.png");
    QPixmap mye11n(":/Images/e11n.png");
    QPixmap mye12n(":/Images/e12n.png");
    QPixmap mye13n(":/Images/e13n.png");

    //Treboles
    QPixmap myt01n(":/Images/t01n.png");
    QPixmap myt02n(":/Images/t02n.png");
    QPixmap myt03n(":/Images/t03n.png");
    QPixmap myt04n(":/Images/t04n.png");
    QPixmap myt05n(":/Images/t05n.png");
    QPixmap myt06n(":/Images/t06n.png");
    QPixmap myt07n(":/Images/t07n.png");
    QPixmap myt08n(":/Images/t08n.png");
    QPixmap myt09n(":/Images/t09n.png");
    QPixmap myt10n(":/Images/t10n.png");
    QPixmap myt11n(":/Images/t11n.png");
    QPixmap myt12n(":/Images/t12n.png");
    QPixmap myt13n(":/Images/t13n.png");




    //***EL IF MAS GRANDE DE LA HISTORIA***


}

void MainWindow::barajear(int cant)
{
    int random;
    random = qrand() % 52;
    if(cant == 52)
        return;

    if(todasLasCartas.Baraja[random]->getUsada()== true)
    {
        return barajear(cant);
    }
    else   if(todasLasCartas.Baraja[random]->getUsada()== false)
    {
        this->Barajeada[cant] = new Cartas();
        this->Barajeada[cant] = todasLasCartas.Baraja[random];
        todasLasCartas.Baraja[random]->setUsada(true);
        return barajear(cant++);
    }

}












































