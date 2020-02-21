#include "Przeciwnik.h"
#include "Pocisk.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Przeciwnik::Przeciwnik(): QObject(), QGraphicsRectItem()
{

    int random;
    random=rand()%500;
    setPos(random,0);
    setRect(0,0,100,100);
    QTimer *timer= new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);


}

void Przeciwnik::move()
{

    setPos(x(),y()+10);

    if(pos().x()+rect().width()>800)
    {
        scene()->removeItem(this);
        delete this;
    }
}


