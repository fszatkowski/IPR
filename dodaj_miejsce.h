#ifndef DODAJ_MIEJSCE_H
#define DODAJ_MIEJSCE_H

#include <QDialog>

namespace Ui {
class dodaj_miejsce;
}

class dodaj_miejsce : public QDialog
{
    Q_OBJECT

public:
    explicit dodaj_miejsce(QWidget *parent = nullptr);
    ~dodaj_miejsce();

private:
    Ui::dodaj_miejsce *ui;
};

#endif // DODAJ_MIEJSCE_H
