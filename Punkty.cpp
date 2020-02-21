#include "Punkty.h"
#include<QFont>

#include<QDebug>



Punkty::Punkty(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    punkt=0;

    setPlainText(QString("PUNKTY: ")+QString::number(punkt));
    setDefaultTextColor(Qt::red);
    setFont(QFont("arial",20));
}

void Punkty::zwieksz()
{

punkt++;
    setPlainText(QString("PUNKTY: ")+QString::number(punkt));
if(punkt>=5 )
{
    qDebug("JESTES DOBRY");
}

}

int Punkty::getPunkt()
{
   return punkt;
}


