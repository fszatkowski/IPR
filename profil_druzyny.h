#ifndef PROFIL_DRUZYNY_H
#define PROFIL_DRUZYNY_H

#include <QDialog>

namespace Ui {
class profil_druzyny;
}

class profil_druzyny : public QDialog
{
    Q_OBJECT

public:
    explicit profil_druzyny(QWidget *parent = nullptr);
    ~profil_druzyny();

private:
    Ui::profil_druzyny *ui;
};

#endif // PROFIL_DRUZYNY_H
