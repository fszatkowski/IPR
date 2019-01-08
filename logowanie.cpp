#include "logowanie.h"
#include "ui_logowanie.h"

logowanie::logowanie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::logowanie)
{
    ui->setupUi(this);
}

logowanie::~logowanie()
{
    delete ui;
}
