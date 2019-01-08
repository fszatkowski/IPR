#include "dodaj_miejsce.h"
#include "ui_dodaj_miejsce.h"

dodaj_miejsce::dodaj_miejsce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dodaj_miejsce)
{
    ui->setupUi(this);
}

dodaj_miejsce::~dodaj_miejsce()
{
    delete ui;
}
