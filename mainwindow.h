#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pantallainfo.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




private slots:
    void inicializarJuego();
    void abrirMenu();
    void cerrarMenu();



private:
    Ui::MainWindow *ui;
    PantallaInfo *pantallaInfo; //generamos la pantalla info

};













#endif // MAINWINDOW_H
