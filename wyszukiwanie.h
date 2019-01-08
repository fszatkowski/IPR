#ifndef WYSZUKIWANIE_H
#define WYSZUKIWANIE_H

#include <QDialog>

namespace Ui {
class wyszukiwanie;
}

class wyszukiwanie : public QDialog
{
    Q_OBJECT

public:
    explicit wyszukiwanie(QWidget *parent = nullptr);
    ~wyszukiwanie();

private:
    Ui::wyszukiwanie *ui;
};

#endif // WYSZUKIWANIE_H
