#ifndef MENI_H
#define MENI_H


#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Gracz.h"
#include "Punkty.h"


class Meni: public QGraphicsView{
public:
    Meni(QWidget * parent=0);

    QGraphicsScene * scene;
    Gracz *player;
    Punkty * punkt;


};


#endif // MENI_H
