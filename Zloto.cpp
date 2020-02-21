#include "Zloto.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>


Zloto::Zloto(): QObject(), QGraphicsRectItem()
{
    int random;
    random=rand()%500;
    setPos(random,random);

    setRect(0,0,12,12);
    QTimer *timer= new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(statyczne()));
    timer->start(3500);

}

void Zloto::statyczne()
{

            scene()->removeItem(this);
            delete this;


}

