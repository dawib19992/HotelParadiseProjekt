#include "panel_sterowania.h"
#include "ui_panel_sterowania.h"

panel_sterowania::panel_sterowania(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::panel_sterowania)
{
    ui->setupUi(this);
}

panel_sterowania::~panel_sterowania()
{
    delete ui;
}
