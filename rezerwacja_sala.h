#ifndef REZERWACJA_SALA_H
#define REZERWACJA_SALA_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QDateTime>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
namespace Ui {
class Rezerwacja_sala;
}

class Rezerwacja_sala : public QMainWindow
{
    Q_OBJECT

public:
    explicit Rezerwacja_sala(QWidget *parent = nullptr);
    ~Rezerwacja_sala();
    void setDzien(int day)
    {
        dzien=day;
    }
    void setMiesiac(int day)
    {
        dzien=day;
    }
    void setRok(int year)
    {
        dzien=year;
    }
    int getDzien(){
        return dzien;
    }
    int getMiesiac(){
        return miesiac;
    }
    int getRok(){
        return rok;
    }
    /*void setDate(QDate rampampampam)
    {
        data = rampampampam;
    }

    QDate getDate()
    {
        return data;
    }*/

private slots:
    void on_calendarWidget_clicked(const QDate &date);


private:
    Ui::Rezerwacja_sala *ui;
    //int rok,miesiac,dzien;
    int dzien, miesiac, rok;
};


#endif // REZERWACJA_SALA_H
