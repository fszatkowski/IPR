#ifndef STRONA_GLOWNA_OPIEKUN_H
#define STRONA_GLOWNA_OPIEKUN_H

#include <QDialog>

namespace Ui {
class strona_glowna_opiekun;
}

class strona_glowna_opiekun : public QDialog
{
    Q_OBJECT

public:
    explicit strona_glowna_opiekun(QWidget *parent = nullptr);
    ~strona_glowna_opiekun();

private:
    Ui::strona_glowna_opiekun *ui;
};

#endif // STRONA_GLOWNA_OPIEKUN_H
