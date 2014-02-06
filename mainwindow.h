#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qpixmap.h"
#include "qlabel.h"
#include "qmessagebox.h"
#include "barajas.h"

#include <QMainWindow>
#include "qtoolbar.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAcerca_de_triggered();

private:
    Ui::MainWindow *ui;
    Barajas todasLasCartas;
    void llenarDeCartas();

};

#endif // MAINWINDOW_H
