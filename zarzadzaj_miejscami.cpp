#include "zarzadzaj_miejscami.h"
#include "ui_zarzadzaj_miejscami.h"

zarzadzaj_miejscami::zarzadzaj_miejscami(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zarzadzaj_miejscami)
{
    ui->setupUi(this);
}

zarzadzaj_miejscami::~zarzadzaj_miejscami()
{
    delete ui;
}
