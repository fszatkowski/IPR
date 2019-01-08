#ifndef WYSZUKAJ_DRUZYNE_H
#define WYSZUKAJ_DRUZYNE_H

#include <QDialog>

namespace Ui {
class wyszukaj_druzyne;
}

class wyszukaj_druzyne : public QDialog
{
    Q_OBJECT

public:
    explicit wyszukaj_druzyne(QWidget *parent = nullptr);
    ~wyszukaj_druzyne();

private:
    Ui::wyszukaj_druzyne *ui;
};

#endif // WYSZUKAJ_DRUZYNE_H
