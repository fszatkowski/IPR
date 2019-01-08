#ifndef LIGA_DODAJ_H
#define LIGA_DODAJ_H

#include <QDialog>

namespace Ui {
class liga_dodaj;
}

class liga_dodaj : public QDialog
{
    Q_OBJECT

public:
    explicit liga_dodaj(QWidget *parent = nullptr);
    ~liga_dodaj();

private:
    Ui::liga_dodaj *ui;
};

#endif // LIGA_DODAJ_H
