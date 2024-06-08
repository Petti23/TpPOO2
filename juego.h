#ifndef JUEGO_H
#define JUEGO_H

#include <QWidget>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QString>



namespace Ui {
class Juego;
}

class Juego : public QWidget
{
    Q_OBJECT

public:
    explicit Juego(QWidget *parent = nullptr);
    QTimer *timer = new QTimer(nullptr);
    QTimer *mensaje=new QTimer(nullptr);
    QTime time;
    QTime relojin;
    QMessageBox msgBox;
    QPixmap pixmap = QPixmap(":/new/prefix1/Images/icono.jpeg");

    int personasRestantes = 4;
    int puntos = 0;
    int multas = 0;
    int nivel = 1;
    int booleano=0;



    ~Juego();

private slots:
    void quit();
    void abrirMenu();
    void cerrarMenu();
    void sumarPuntos();
    void mostrarInfo();
    void restarPuntos();
    void cerrarReglas();
    void comenzarJuego();
    void mostrarReglas();
    void generarPersonas();
    void jugadorDecision();
    void actualizarEstado();
    void ocultarResultado();
    void on_musicaON_clicked();
    void on_sonidoON_clicked();
    void on_sonidoOFF_clicked();
    void on_musicaOFF_clicked();
    void actualizarCronometro();
    void definirResultadoNivel();
    void inicializarNivelSiguiente(int nivel);
    int on_aceptarBoton_clicked();
    int on_denegarBoton_clicked();




    /*Generar Datos
    QString generarNacionalidad();
    QString generarFechaNacimiento();
    QString generarTipoVisita();
    QString generarDuracionEstadia();
    QString generarEstadoCivil();
    QString generarPaisResidencia();
    QString generarPropositoViaje();
    QString generarElementosProhibidos();
    QString generarPaisesAnteriores();
    QString generarOcupacion();
    bool generarAntecedentes();
    bool generarPartner();*/









private:
    Ui::Juego *ui;


};

#endif // JUEGO_H
