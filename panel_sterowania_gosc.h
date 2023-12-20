#ifndef PANEL_STEROWANIA_GOSC_H
#define PANEL_STEROWANIA_GOSC_H

#include <QMainWindow>

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

    void on_mojedane_clicked();

private:
    Ui::panel_sterowania_gosc *ui;
};

#endif // PANEL_STEROWANIA_GOSC_H
