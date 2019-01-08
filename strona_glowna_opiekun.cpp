#include "strona_glowna_opiekun.h"
#include "ui_strona_glowna_opiekun.h"

strona_glowna_opiekun::strona_glowna_opiekun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::strona_glowna_opiekun)
{
    ui->setupUi(this);
}

strona_glowna_opiekun::~strona_glowna_opiekun()
{
    delete ui;
}
