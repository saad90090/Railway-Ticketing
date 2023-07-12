#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "dialog.h"
#include "database.h"
#include "mainwindow.h"
namespace Ui {
class SignUp;
}
class Sign_UP{
private:
    QString Email;
    QString CheckPass;
    QString Name;
    QString Phone;
    QString Password;
    public:
    Sign_UP(QString a="",QString b="",QString c="",QString d="",QString e=""){

        setName(a);
        setPhone(b);
        setEmail(c);
        setPassword(d);
        setCheckpass(e);

    }
    void setEmail(QString a){
        Email =a;
    }
    void setCheckpass(QString a){
        CheckPass =a;
    }
    void setName(QString a){
        Name =a;
    }
    void setPhone(QString a){
        Phone =a;
    }
    void setPassword(QString a){
        Password =a;
    }
    QString getEmail(){
        return Email;
    }
    QString getCheckpass(){
        return CheckPass;
    }
    QString getName(){
        return Name;
    }
    QString getPhone(){
        return Phone;
    }
    QString getPassword(){
        return Password;
    }


};
class SignUp : public QDialog,public Sign_UP
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
