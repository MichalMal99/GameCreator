#include "Okienko.h"
//lklsdklskdlsdkls
#include <QMessageBox>

Okienko::Okienko(QWidget *parent):QOkienko (parent),ui(new Ui::Okienko)
{
    ui->setupUi(this);
}

Okienko::~Okienko()
{
    delete ui;
}
