#include "panel_sterowania_gosc.h"
#include "ui_panel_sterowania_gosc.h"

panel_sterowania_gosc::panel_sterowania_gosc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::panel_sterowania_gosc)
{
    ui->setupUi(this);
}

panel_sterowania_gosc::~panel_sterowania_gosc()
{
    delete ui;
}

void panel_sterowania_gosc::on_mojedane_clicked()
{
    ui->mojedane->hide();
    ui->rezerwuj_pokoj->hide();
    ui->rezerwuj_parking->hide();
    ui->rezerwuj_sk->hide();
    ui->sprawdz_rezerwacje->hide();
    ui->menu->hide();
}

