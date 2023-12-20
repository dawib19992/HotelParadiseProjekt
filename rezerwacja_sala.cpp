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

void Rezerwacja_sala::on_calendarWidget_clicked(const QDate &date)
{
    qDebug()<<"wybrana data: "<<date;
    // Tworzymy obiekt QDate
    QDate myDate(date);
    setDzien(myDate.day());
    setMiesiac(myDate.month());
    setRok(myDate.year());

    qDebug()<<"wybrany dzien: "<<myDate.day();
    qDebug()<<"wybrany miesiac: "<<myDate.month();
    qDebug()<<"wybrany rok: "<<myDate.year();

}
