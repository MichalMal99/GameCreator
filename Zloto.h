#ifndef ZLOTO_H
#define ZLOTO_H

#include <QGraphicsRectItem>
#include <QObject>
QT_BEGIN_NAMESPACE
namespace Ui { class Zloto; }
QT_END_NAMESPACE
class Zloto: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Zloto();
public slots:
    void statyczne();



};
#endif // ZLOTO_H
