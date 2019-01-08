#include "wyszukiwanie.h"
#include "ui_wyszukiwanie.h"

wyszukiwanie::wyszukiwanie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukiwanie)
{
    ui->setupUi(this);
}

wyszukiwanie::~wyszukiwanie()
{
    delete ui;
}
