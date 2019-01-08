#include "profil_druzyny.h"
#include "ui_profil_druzyny.h"

profil_druzyny::profil_druzyny(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_druzyny)
{
    ui->setupUi(this);
}

profil_druzyny::~profil_druzyny()
{
    delete ui;
}
