#include "Meni.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "Przeciwnik.h"

Meni::Meni(QWidget *parent){
    // tu tworzymy scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600); //robimy 800x600 zamiast domyslnego

     //Meni to QGraphicsView Widget, do wizualizowania sceny
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    // tworze gracza
    player = new Gracz();
    player->setRect(0,0,100,100);
    player->setPos(400,500);
    // ciagle na focusie gracz
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // dodajemy gracza do sceny
    scene->addItem(player);
    player->setBrush(Qt::blue);
    player->setRect(0,0,50,50);

    // tworzymy punktacje
    punkt = new Punkty();
    scene->addItem(punkt);


    // wykluwanie
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(wykluj()));
    timer->start(2000);

    show();
}
