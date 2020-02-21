#ifndef PRZECIWNIK_H
#define PRZECIWNIK_H

#include <QGraphicsRectItem>
#include <QObject>
QT_BEGIN_NAMESPACE
namespace Ui { class Przeciwnik; }
QT_END_NAMESPACE
class Przeciwnik: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Przeciwnik();
public slots:
    void move();


};

#endif // PRZECIWNIK_H
