#include "signup.h"
#include "ui_signup.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QCryptographicHash> // Include the cryptographic hash header

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->namerror->setVisible(false);
    ui->phoneerror->setVisible(false);
    ui->emailerror->setVisible(false);
    ui->pworderror->setVisible(false);
    ui->rpworderror->setVisible(false);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{
    int count=0;
    QString Name = ui->Name->text();
    bool isNameValid = true;
   for(int i =0;i<Name.length();i++){
       if((Name[i] < '0' || Name[i] > '9')){
        isNameValid = false;
        break;
       }
   }
   if(isNameValid){
       ui->namerror->setVisible(true);
       ui->Name->setStyleSheet("QLineEdit{border: 1px solid red; }");
   }
   else{
       ui->namerror->setVisible(false);
       ui->Name->setStyleSheet("QLineEdit{border: 1px solid black; }");
       count++;
   }
   QString Phone = ui->Phone->text();
   bool isPhoneValid = true;
   if(Phone.length()<11){
        isPhoneValid = false;
   }
   for (int i = 0; i < Phone.length(); i++) {
       if (Phone[i] < '0' || Phone[i] > '9') {
           isPhoneValid = false;
           break;
       }
   }
   if (!isPhoneValid) {
       ui->phoneerror->setVisible(true);
       ui->Phone->setStyleSheet("QLineEdit{border: 1px solid red; }");
   } else {
       ui->phoneerror->setVisible(false);
       ui->Phone->setStyleSheet("QLineEdit{border: 1px solid black; }");
       count++;
   }
    bool check = false;
    Database db;
    db.connOpen();
    QSqlQuery qry;
    Sign_UP s1(ui->Name->text(), ui->Phone->text(), ui->Email->text(), ui->Password->text(), ui->RePassword->text());
    // Hash the password
    QByteArray hashedPassword = QCryptographicHash::hash(s1.getPassword().toUtf8(), QCryptographicHash::Md5);
    QString hashedPasswordStr = QString(hashedPassword.toHex());

    QString checkEmail = s1.getEmail();
    for (int i = 0; i < s1.getEmail().length(); i++) {
        if (checkEmail[i] == '@') {

            for (int j = 0; j < s1.getEmail().length(); j++) {
                if (checkEmail[j] == '.') {
                    count++;

                    check = true;
                    break;
                }
            }
        }
    }

    if (!check) {
        ui->emailerror->setVisible(true);
          ui->Email->setStyleSheet("QLineEdit{border: 1px solid red; }");
    }
    else{
        ui->emailerror->setVisible(false);
          ui->Email->setStyleSheet("QLineEdit{border: 1px solid black; }");
    }

    if (s1.getCheckpass() == s1.getPassword()) {
        count++;
    } else {
        ui->pworderror->setVisible(true);
          ui->Password->setStyleSheet("QLineEdit{border: 1px solid red; }");
          ui->rpworderror->setVisible(true);
            ui->RePassword->setStyleSheet("QLineEdit{border: 1px solid red; }");
    }
    if (count >= 4) {
        Dialog d1;
        d1.setModal(true);
        d1.exec();
        qry.prepare("INSERT INTO records(Name,Phone,Email,Password) Values(:Name,:Phone,:Email,:Password)");
        qry.bindValue(":Name", s1.getName());
        qry.bindValue(":Phone", s1.getPhone());
        qry.bindValue(":Email", s1.getEmail());
        qry.bindValue(":Password", hashedPasswordStr); // Store the hashed password
        if (qry.exec()) {
            QMessageBox::information(this, "Success", "Registration successful!");
            this->hide() ;
            // Show the MainWindow (i.e. the parent window)
            MainWindow *newmain = new MainWindow();
            newmain->show();

        } else {
            QMessageBox::critical(this, "Error", "Registration failed. User Already exists");
        }
        db.connClose();
    }
}
