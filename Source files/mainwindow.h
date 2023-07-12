#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include "signup.h"
#include "database.h"
#include "ticket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

QT_END_NAMESPACE
extern QString Phoneno;
class Login{
private:
    QString Phone;
    QString Password;
    public:
    Login(QString a="",QString b=""){
        setPhone(a);
        setPassword(b);
    }
    void setPhone(QString a){
        Phone = a;
    }
    void setPassword(QString a){
        Password =a;
    }
    QString getPhone(){
        return Phone;
    }
    QString getPassword(){
        return Password;
    }
};

class MainWindow : public QMainWindow,public Login
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_Phone_textEdited(const QString &arg1);

    void on_Phone_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
