#include "booking.h"
#include "ui_booking.h"
#include "mainwindow.h"
Booking::Booking(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Booking)
{
    ui->setupUi(this);
    ui->serror->setVisible(false);
    ui->derror->setVisible(false);
    ui->dateerror->setVisible(false);
    ui->paserror->setVisible(false);
    ui->calendarWidget->setMinimumDate(QDate::currentDate());
}

Booking::~Booking()
{
    delete ui;
}

void Booking::on_pushButton_clicked()
{
    int count=0;
    if(ui->comboBox->currentText()=="-"){
        ui->serror->setVisible(true);
    }else{count++;}
    if(ui->comboBox_2->currentText()=="-"){
        ui->derror->setVisible(true);
    }else{count++;}
    QDate selectedDate = ui->calendarWidget->selectedDate();
    QString date = selectedDate.toString("dd-MM-yyyy");
    if(ui->calendarWidget->selectedDate().isNull()){
        ui->dateerror->setVisible(true);
    }else{
        count++;
    }
    if(ui->spinBox->text()=='0'){
        ui->paserror->setVisible(true);
    }
    else{
        count++;
    }
    if(count==4){
    trainInfo t(ui->comboBox->currentText(),ui->comboBox_2->currentText(),date,ui->spinBox->text());
    this->hide();
    Train t1(nullptr,t);
    t1.setModal(true);
    t1.exec();}
}

void Booking::on_comboBox_currentTextChanged(const QString &arg1)
{
    QString selectedCity = ui->comboBox->currentText();

    if (selectedCity == "Islamabad") {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("Lahore");
        ui->comboBox_2->addItem("Karachi");
    } else if (selectedCity == "Karachi") {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("Islamabad");
        ui->comboBox_2->addItem("Lahore");
    } else if (selectedCity == "Lahore") {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("Islamabad");
        ui->comboBox_2->addItem("Karachi");
    }
}



void Booking::on_pushButton_2_clicked()
{
    this->hide();
    Ticket t1;
    t1.setModal(true);
    t1.exec();
}

