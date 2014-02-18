#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    value = rand() % 52;

    //value = rand() % 52;

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

    QPixmap ia;
    int aux = 0;

    for(int i = 0; i < 7 ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            if(j==i)
                this->Barajeada[aux + i]->setBocaAbajo(false);

            if(this->Barajeada[aux + i]->getBocaAbajo())
                ia = CardBack;
            else
                ia = Barajeada[aux + i]->getImagen();

            aux++;

            QLabel *a = new QLabel(this);
            a->setPixmap(ia);
            a->setGeometry(241+(i*170),232+(j*10),114,153);
            a->setScaledContents(true);
            a->raise();
            a->show();
            a->setAttribute(Qt::WA_DeleteOnClose);
        }
    }

}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void MainWindow::dragMoveEvent(QDragMoveEvent *event)
{
    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void MainWindow::dropEvent(QDropEvent *event)
{
    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        QByteArray itemData = event->mimeData()->data("application/x-dnditemdata");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPixmap pixmap;
        QPoint offset;
        dataStream >> pixmap >> offset;

        QLabel *newIcon = new QLabel(this);
        newIcon->setPixmap(pixmap);
        newIcon->move(event->pos() - offset);
        newIcon->setFixedSize(114,153);
        newIcon->setScaledContents(true);
        newIcon->show();
        newIcon->setAttribute(Qt::WA_DeleteOnClose);

        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

//! [1]
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    QLabel *child = static_cast<QLabel*>(childAt(event->pos()));
    if (!child)
        return;

    QPixmap pixmap = *child->pixmap();

    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    dataStream << pixmap << QPoint(event->pos() - child->pos());
//! [1]

//! [2]
    QMimeData *mimeData = new QMimeData;
    mimeData->setData("application/x-dnditemdata", itemData);
//! [2]

//! [3]
    QDrag *drag = new QDrag(this);
    drag->setMimeData(mimeData);
    drag->setPixmap(pixmap);
    drag->setHotSpot(event->pos() - child->pos());
//! [3]

    QPixmap tempPixmap = pixmap;
    QPainter painter;
    painter.begin(&tempPixmap);
    painter.fillRect(pixmap.rect(), QColor(127, 127, 127, 127));
    painter.end();

    child->setPixmap(tempPixmap);

    if (drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction) {
        child->close();
    } else {
        child->show();
        child->setPixmap(pixmap);
    }


}
