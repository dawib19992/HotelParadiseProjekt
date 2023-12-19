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
    QSqlQuery query;

    if(query.exec("select * from loginy where login='"+login+"'and haslo= '"+haslo+"'"))
    {
        int licznik = 0;
        while(query.next())
        {
            licznik++;
        }
        if(licznik == 1)
        {
            ui->status->setText("Poprawne login i hasło");
        }
        if(licznik < 1)
        {
            ui->status->setText("Taki użytkownik nie występuje w bazie");
        }
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

        // Wstaw nowego użytkownika z inkrementowanym licznikiem
        QSqlQuery insertQuery;
        if(insertQuery.exec("INSERT INTO loginy VALUES(" + QString::number(licznik) + ", '" + login + "', '" + haslo + "')"))
        {
            ui->status->setText("Dodano użytkownika do bazy");
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

