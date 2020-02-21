#include "Pocisk.h"
#include <QTimer>
#include <QGraphicsScene>
#include "Przeciwnik.h"
#include "Przeciwnik2.h"

int point;
Pocisk::Pocisk()
{
    setRect(20,0,15,15);

    QTimer *timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
    connect(timer,SIGNAL(timeout()),this,SLOT(move2()));
    timer->start(50);

}

void Pocisk::move()
{
    QList<QGraphicsItem*>kolizja=collidingItems();
    for(int i=0;i<kolizja.size();++i)
    {
        if(typeid(*(kolizja[i]))==typeid(Przeciwnik))
    {
            scene()->removeItem(kolizja[i]);
           scene()->removeItem(this);
            delete kolizja[i];
            delete this;
            return;
        }
        point++;
    }
    setPos(x(),y()-22);
    if(pos().y()+rect().height()<0)
    {
        scene()->removeItem(this);
        delete this;
    }

}

void Pocisk::move2()
{
    QList<QGraphicsItem*>kolajd=collidingItems();
    for(int i=0;i<kolajd.size();++i)
    {
        if(typeid(*(kolajd[i]))==typeid(Przeciwnik2))
    {
            scene()->removeItem(kolajd[i]);
           scene()->removeItem(this);
            delete kolajd[i];
            delete this;
            return;
        }

    }
    setPos(x(),y()-22);
    if(pos().y()+rect().height()>800)
    {
        scene()->removeItem(this);
        delete this;
    }
}
