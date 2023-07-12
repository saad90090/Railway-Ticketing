#include "dialog.h"
#include "ui_dialog.h"
#include <QPainterPath>
#include <QPainter>
#include <QtMath>
#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QString check;
Captcha cp;
int count =0;
void Dialog::paintEvent(QPaintEvent *)
{
    if(count==0){
    QPainter painter(this);
    cp.randomize();
    cp.setDifficulty(1);
    cp.generateText();
    painter.drawImage(30, 30, cp.captchaImage());
    count++;
}

}

void Dialog::on_pushButton_clicked()
{
    check = cp.captchaText();
   qDebug() << check;
    QString check1 = ui->lineEdit->text();
    if(check==check1){
        this->hide();
    }
    else{
        QMessageBox::critical(this,"ERROR","Invalid Captcha! Please Try Again");
       count=0;
    }

}


void Dialog::on_lineEdit_textChanged(const QString &arg1)
{

}

