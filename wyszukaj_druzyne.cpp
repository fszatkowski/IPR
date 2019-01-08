#include "wyszukaj_druzyne.h"
#include "ui_wyszukaj_druzyne.h"

wyszukaj_druzyne::wyszukaj_druzyne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukaj_druzyne)
{
    ui->setupUi(this);
}

wyszukaj_druzyne::~wyszukaj_druzyne()
{
    delete ui;
}
