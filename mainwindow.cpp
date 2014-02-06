#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    primer.load(":/Images/c01r.png");
    imagenEscalera.setPixmap(primer);
    //ui->escalera1->setText("lol");
    //ui->widget->b
    ui->setupUi(this);

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
