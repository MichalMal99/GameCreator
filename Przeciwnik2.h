#ifndef PRZECIWNIK2_H
#define PRZECIWNIK2_H

#include <QGraphicsRectItem>
#include <QObject>
QT_BEGIN_NAMESPACE
namespace Ui { class Przeciwnik2; }
QT_END_NAMESPACE
class Przeciwnik2: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Przeciwnik2();
public slots:
    void move2();

};

#endif // PRZECIWNIK2_H
