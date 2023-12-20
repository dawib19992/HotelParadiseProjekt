#ifndef REZERWACJAPOKOJU_H
#define REZERWACJAPOKOJU_H

#include <QMainWindow>
namespace Ui {
class rezerwacjapokoju;
}

class rezerwacjapokoju : public QMainWindow
{
    Q_OBJECT

public:
    explicit rezerwacjapokoju(QWidget *parent = nullptr);
    ~rezerwacjapokoju();

private:
    Ui::rezerwacjapokoju *ui;
};

#endif // REZERWACJAPOKOJU_H
