#include "liga_dodaj.h"
#include "ui_liga_dodaj.h"

liga_dodaj::liga_dodaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::liga_dodaj)
{
    ui->setupUi(this);
}

liga_dodaj::~liga_dodaj()
{
    delete ui;
}
