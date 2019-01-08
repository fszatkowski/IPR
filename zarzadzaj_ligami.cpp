#include "zarzadzaj_ligami.h"
#include "ui_zarzadzaj_ligami.h"

zarzadzaj_ligami::zarzadzaj_ligami(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zarzadzaj_ligami)
{
    ui->setupUi(this);
}

zarzadzaj_ligami::~zarzadzaj_ligami()
{
    delete ui;
}
