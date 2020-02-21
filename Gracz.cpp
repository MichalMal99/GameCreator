#include "Gracz.h"
#include "Pocisk.h"
#include "Przeciwnik.h"
#include "Przeciwnik2.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include <QDebug>
#include <QMessageBox>
#include "Zloto.h"
#include "Punkty.h"
#include "Meni.h"


extern Meni *meni;


void Gracz::keyPressEvent(QKeyEvent *event)
{
if (event->key()==Qt::Key_W)
{
        if(pos().y()>0)
            setPos(x(),y()-18);
}
else if (event->key()==Qt::Key_S)
{
    if(pos().y()<650)
        setPos(x(),y()+18);
}
else if (event->key()==Qt::Key_A)
{
    if(pos().x()+100>0)
        setPos(x()-18,y());
}
else if (event->key()==Qt::Key_D)
{
    if(pos().x()+100<800)
        setPos(x()+18,y());
}
else if (event->key()==Qt::Key_Space)
{
    Pocisk *pocisk=new Pocisk();
    pocisk->setPos(x(),y()+15);
    scene()->addItem(pocisk);
}
}

void Gracz::wykluj()
{
    Przeciwnik *przeciwnik=new Przeciwnik();
    przeciwnik->setBrush(Qt::green);
   scene()->addItem(przeciwnik);
   Przeciwnik2 *przeciwnik2=new Przeciwnik2();
   przeciwnik2->setBrush(Qt::red);
  scene()->addItem(przeciwnik2);
  Zloto *zlotko=new Zloto();
  zlotko->setBrush(Qt::yellow);
  scene()->addItem(zlotko);


}

Gracz::Gracz()
{
    QTimer *okres=new QTimer();
    connect(okres,SIGNAL(timeout()),this,SLOT(ruch()));
    connect(okres,SIGNAL(timeout()),this,SLOT(ruch1()));
    connect(okres,SIGNAL(timeout()),this,SLOT(ruch2()));

    okres->start(50);

}

void Gracz::ruch()
{
    QList<QGraphicsItem*>buch=collidingItems();
    for(int i=0;i<buch.size();++i)
    {
        if(typeid(*(buch[i]))==typeid(Przeciwnik))
    {
            scene()->removeItem(buch[i]);
           scene()->removeItem(this);
            delete buch[i];
            delete this;
            return;

qDebug("KONIEC GRY");

        }
    }


}

void Gracz::ruch1()
{
    QList<QGraphicsItem*>benc=collidingItems();
    for(int i=0;i<benc.size();++i)
    {
        if(typeid(*(benc[i]))==typeid(Przeciwnik2))
    {
            scene()->removeItem(benc[i]);
           scene()->removeItem(this);
            delete benc[i];
            delete this;
            return;
qDebug("KONIEC GRY");

        }
    }


}

void Gracz::ruch2()
{
    QList<QGraphicsItem*>b=collidingItems();
    for(int i=0;i<b.size();++i)
    {
        if(typeid(*(b[i]))==typeid(Zloto))
    {
meni->punkt->zwieksz();


            scene()->removeItem(b[i]);

            delete b[i];

            return;



        }

    }


}



