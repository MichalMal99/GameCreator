#ifndef GRACZ_H
#define GRACZ_H
#include <QGraphicsRectItem>
#include <QObject>
#include "Punkty.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Gracz:public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent *event);
    Gracz();
    Punkty *punkt;

public slots:
    void wykluj();
    void ruch();
    void ruch1();
    void ruch2();

};

#endif // GRACZ_H
