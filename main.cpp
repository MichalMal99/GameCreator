/*#include <QGraphicsScene>
#include <QApplication>
#include "Gracz.h"
#include <QGraphicsView>
#include <QTimer>
#include <QGraphicsRectItem>
#include "Punkty.h"


//dupa u slupa

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene *scene=new QGraphicsScene();
    Punkty *punkt;
    a.setObjectName("GAME");
    Gracz *player= new Gracz();
    player->setRect(0,0,50,50);
    scene->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    //create the score
    punkt= new Punkty();
    scene->addItem(punkt);
    punkt++;





    QGraphicsView *widok=new QGraphicsView(scene);
    widok->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    widok->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    widok->show();
    widok->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    player->setBrush(Qt::blue);

    player->setPos(widok->width()/2,widok->height()-player->rect().height());
    QTimer *czas=new QTimer();
    QObject::connect(czas, SIGNAL(timeout()),player,SLOT(wykluj()));
    czas->start(2000);

    return a.exec();
}
*/

#include <QApplication>
#include "Meni.h"


Meni * meni;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    meni = new Meni();
    meni->show();

    return a.exec();
}
