#ifndef REZERWACJA_SALA_H
#define REZERWACJA_SALA_H

#include <QMainWindow>

namespace Ui {
class Rezerwacja_sala;
}

class Rezerwacja_sala : public QMainWindow
{
    Q_OBJECT

public:
    explicit Rezerwacja_sala(QWidget *parent = nullptr);
    ~Rezerwacja_sala();

private:
    Ui::Rezerwacja_sala *ui;
};

#endif // REZERWACJA_SALA_H
