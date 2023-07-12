#include "train.h"
#include "ui_train.h"
#include <QSqlQuery>
#include "seats.h"
#include "ticket.h"
Train::Train(QWidget *parent,trainInfo t2) :
    QDialog(parent),
    ui(new Ui::Train),

    t1(t2)
{
Database db;
db.connOpen();
    ui->setupUi(this);
    ui->label1->setText(t1.getSource());
    ui->label1_2->setText(t1.getSource());
    ui->label1_3->setText(t1.getSource());
    ui->label1_4->setText(t1.getSource());
    ui->label1_5->setText(t1.getSource());
    ui->label2->setText(t1.getDestination());
    ui->label2_2->setText(t1.getDestination());
    ui->label2_3->setText(t1.getDestination());
    ui->label2_4->setText(t1.getDestination());
    ui->label2_5->setText(t1.getDestination());
    ui->label5->setText(t1.getDate());
    ui->label5_2->setText(t1.getDate());
    ui->label5_3->setText(t1.getDate());
    ui->label5_4->setText(t1.getDate());
    ui->label5_5->setText(t1.getDate());
    QSqlQuery qry;
    qry.prepare("SELECT * FROM Trains WHERE Source = '"+t1.getSource()+"' AND Destination = '"+t1.getDestination()+"'");
    if (qry.exec()) {
        int count = 0;
        while (count < 5 && qry.next()) {
            t1.setTime(qry.value(2).toString());
            t1.setType(qry.value(4).toString());
            t1.setPrice(qry.value(5).toString());

            if (count == 0) {
                ui->label6->setText(t1.getTime());
                ui->label3->setText(t1.getType());
                ui->label4->setText(t1.getPrice());

            } else if (count == 1) {
                ui->label6_2->setText(t1.getTime());
                ui->label3_2->setText(t1.getType());
                ui->label4_2->setText(t1.getPrice());

            }else if (count == 2) {
                ui->label6_3->setText(t1.getTime());
                ui->label3_3->setText(t1.getType());
                ui->label4_3->setText(t1.getPrice());

            }else if (count == 3) {
                ui->label6_4->setText(t1.getTime());
                ui->label3_4->setText(t1.getType());
                ui->label4_4->setText(t1.getPrice());


            }else if (count == 4) {
                ui->label6_5->setText(t1.getTime());
                ui->label3_5->setText(t1.getType());
                ui->label4_5->setText(t1.getPrice());

            }
            count++;
        }
    }

}

Train::~Train()
{
    delete ui;
}

void Train::on_pushButton_clicked()
{
    t1.setTime(ui->label6->text());
    t1.setType(ui->label3->text());
    t1.setPrice(ui->label4->text());
    this->hide();
    Seats s1(nullptr,t1);
    s1.setModal(true);
    s1.exec();
}


void Train::on_pushButton_2_clicked()
{
    t1.setTime(ui->label6_2->text());
    t1.setType(ui->label3_2->text());
    t1.setPrice(ui->label4_2->text());
    this->hide();
    Seats s1(nullptr,t1);
    s1.setModal(true);
    s1.exec();
}


void Train::on_pushButton_3_clicked()
{

        t1.setTime(ui->label6_3->text());
        t1.setType(ui->label3_3->text());
        t1.setPrice(ui->label4_3->text());
        this->hide();
        Seats s1(nullptr,t1);
        s1.setModal(true);
        s1.exec();

}


void Train::on_pushButton_4_clicked()
{
    t1.setTime(ui->label6_4->text());
    t1.setType(ui->label3_4->text());
    t1.setPrice(ui->label4_4->text());
    this->hide();
    Seats s1(nullptr,t1);
    s1.setModal(true);
    s1.exec();
}


void Train::on_pushButton_5_clicked()
{
    t1.setTime(ui->label6_5->text());
    t1.setType(ui->label3_5->text());
    t1.setPrice(ui->label4_5->text());
    this->hide();
    Seats s1(nullptr,t1);
    s1.setModal(true);
    s1.exec();
}


void Train::on_pushButton_6_clicked()
{
    this->hide();
    Booking b1;
    b1.setModal(true);
    b1.exec();
}

