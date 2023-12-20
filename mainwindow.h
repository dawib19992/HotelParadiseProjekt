#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "panel_sterowania_gosc.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_potwierdz_clicked();

    void on_resjestracja_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase mydb;
    panel_sterowania_gosc *ps_gosc;
};

class MainWindow;

class Gosc
{
    /*friend MainWindow;
    friend rezerwacjapokoju;
    friend Rezerwacja_sala;*/
public:
    QString login;
    QString haslo;
};

#endif // MAINWINDOW_H
