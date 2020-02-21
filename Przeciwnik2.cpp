#include "Przeciwnik2.h"
#include "Pocisk.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

Przeciwnik2::Przeciwnik2(): QObject(), QGraphicsRectItem()
{

    int random;
    random=rand()%500;
    setPos(0,random);
    setRect(0,0,100,100);
    QTimer *timer= new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move2()));
    timer->start(50);


}

void Przeciwnik2::move2()
{

    setPos(x()+10,y());

    if(pos().x()+rect().height()>900)
    {
        scene()->removeItem(this);
        delete this;
    }
}
