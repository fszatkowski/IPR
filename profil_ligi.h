#ifndef PROFIL_LIGI_H
#define PROFIL_LIGI_H

#include <QDialog>

namespace Ui {
class profil_ligi;
}

class profil_ligi : public QDialog
{
    Q_OBJECT

public:
    explicit profil_ligi(QWidget *parent = nullptr);
    ~profil_ligi();

private:
    Ui::profil_ligi *ui;
};

#endif // PROFIL_LIGI_H
