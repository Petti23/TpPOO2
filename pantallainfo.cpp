#include "pantallainfo.h"
#include "ui_pantallainfo.h"


PantallaInfo::PantallaInfo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PantallaInfo)
{
    ui->setupUi(this);
    connect(ui->okBoton,SIGNAL(clicked()),this,SLOT(irAlJuego()));
}

void PantallaInfo::irAlJuego(){
    ui->okBoton->hide();
    ui->label->hide();
    juego = new Juego(this);    //declaramos juego
    juego->show();              //mostramos el juego
}


PantallaInfo::~PantallaInfo()
{
    delete ui;
}



