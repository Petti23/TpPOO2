/********************************************************************************
** Form generated from reading UI file 'juego.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Juego
{
public:
    QLabel *fondoJuego;
    QPushButton *comenzarBoton;
    QLabel *cronometro;
    QLabel *reloj;
    QPushButton *ajustesBoton;
    QFrame *menuPausa;
    QPushButton *musicaON;
    QPushButton *sonidoON;
    QPushButton *backButton;
    QPushButton *exitMenuButton;
    QPushButton *musicaOFF;
    QPushButton *sonidoOFF;
    QLabel *musicaOnLabel;
    QLabel *sonidoOnLabel;
    QLabel *musicaOffLabel;
    QLabel *sonidoOffLabel;
    QPushButton *aceptarBoton;
    QPushButton *denegarBoton;
    QLabel *flecha;
    QPushButton *pasaporteBoton;
    QLabel *nivel1;
    QLabel *nivel2;
    QLabel *nivel3;
    QLabel *nivel4;
    QLabel *nivel5;
    QLabel *bienHecho;
    QLabel *fallaste;
    QLabel *puntos;
    QPushButton *reglas;

    void setupUi(QWidget *Juego)
    {
        if (Juego->objectName().isEmpty())
            Juego->setObjectName("Juego");
        Juego->resize(1280, 720);
        fondoJuego = new QLabel(Juego);
        fondoJuego->setObjectName("fondoJuego");
        fondoJuego->setGeometry(QRect(0, 0, 1280, 720));
        fondoJuego->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/_7ee18ae9-e235-413a-a720-fa59a96e065b.jpg);"));
        comenzarBoton = new QPushButton(Juego);
        comenzarBoton->setObjectName("comenzarBoton");
        comenzarBoton->setGeometry(QRect(550, 460, 171, 71));
        comenzarBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/playBoton.png);"));
        cronometro = new QLabel(Juego);
        cronometro->setObjectName("cronometro");
        cronometro->setGeometry(QRect(370, 40, 31, 20));
        cronometro->setTextFormat(Qt::AutoText);
        reloj = new QLabel(Juego);
        reloj->setObjectName("reloj");
        reloj->setGeometry(QRect(330, 0, 111, 101));
        reloj->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/cronometro.png);"));
        ajustesBoton = new QPushButton(Juego);
        ajustesBoton->setObjectName("ajustesBoton");
        ajustesBoton->setGeometry(QRect(0, 0, 101, 61));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ajustesBoton->sizePolicy().hasHeightForWidth());
        ajustesBoton->setSizePolicy(sizePolicy);
        ajustesBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/pauseBoton.png);"));
        menuPausa = new QFrame(Juego);
        menuPausa->setObjectName("menuPausa");
        menuPausa->setGeometry(QRect(60, 60, 241, 341));
        menuPausa->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/PAUSAMENU.png);"));
        menuPausa->setFrameShape(QFrame::StyledPanel);
        menuPausa->setFrameShadow(QFrame::Raised);
        musicaON = new QPushButton(menuPausa);
        musicaON->setObjectName("musicaON");
        musicaON->setGeometry(QRect(130, 150, 60, 60));
        musicaON->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/botonON.png);"));
        sonidoON = new QPushButton(menuPausa);
        sonidoON->setObjectName("sonidoON");
        sonidoON->setGeometry(QRect(130, 220, 60, 60));
        sonidoON->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/botonON.png);"));
        backButton = new QPushButton(menuPausa);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 10, 91, 41));
        backButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/backBoton.png);"));
        exitMenuButton = new QPushButton(menuPausa);
        exitMenuButton->setObjectName("exitMenuButton");
        exitMenuButton->setGeometry(QRect(140, 290, 91, 41));
        exitMenuButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/stopBoton.png);"));
        musicaOFF = new QPushButton(menuPausa);
        musicaOFF->setObjectName("musicaOFF");
        musicaOFF->setGeometry(QRect(130, 150, 60, 60));
        musicaOFF->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/botonOFF.png);"));
        sonidoOFF = new QPushButton(menuPausa);
        sonidoOFF->setObjectName("sonidoOFF");
        sonidoOFF->setGeometry(QRect(130, 220, 60, 60));
        sonidoOFF->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/botonOFF.png);"));
        musicaOnLabel = new QLabel(menuPausa);
        musicaOnLabel->setObjectName("musicaOnLabel");
        musicaOnLabel->setGeometry(QRect(20, 150, 61, 61));
        musicaOnLabel->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/musica.png);"));
        sonidoOnLabel = new QLabel(menuPausa);
        sonidoOnLabel->setObjectName("sonidoOnLabel");
        sonidoOnLabel->setGeometry(QRect(20, 220, 61, 61));
        sonidoOnLabel->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/sonido.png);"));
        musicaOffLabel = new QLabel(menuPausa);
        musicaOffLabel->setObjectName("musicaOffLabel");
        musicaOffLabel->setGeometry(QRect(20, 150, 61, 61));
        musicaOffLabel->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/musicaoff.png);"));
        sonidoOffLabel = new QLabel(menuPausa);
        sonidoOffLabel->setObjectName("sonidoOffLabel");
        sonidoOffLabel->setGeometry(QRect(20, 220, 61, 61));
        sonidoOffLabel->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/sonidooff.png);"));
        aceptarBoton = new QPushButton(Juego);
        aceptarBoton->setObjectName("aceptarBoton");
        aceptarBoton->setGeometry(QRect(1000, 520, 101, 151));
        aceptarBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/BotonA.png);"));
        denegarBoton = new QPushButton(Juego);
        denegarBoton->setObjectName("denegarBoton");
        denegarBoton->setGeometry(QRect(1130, 520, 101, 151));
        denegarBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/BotonD.png);"));
        flecha = new QLabel(Juego);
        flecha->setObjectName("flecha");
        flecha->setGeometry(QRect(1140, 320, 71, 91));
        flecha->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/Flecha.png);"));
        pasaporteBoton = new QPushButton(Juego);
        pasaporteBoton->setObjectName("pasaporteBoton");
        pasaporteBoton->setGeometry(QRect(1120, 410, 111, 111));
        pasaporteBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/Icono Pasaporte.png);"));
        nivel1 = new QLabel(Juego);
        nivel1->setObjectName("nivel1");
        nivel1->setGeometry(QRect(1100, 10, 141, 51));
        nivel1->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/Nivel1.png);"));
        nivel2 = new QLabel(Juego);
        nivel2->setObjectName("nivel2");
        nivel2->setGeometry(QRect(1100, 10, 141, 51));
        nivel2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/Nivel2.png);"));
        nivel3 = new QLabel(Juego);
        nivel3->setObjectName("nivel3");
        nivel3->setGeometry(QRect(1100, 10, 141, 51));
        nivel3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/Nivel3.png);"));
        nivel4 = new QLabel(Juego);
        nivel4->setObjectName("nivel4");
        nivel4->setGeometry(QRect(1100, 10, 141, 51));
        nivel4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/Nivel4.png);"));
        nivel5 = new QLabel(Juego);
        nivel5->setObjectName("nivel5");
        nivel5->setGeometry(QRect(1100, 10, 141, 51));
        nivel5->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/Nivel5.png);"));
        bienHecho = new QLabel(Juego);
        bienHecho->setObjectName("bienHecho");
        bienHecho->setGeometry(QRect(480, 160, 301, 261));
        bienHecho->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/bienHecho.png);"));
        fallaste = new QLabel(Juego);
        fallaste->setObjectName("fallaste");
        fallaste->setGeometry(QRect(480, 220, 311, 151));
        fallaste->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/fallaste.png);"));
        puntos = new QLabel(Juego);
        puntos->setObjectName("puntos");
        puntos->setGeometry(QRect(780, 10, 61, 61));
        reglas = new QPushButton(Juego);
        reglas->setObjectName("reglas");
        reglas->setGeometry(QRect(-10, 600, 121, 121));
        reglas->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/rules.png);"));
        fondoJuego->raise();
        comenzarBoton->raise();
        reloj->raise();
        cronometro->raise();
        ajustesBoton->raise();
        menuPausa->raise();
        aceptarBoton->raise();
        denegarBoton->raise();
        flecha->raise();
        pasaporteBoton->raise();
        nivel1->raise();
        nivel2->raise();
        nivel3->raise();
        nivel4->raise();
        nivel5->raise();
        bienHecho->raise();
        fallaste->raise();
        puntos->raise();
        reglas->raise();

        retranslateUi(Juego);

        QMetaObject::connectSlotsByName(Juego);
    } // setupUi

    void retranslateUi(QWidget *Juego)
    {
        Juego->setWindowTitle(QCoreApplication::translate("Juego", "Form", nullptr));
        fondoJuego->setText(QString());
        comenzarBoton->setText(QString());
        cronometro->setText(QCoreApplication::translate("Juego", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">  2:00</span></p><p align=\"center\"><span style=\" color:#ffffff;\"><br/></span></p></body></html>", nullptr));
        reloj->setText(QString());
        ajustesBoton->setText(QString());
        musicaON->setText(QString());
        sonidoON->setText(QString());
        backButton->setText(QString());
        exitMenuButton->setText(QString());
        musicaOFF->setText(QString());
        sonidoOFF->setText(QString());
        musicaOnLabel->setText(QString());
        sonidoOnLabel->setText(QString());
        musicaOffLabel->setText(QString());
        sonidoOffLabel->setText(QString());
        aceptarBoton->setText(QString());
        denegarBoton->setText(QString());
        flecha->setText(QString());
        pasaporteBoton->setText(QString());
        nivel1->setText(QString());
        nivel2->setText(QString());
        nivel3->setText(QString());
        nivel4->setText(QString());
        nivel5->setText(QString());
        bienHecho->setText(QString());
        fallaste->setText(QString());
        puntos->setText(QCoreApplication::translate("Juego", "PUNTOS", nullptr));
        reglas->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Juego: public Ui_Juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
