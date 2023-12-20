#include "rezerwacjapokoju.h"
#include "ui_rezerwacjapokoju.h"

rezerwacjapokoju::rezerwacjapokoju(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::rezerwacjapokoju)
{
    ui->setupUi(this);
}

rezerwacjapokoju::~rezerwacjapokoju()
{
    delete ui;
}
