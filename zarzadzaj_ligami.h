#ifndef ZARZADZAJ_LIGAMI_H
#define ZARZADZAJ_LIGAMI_H

#include <QDialog>

namespace Ui {
class zarzadzaj_ligami;
}

class zarzadzaj_ligami : public QDialog
{
    Q_OBJECT

public:
    explicit zarzadzaj_ligami(QWidget *parent = nullptr);
    ~zarzadzaj_ligami();

private:
    Ui::zarzadzaj_ligami *ui;
};

#endif // ZARZADZAJ_LIGAMI_H
