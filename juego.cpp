#include "juego.h"
#include "ui_juego.h"



Juego::Juego(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    ui->cronometro->hide();
    ui->reloj->hide();
    ui->menuPausa->hide();
    ui->aceptarBoton->hide();
    ui->denegarBoton->hide();
    ui->flecha->hide();
    ui->pasaporteBoton->hide();
    ui->ajustesBoton->hide();
    ui->bienHecho->hide();
    ui->fallaste->hide();
    ui->puntos->hide();
    ui->nivel1->hide();
    ui->nivel2->hide();
    ui->nivel3->hide();
    ui->nivel4->hide();
    ui->nivel5->hide();
    ui->sonidoOffLabel->hide();
    ui->sonidoON->hide();
    ui->musicaOffLabel->hide();
    ui->musicaON->hide();

    connect(timer,SIGNAL(timeout()),this,SLOT(actualizarEstado()));
    connect(ui->comenzarBoton,SIGNAL(clicked()),this,SLOT(comenzarJuego()));
    connect(ui->ajustesBoton,SIGNAL(clicked()),this,SLOT(abrirMenu()));
    connect(ui->pasaporteBoton,SIGNAL(clicked()),this,SLOT(mostrarInfo()));
    connect(ui->denegarBoton,SIGNAL(clicked()),this,SLOT(jugadorDecision()));
    connect(ui->aceptarBoton,SIGNAL(clicked()),this,SLOT(jugadorDecision()));
    connect(timer,SIGNAL(timeout()),this,SLOT(ocultarResultado())); //OCULTAMOS EL MENSAJE
    connect(ui->reglas,SIGNAL(clicked()),this,SLOT(mostrarReglas()));


}

void Juego::comenzarJuego(){        //COMIENZA EL JUEGO, MOSTRANDO PUNTOS, CRONOMETRO, ETC.
    personasRestantes=4;
    puntos=0;
    ui->comenzarBoton->hide();
    ui->reloj->show();
    ui->flecha->show();
    ui->nivel1->show();
    ui->puntos->show();
    ui->cronometro->show();
    ui->ajustesBoton->show();
    ui->pasaporteBoton->show();

    time.setHMS(0,0,10);
    ui->cronometro->setText(time.toString("m:ss"));
    timer->start(1000);

    ui->puntos->setText(QString::number(puntos));

    generarPersonas();
}

void Juego::generarPersonas(){

}

void Juego::mostrarInfo(){      //MUESTRA BOTONES AOR E INFO DE LA PERSONA
    ui->aceptarBoton->show();
    ui->denegarBoton->show();
    ui->flecha->hide();
    ui->pasaporteBoton->hide();
    //MOSTRAR INFO DE LA PERSONA
}

void Juego::jugadorDecision(){

    mensaje = new QTimer(this);     //CREAMOS EL MENSAJE "BIEN HECHO O FALLASTE"
    mensaje->setInterval(3000);     //SETEAMOS QUE SE VEA SOLO UN MOMENTO
    mensaje->start();               //LO INICIAMOS

    switch (booleano) {
    case 1: /*&& personas[nPersona].AoD == "ACEPTAR"*/
        booleano = 0;
        ui->bienHecho->show();  // MOSTRAMOS EL MENSAJE "BIEN HECHO"
        sumarPuntos();
        break;
    case 2: /*&& personas[nPersona].AoD == "DENEGAR"*/
        booleano = 0;
        ui->bienHecho->show();  // MOSTRAMOS EL MENSAJE "BIEN HECHO"
        sumarPuntos();
        break;
    default:
        booleano = 0;
        ui->fallaste->show();  // MOSTRAMOS EL MENSAJE "FALLASTE"
        restarPuntos();
    }

    personasRestantes--;  // restamos a la persona para avanzar en el nivel
}

void Juego::sumarPuntos(){
    puntos += 5;                                 //seteamos cantidad de puntos (suman)
    ui->puntos->setText(QString::number(puntos));//seteamos para que muestre los puntos sumados
}
void Juego::restarPuntos(){
    puntos -= 5;                            //seteamos cantidad de puntos (restan)
    ui->puntos->setText(QString::number(puntos));//seteamos para que muestre los puntos restados
}

void Juego::ocultarResultado(){ //OCULTA MENSAJE
    ui->bienHecho->hide();
    ui->fallaste->hide();
    // Detener el timer
    mensaje->stop();
}

void Juego::actualizarEstado(){         //Actualiza cronometro y jugabilidad(seguir jugando o salir)
    actualizarCronometro();
    definirResultadoNivel();
}

void Juego::actualizarCronometro(){     //setea comportamiento del cronometro
    time=time.addSecs(-1);
    ui->cronometro->setText(time.toString("m:ss"));
}

void Juego::definirResultadoNivel(){        //jugabilidad
    msgBox.setWindowTitle("Nivel terminado");
    msgBox.setWindowIcon(QIcon(pixmap));    //seteamos con pixmap el icono de la ventana
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);

    if (personasRestantes == 0 && nivel != 5 ){    //Cumple con las personas
        nivel++;
        timer->stop();
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setText("Nivel Completado! Siguiente nivel?");
        if (QMessageBox::Yes == msgBox.exec()){     //Desea seguir jugando
                inicializarNivelSiguiente(nivel);       //Avanza al Siguiente Nivel
        }
        else{
            quit();   //Se retira
        }
    }
    if (personasRestantes == 0 && nivel==5 ){
        msgBox.setWindowTitle("JUEGO TERMINADO");   //MOSTRAR QUE GANÓ EL JUEGO
        msgBox.setWindowIcon(QIcon(pixmap));
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setText("Desea jugar otra vez?");
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        nivel=1;                                    //Reiniciamos el juego
        ui->nivel5->hide();                         //Escondemos etiqueta de nivel
        if (QMessageBox::Yes == msgBox.exec()){     //Desea seguir jugando
            comenzarJuego();       //comienza el juego de nuevo
        }
        else{
            quit();   //Se retira
        }
    }

    else{
        if (time.toString()=="00:00:00" || multas == 5 || puntos < 0){   //Pierde
            nivel=1;
            timer->stop();
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Perdiste. Volver a Jugar?");
            if (QMessageBox::Yes == msgBox.exec()){     //Vuelve a Intentar
                comenzarJuego(); //comenzarJuego();             //Reinicia el Juego
            }
            else{
                quit();//Quitea
            }
        }
    }
}

void Juego::inicializarNivelSiguiente(int nivel){       //ACTUALIZA DISTINTOS TIEMPOS PARA CADA NIVEL
    switch (nivel) {
    case 2:
        ui->nivel1->hide();
        ui->nivel2->show();
        time.setHMS(0, 1, 15);
        ui->cronometro->setText(time.toString("m:ss"));
        timer->start(1000);
        personasRestantes = 1;
        break;
    case 3:
        ui->nivel2->hide();
        ui->nivel3->show();
        time.setHMS(0, 1, 30);
        ui->cronometro->setText(time.toString("m:ss"));
        timer->start(1000);
        personasRestantes = 1;
        break;
    case 4:
        ui->nivel3->hide();
        ui->nivel4->show();
        time.setHMS(0, 1, 50);
        ui->cronometro->setText(time.toString("m:ss"));
        timer->start(1000);
        personasRestantes = 1;
        break;
    case 5:
        ui->nivel4->hide();
        ui->nivel5->show();
        time.setHMS(0, 2, 10);
        ui->cronometro->setText(time.toString("m:ss"));
        timer->start(1000);
        personasRestantes = 1;
        break;
    default:
        // Código para manejar niveles no esperados
        break;
    }
}






int Juego::on_aceptarBoton_clicked()
{
    ui->aceptarBoton->hide();
    ui->denegarBoton->hide();
    ui->pasaporteBoton->show();
    ui->flecha->show();
    booleano=1;
    return booleano;
}

int Juego::on_denegarBoton_clicked()
{
    ui->aceptarBoton->hide();
    ui->denegarBoton->hide();
    ui->pasaporteBoton->show();
    ui->flecha->show();
    booleano=2;
    return booleano;
}

void Juego::mostrarReglas(){
    ui->flecha->hide();
    ui->aceptarBoton->hide();
    ui->denegarBoton->hide();
    ui->pasaporteBoton->hide();
    //ui->infoPersona->hide();
    //ui->flechaReglas->show();
    //ui->rules->show();
    timer->stop();
    //connect(ui->flechaReglas,SIGNAL(clicked()),this,SLOT(cerrarReglas()));
}

void Juego::cerrarReglas(){
    //ui->rules->hide();
    //ui->flechaReglas->hide();
    timer->start();
    ui->flecha->show();
    ui->pasaporteBoton->show();
}

void Juego::abrirMenu(){
    ui->menuPausa->show();
    timer->stop();
    ui->reglas->hide();
    ui->flecha->hide();
    ui->aceptarBoton->hide();
    ui->denegarBoton->hide();
    ui->pasaporteBoton->hide();
    //ui->infoPersona->hide();

    connect(ui->backButton,SIGNAL(clicked()),this,SLOT(cerrarMenu()));
    connect(ui->exitMenuButton,SIGNAL(clicked()),this,SLOT(quit()));
}

void Juego::cerrarMenu(){
    ui->menuPausa->hide();
    //ui->infoPersona->show();
    ui->flecha->show();             //REEMPLZAR POR INFO
    ui->pasaporteBoton->show();     //SAME
    ui->reglas->show();
    timer->start();
}

void Juego::quit(){
    QCoreApplication::quit();
}

void Juego::on_sonidoOFF_clicked()
{
    ui->sonidoOffLabel->show();
    ui->sonidoOFF->hide();
    ui->sonidoON->show();
    //sonido-parar
}

void Juego::on_sonidoON_clicked()
{
    ui->sonidoOffLabel->hide();
    ui->sonidoOnLabel->show();
    ui->sonidoON->hide();
    ui->sonidoOFF->show();
    //sonido-volver
}

void Juego::on_musicaOFF_clicked()
{
    ui->musicaOffLabel->show();
    ui->musicaOFF->hide();
    ui->musicaON->show();
    //musica-parar

}

void Juego::on_musicaON_clicked()
{
    ui->musicaOffLabel->hide();
    ui->sonidoOnLabel->show();
    ui->musicaON->hide();
    ui->musicaOFF->show();
    //musica-volver

}







Juego::~Juego()
{
    delete ui;
}
