#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("GateKeepers");
    connect(ui->cerrarBoton,SIGNAL(clicked()),this,SLOT(close()));              //Cerrar

    ui->menuPausa->hide();
    connect(ui->ajustesBoton,SIGNAL(clicked()),this,SLOT(abrirMenu()));
    connect(ui->jugarBoton,SIGNAL(clicked()),this,SLOT(inicializarJuego()));    //Jugar
    connect(ui->ajustesBoton,SIGNAL(clicked()),this,SLOT(abrirMenu()));
    //añadir musica
}

void MainWindow::abrirMenu(){
    ui->menuPausa->show();
    ui->jugarBoton->hide();
    ui->cerrarBoton->hide();
    connect(ui->backButton,SIGNAL(clicked()),this,SLOT(cerrarMenu()));

}

void MainWindow::cerrarMenu(){
    ui->menuPausa->hide();
    ui->jugarBoton->show();
    ui->cerrarBoton->show();
    ui->ajustesBoton->show();
}

void MainWindow::inicializarJuego(){
    ui->jugarBoton->hide();
    ui->cerrarBoton->hide();
    ui->ajustesBoton->hide();
    ui->fondoInicio->hide();

    pantallaInfo = new PantallaInfo(this);
    pantallaInfo->show();
}


MainWindow::~MainWindow()
{
    delete ui;
}
