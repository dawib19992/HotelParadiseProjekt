#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/sqlite/hotel.db");

    if(!mydb.open())
    {
        ui->status->setText("Błąd");
    }
    else
    {
        ui->status->setText("Polączono...");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_potwierdz_clicked()
{
    QString login, haslo;
    login = ui->login_lineedit->text();
    haslo = ui->haslo_lineedit->text();

    if(!mydb.isOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    QSqlQuery insertQuery;
    int dodano = 0;
    if(insertQuery.exec("select * from loginy where login='"+login+"'and haslo= '"+haslo+"'"))
    {
        int licznik = 0;
        while(insertQuery.next())
        {
            licznik++;
        }
        if(licznik == 1)
        {
            ui->komunikat->setText("Poprawne login i hasło");
            dodano++;
        }
        if(licznik < 1)
        {
            ui->komunikat->setText("Taki użytkownik nie występuje w bazie");
        }
    }

    if(dodano == 1)
    {
        hide();
        pSterowania = new panel_sterowania(this);
        pSterowania->show();
    }
}

void MainWindow::on_resjestracja_clicked()
{
    QString login, haslo;
    login = ui->login_lineedit->text();
    haslo = ui->haslo_lineedit->text();
    if(!mydb.isOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    QSqlQuery countQuery("SELECT MAX(id) FROM loginy", mydb);
    if (countQuery.exec() && countQuery.next()) {
        int licznik = countQuery.value(0).toInt() + 1;

        QSqlQuery insertQuery;
        if(insertQuery.exec("INSERT INTO loginy VALUES(" + QString::number(licznik) + ", '" + login + "', '" + haslo + "')"))
        {
            ui->komunikat->setText("Dodano użytkownika do bazy, teraz możesz się zalogować");
        }
        else
        {
            qDebug() << "Błąd wstawiania danych:" << insertQuery.lastError().text();
        }
    }
    else
    {
        qDebug() << "Błąd pobierania wartości licznika:" << countQuery.lastError().text();
    }

}


