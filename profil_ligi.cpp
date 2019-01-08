#include "profil_ligi.h"
#include "ui_profil_ligi.h"

profil_ligi::profil_ligi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_ligi)
{
    ui->setupUi(this);
}

profil_ligi::~profil_ligi()
{
    delete ui;
}
