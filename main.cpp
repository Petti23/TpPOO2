#include "mainwindow.h"
#include <QApplication>
#include <QIcon>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowIcon(QIcon(":/new/prefix1/Images/icono.jpeg"));
    w.show();
    return a.exec();
}
