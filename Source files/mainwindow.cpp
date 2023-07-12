#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QFrame>
#include <QLabel>
#include <QMessageBox>
#include <QSqlQuery>
#include <QCryptographicHash>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)

    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->error->setVisible(false);
    ui->label_4->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Phoneno = ui->Phone->text();
    bool isPhoneValid = true;
    if(Phoneno.length()<11){
         isPhoneValid = false;
    }
    for (int i = 0; i < Phoneno.length(); i++) {
        if (Phoneno[i] < '0' || Phoneno[i] > '9') {
            isPhoneValid = false;
            break;
        }
    }
    if (!isPhoneValid) {
        ui->error->setVisible(true);
        ui->Phone->setStyleSheet("QLineEdit{border: 1px solid red; }");
    } else {
        ui->error->setVisible(false);
        ui->Phone->setStyleSheet("QLineEdit{border: 1px solid black; }");
    }
    Login l1(Phoneno, ui->Password->text());
    QByteArray hashedPassword = QCryptographicHash::hash(l1.getPassword().toUtf8(), QCryptographicHash::Md5);
    QString hashedPasswordStr = QString(hashedPassword.toHex());

    Database db;
    db.connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM records WHERE Phone = '" + l1.getPhone() + "' AND Password = '" + hashedPasswordStr + "'");

    if (qry.exec()) {
        int count = 0;
        while (qry.next()) {
            count++;
        }
        if (count == 1) {
            this->hide();
            Ticket t1;
            t1.setModal(true);
            t1.exec();
        } else {
            ui->label_4->setVisible(true);
            ui->Password->setStyleSheet("QLineEdit{border: 1px solid red; }");
        }
    }
}




void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    SignUp s1;
    s1.setModal(true);
    s1.exec();
}


void MainWindow::on_Phone_textEdited(const QString &arg1)
{

}


void MainWindow::on_Phone_textChanged(const QString &arg1)
{

}

