/********************************************************************************
** Form generated from reading UI file 'pantallainfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLAINFO_H
#define UI_PANTALLAINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PantallaInfo
{
public:
    QPushButton *okBoton;
    QLabel *label;

    void setupUi(QWidget *PantallaInfo)
    {
        if (PantallaInfo->objectName().isEmpty())
            PantallaInfo->setObjectName("PantallaInfo");
        PantallaInfo->resize(1280, 720);
        okBoton = new QPushButton(PantallaInfo);
        okBoton->setObjectName("okBoton");
        okBoton->setGeometry(QRect(1140, 590, 91, 81));
        okBoton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/acceptBoton.png);"));
        label = new QLabel(PantallaInfo);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 720));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Images/LibroAcuerdos.png);"));
        label->raise();
        okBoton->raise();

        retranslateUi(PantallaInfo);

        QMetaObject::connectSlotsByName(PantallaInfo);
    } // setupUi

    void retranslateUi(QWidget *PantallaInfo)
    {
        PantallaInfo->setWindowTitle(QCoreApplication::translate("PantallaInfo", "Form", nullptr));
        okBoton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PantallaInfo: public Ui_PantallaInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLAINFO_H
