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
    box->setText("Desarollado por Mario v. \n @maritoxvilla en twitter \n Para A.R.");
    box->show();
}


void MainWindow::barajear(int cant, int random)
{
    int dat;
    dat = rand() % 52;
    for(int w = cant ;w<52; w++)
    {
        if(cant == 52)
            return;

        if(todasLasCartas.Baraja[random]->getUsada())
        {
            return barajear(cant, dat);
        }
        else
        {
            Barajeada[cant] = new Cartas();
            Barajeada[cant] = todasLasCartas.Baraja[random];
            todasLasCartas.Baraja[random]->setUsada(true);
            cant++;
        }
    }
}

void MainWindow::generarMillonesDeBurritos()
{

    QPixmap CardBack(":/Images/x_back.png");

    //PRIMER ESCALERA

    QPixmap ia = Barajeada[0]->getImagen();
    QLabel *a = new QLabel(this);
    a->setPixmap(ia);
    a->setGeometry(241,282,125,180);
    a->raise();
    a->show();

    //SEGUNDA ESCALERA

    QPixmap ib = CardBack;//Barajeada[0]->getImagen();
    QLabel *b = new QLabel(this);
    b->setPixmap(ib);
    b->setGeometry(411,282,125,180);
    b->raise();
    b->show();

        QPixmap ib2 = Barajeada[1]->getImagen();
        QLabel *b2 = new QLabel(this);
        b2->setPixmap(ib2);
        b2->setGeometry(411,300,125,180);
        b2->raise();
        b2->show();

    //TERCER ESCALERA

    QPixmap ic = CardBack;//Barajeada[0]->getImagen();
    QLabel *c = new QLabel(this);
    c->setPixmap(ic);
    c->setGeometry(581,282,125,180);
    c->raise();
    c->show();

        QPixmap ic2 = CardBack;//Barajeada[0]->getImagen();
        QLabel *c2 = new QLabel(this);
        c2->setPixmap(ic2);
        c2->setGeometry(581,300,125,180);
        c2->raise();
        c2->show();

            QPixmap ic3 = Barajeada[2]->getImagen();
            QLabel *c3 = new QLabel(this);
            c3->setPixmap(ic3);
            c3->setGeometry(581,318,125,180);
            c3->raise();
            c3->show();

    //CUARTA ESCALERA

    QPixmap id = CardBack;//Barajeada[0]->getImagen();
    QLabel *d = new QLabel(this);
    d->setPixmap(id);
    d->setGeometry(751,282,125,180);
    d->raise();
    d->show();

        QPixmap id2 = CardBack;//Barajeada[0]->getImagen();
        QLabel *d2 = new QLabel(this);
        d2->setPixmap(id2);
        d2->setGeometry(751,300,125,180);
        d2->raise();
        d2->show();

            QPixmap id3 = CardBack;//Barajeada[0]->getImagen();
            QLabel *d3 = new QLabel(this);
            d3->setPixmap(id3);
            d3->setGeometry(751,318,125,180);
            d3->raise();
            d3->show();

                QPixmap id4 = Barajeada[3]->getImagen();
                QLabel *d4 = new QLabel(this);
                d4->setPixmap(id4);
                d4->setGeometry(751,336,125,180);
                d4->raise();
                d4->show();

    //QUINTA ESCALERA

    QPixmap ie = CardBack;//Barajeada[0]->getImagen();
    QLabel *e = new QLabel(this);
    e->setPixmap(ie);
    e->setGeometry(921,282,125,180);
    e->raise();
    e->show();

        QPixmap ie2 = CardBack;//Barajeada[0]->getImagen();
        QLabel *e2 = new QLabel(this);
        e2->setPixmap(ie2);
        e2->setGeometry(921,300,125,180);
        e2->raise();
        e2->show();

            QPixmap ie3 = CardBack;//Barajeada[0]->getImagen();
            QLabel *e3 = new QLabel(this);
            e3->setPixmap(ie3);
            e3->setGeometry(921,318,125,180);
            e3->raise();
            e3->show();

                QPixmap ie4 = CardBack;//Barajeada[0]->getImagen();
                QLabel *e4 = new QLabel(this);
                e4->setPixmap(ie4);
                e4->setGeometry(921,336,125,180);
                e4->raise();
                e4->show();

                    QPixmap ie5 = Barajeada[4]->getImagen();
                    QLabel *e5 = new QLabel(this);
                    e5->setPixmap(ie5);
                    e5->setGeometry(921,354,125,180);
                    e5->raise();
                    e5->show();


    //SEXTA ESCALERA

    QPixmap ik = CardBack;//Barajeada[0]->getImagen();
    QLabel *k = new QLabel(this);
    k->setPixmap(ik);
    k->setGeometry(1091,282,125,180);
    k->raise();
    k->show();

        QPixmap ik2 = CardBack;//Barajeada[0]->getImagen();
        QLabel *k2 = new QLabel(this);
        k2->setPixmap(ik2);
        k2->setGeometry(1091,300,125,180);
        k2->raise();
        k2->show();

            QPixmap ik3 = CardBack;//Barajeada[0]->getImagen();
            QLabel *k3 = new QLabel(this);
            k3->setPixmap(ik3);
            k3->setGeometry(1091,318,125,180);
            k3->raise();
            k3->show();

                QPixmap ik4 = CardBack;//Barajeada[0]->getImagen();
                QLabel *k4 = new QLabel(this);
                k4->setPixmap(ik4);
                k4->setGeometry(1091,336,125,180);
                k4->raise();
                k4->show();

                    QPixmap ik5 = CardBack;//Barajeada[0]->getImagen();
                    QLabel *k5 = new QLabel(this);
                    k5->setPixmap(ik5);
                    k5->setGeometry(1091,354,125,180);
                    k5->raise();
                    k5->show();
                        QPixmap ik6 = Barajeada[5]->getImagen();
                        QLabel *k6 = new QLabel(this);
                        k6->setPixmap(ik6);
                        k6->setGeometry(1091,372,125,180);
                        k6->raise();
                        k6->show();

    //SEPTIMA ESCALERA

    QPixmap ig = CardBack;//Barajeada[0]->getImagen();
    QLabel *g = new QLabel(this);
    g->setPixmap(ig);
    g->setGeometry(1261,282,125,180);
    g->raise();
    g->show();

        QPixmap ig2 = CardBack;//Barajeada[0]->getImagen();
        QLabel *g2 = new QLabel(this);
        g2->setPixmap(ig2);
        g2->setGeometry(1261,300,125,180);
        g2->raise();
        g2->show();

            QPixmap ig3 = CardBack;//Barajeada[0]->getImagen();
            QLabel *g3 = new QLabel(this);
            g3->setPixmap(ig3);
            g3->setGeometry(1261,318,125,180);
            g3->raise();
            g3->show();

                QPixmap ig4 = CardBack;//Barajeada[0]->getImagen();
                QLabel *g4 = new QLabel(this);
                g4->setPixmap(ig4);
                g4->setGeometry(1261,336,125,180);
                g4->raise();
                g4->show();

                    QPixmap ig5 = CardBack;//Barajeada[0]->getImagen();
                    QLabel *g5 = new QLabel(this);
                    g5->setPixmap(ig5);
                    g5->setGeometry(1261,354,125,180);
                    g5->raise();
                    g5->show();

                        QPixmap ig6 = CardBack;//Barajeada[0]->getImagen();
                        QLabel *g6 = new QLabel(this);
                        g6->setPixmap(ig6);
                        g6->setGeometry(1261,372,125,180);
                        g6->raise();
                        g6->show();

                            QPixmap ig7 = Barajeada[6]->getImagen();
                            QLabel *g7 = new QLabel(this);
                            g7->setPixmap(ig7);
                            g7->setGeometry(1261,390,125,180);
                            g7->raise();
                            g7->show();

    //        QPixmap mypix(":/Images/c01r.png");
    //        QLabel *i=new QLabel(this);
    //        i->setPixmap(mypix);
    //        i->setGeometry(241,282,125,180);
    //       // i->setScaledContents(true);
    //        i->raise();
    //        i->show();


}










