#include "panel_sterowania_gosc.h"
#include "ui_panel_sterowania_gosc.h"
#include "rezerwacjapokoju.h"
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


void panel_sterowania_gosc::on_rezerwuj_pokoj_clicked()
{
    close();
    pokoj = new rezerwacjapokoju(this);
    pokoj->show();
}

