#ifndef OKIENKO_H
#define OKIENKO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {class Okienko;}
QT_END_NAMESPACE

class Okienko:public QMainWindow
{
    Q_OBJECT
public:
    Okienko(QWidget *parent=nullptr);
    ~Okienko();

private:
    Ui::Okienko *ui;
};

#endif // OKIENKO_H
