#ifndef PANTALLAINFO_H
#define PANTALLAINFO_H

#include <QWidget>
#include "juego.h"

namespace Ui {
class PantallaInfo;
}

class PantallaInfo : public QWidget
{
    Q_OBJECT

public:
    explicit PantallaInfo(QWidget *parent = nullptr);
    ~PantallaInfo();

private slots:
    void irAlJuego();   //direcciona a la pantalla jugable


private:
    Ui::PantallaInfo *ui;
    Juego* juego;       //creamos el tipo juego para mostrarlo en pantalla
};

#endif // PANTALLAINFO_H
