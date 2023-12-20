#ifndef PANEL_STEROWANIA_H
#define PANEL_STEROWANIA_H

#include <QDialog>

namespace Ui {
class panel_sterowania;
}

class panel_sterowania : public QDialog
{
    Q_OBJECT

public:
    explicit panel_sterowania(QWidget *parent = nullptr);
    ~panel_sterowania();

private:
    Ui::panel_sterowania *ui;
};

#endif // PANEL_STEROWANIA_H
