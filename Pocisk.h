#ifndef POCISK_H
#define POCISK_H

#include <QGraphicsRectItem>
#include <QObject>
QT_BEGIN_NAMESPACE
namespace Ui { class Pocisk; }
QT_END_NAMESPACE
class Pocisk: public QObject, public QGraphicsRectItem
{
    Q_OBJECT

public:
    Pocisk();

public slots:
  void move();
  void move2();

};

#endif // POCISK_H
