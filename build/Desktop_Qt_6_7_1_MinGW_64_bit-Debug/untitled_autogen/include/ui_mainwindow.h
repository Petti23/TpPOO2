/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *fondoInicio;
    QPushButton *jugarBoton;
    QPushButton *ajustesBoton;
    QPushButton *cerrarBoton;
    QFrame *menuPausa;
    QPushButton *backButton;
    QPushButton *sonidoOFF;
    QLabel *label_3;
    QPushButton *musicaOFF;
    QLabel *label_2;
    QPushButton *musicaON;
    QPushButton *sonidoON;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        fondoInicio = new QLabel(centralwidget);
        fondoInicio->setObjectName("fondoInicio");
        fondoInicio->setGeometry(QRect(0, 0, 1280, 720));
        fondoInicio->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/fondoSinSentor.png);"));
        jugarBoton = new QPushButton(centralwidget);
        jugarBoton->setObjectName("jugarBoton");
        jugarBoton->setGeometry(QRect(690, 260, 181, 101));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(jugarBoton->sizePolicy().hasHeightForWidth());
        jugarBoton->setSizePolicy(sizePolicy);
        jugarBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/startBoton.png);"));
        ajustesBoton = new QPushButton(centralwidget);
        ajustesBoton->setObjectName("ajustesBoton");
        ajustesBoton->setGeometry(QRect(10, 10, 71, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ajustesBoton->sizePolicy().hasHeightForWidth());
        ajustesBoton->setSizePolicy(sizePolicy1);
        ajustesBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/settingsBoton.png);"));
        cerrarBoton = new QPushButton(centralwidget);
        cerrarBoton->setObjectName("cerrarBoton");
        cerrarBoton->setGeometry(QRect(380, 260, 181, 101));
        sizePolicy.setHeightForWidth(cerrarBoton->sizePolicy().hasHeightForWidth());
        cerrarBoton->setSizePolicy(sizePolicy);
        cerrarBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/exitBoton.png);"));
        menuPausa = new QFrame(centralwidget);
        menuPausa->setObjectName("menuPausa");
        menuPausa->setGeometry(QRect(90, 80, 251, 281));
        menuPausa->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/PAUSAMENU.png);"));
        menuPausa->setFrameShape(QFrame::StyledPanel);
        menuPausa->setFrameShadow(QFrame::Raised);
        backButton = new QPushButton(menuPausa);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(9, 3, 101, 41));
        backButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/backBoton.png);"));
        sonidoOFF = new QPushButton(menuPausa);
        sonidoOFF->setObjectName("sonidoOFF");
        sonidoOFF->setGeometry(QRect(170, 200, 60, 60));
        sonidoOFF->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/botonOFF.png);"));
        label_3 = new QLabel(menuPausa);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 200, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/sonido.png);"));
        musicaOFF = new QPushButton(menuPausa);
        musicaOFF->setObjectName("musicaOFF");
        musicaOFF->setGeometry(QRect(170, 130, 60, 60));
        musicaOFF->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/botonOFF.png);"));
        label_2 = new QLabel(menuPausa);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 130, 61, 61));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/musica.png);"));
        musicaON = new QPushButton(menuPausa);
        musicaON->setObjectName("musicaON");
        musicaON->setGeometry(QRect(100, 130, 60, 60));
        musicaON->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/botonON.png);"));
        sonidoON = new QPushButton(menuPausa);
        sonidoON->setObjectName("sonidoON");
        sonidoON->setGeometry(QRect(100, 200, 60, 60));
        sonidoON->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/botonON.png);"));
        MainWindow->setCentralWidget(centralwidget);
        fondoInicio->raise();
        menuPausa->raise();
        jugarBoton->raise();
        ajustesBoton->raise();
        cerrarBoton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        fondoInicio->setText(QString());
        jugarBoton->setText(QString());
        ajustesBoton->setText(QString());
        cerrarBoton->setText(QString());
        backButton->setText(QString());
        sonidoOFF->setText(QString());
        label_3->setText(QString());
        musicaOFF->setText(QString());
        label_2->setText(QString());
        musicaON->setText(QString());
        sonidoON->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
