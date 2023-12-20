#ifndef PANEL_STEROWANIA_GOSC_H
#define PANEL_STEROWANIA_GOSC_H

#include <QMainWindow>
#include "rezerwacjapokoju.h"
namespace Ui {
class panel_sterowania_gosc;
}

class panel_sterowania_gosc : public QMainWindow
{
    Q_OBJECT

public:
    explicit panel_sterowania_gosc(QWidget *parent = nullptr);
    ~panel_sterowania_gosc();

private slots:

    void on_rezerwuj_pokoj_clicked();

private:
    Ui::panel_sterowania_gosc *ui;
    rezerwacjapokoju* pokoj;
};

#endif // PANEL_STEROWANIA_GOSC_H
