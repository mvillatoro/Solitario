#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int value;
    value = rand() % 52;

    cantidad = 0;
    srand(time(NULL));
    barajear(cantidad,value);
    ui->setupUi(this);
    generarMillonesDeBurritos();
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


void MainWindow::barajear(int cant, int random)
{
    int dat;
    dat = rand() % 52;


    if(cant == 52)
        return;

    if(todasLasCartas.Baraja[random]->getUsada())
    {
        barajear(cant, dat);
    }
    else
    {
        Barajeada[cant] = new Cartas();
        Barajeada[cant] = todasLasCartas.Baraja[random];
        todasLasCartas.Baraja[random]->setUsada(true);
    }
}

void MainWindow::generarMillonesDeBurritos()
{

    QPixmap ia = Barajeada[0]->getImagen();
    QLabel *a = new QLabel(this);
    a->setPixmap(ia);
    a->setGeometry(241,282,125,180);
    a->raise();
    a->show();

    QPixmap ib = Barajeada[1]->getImagen();
    QLabel *b = new QLabel(this);
    b->setPixmap(ib);
    b->setGeometry(411,282,125,180);
    b->raise();
    b->show();

    //        QPixmap mypix(":/Images/c01r.png");
    //        QLabel *i=new QLabel(this);
    //        i->setPixmap(mypix);
    //        i->setGeometry(241,282,125,180);
    //       // i->setScaledContents(true);
    //        i->raise();
    //        i->show();


}










