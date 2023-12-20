#include "rezerwacja_sala.h"
#include "ui_rezerwacja_sala.h"

Rezerwacja_sala::Rezerwacja_sala(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Rezerwacja_sala)
{
    ui->setupUi(this);
}

Rezerwacja_sala::~Rezerwacja_sala()
{
    delete ui;
}
