#include "seats.h"
#include "mainwindow.h"
#include "ui_seats.h"
#include <QSqlQuery>
#include "QMessageBox"
#include "booking.h"
int count1=0;
Seats::Seats(QWidget *parent,trainInfo t1) :
    QDialog(parent),
    ui(new Ui::Seats),
    t(t1)
{
    int total = 0;
    total = (t.getPassengers().toInt() * t.getPrice().toInt());
    int check;
    ui->setupUi(this);
    Database db;
    db.connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM bookings WHERE Source = '"+t1.getSource()+"' AND Destination = '"+t1.getDestination()+"' AND Time = '"+t1.getTime()+"' AND Date ='"+t1.getDate()+"' ");
    if(qry.exec()){
        qDebug() << "Sucess";
    }
    while(qry.next()){
        check = qry.value(5).toInt();

        if (check == 1) {
            ui->c1->setDisabled(true);
            ui->c1->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 2) {
            ui->c2->setDisabled(true);
            ui->c2->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 3) {
            ui->c3->setDisabled(true);
            ui->c3->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 4) {
            ui->c4->setDisabled(true);
            ui->c4->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 5) {
            ui->c5->setDisabled(true);
            ui->c5->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 6) {
            ui->c6->setDisabled(true);
            ui->c6->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 7) {
            ui->c7->setDisabled(true);
            ui->c7->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 8) {
            ui->c8->setDisabled(true);
            ui->c8->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 9) {
            ui->c9->setDisabled(true);
            ui->c9->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 10) {
            ui->c10->setDisabled(true);
            ui->c10->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 11) {
            ui->c11->setDisabled(true);
            ui->c11->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 12) {
            ui->c12->setDisabled(true);
            ui->c12->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 13) {
            ui->c13->setDisabled(true);
            ui->c13->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 14) {
            ui->c14->setDisabled(true);
            ui->c14->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 15) {
            ui->c15->setDisabled(true);
            ui->c15->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 16) {
            ui->c16->setDisabled(true);
            ui->c16->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 17) {
            ui->c17->setDisabled(true);
            ui->c17->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 18) {
            ui->c18->setDisabled(true);
            ui->c18->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 19) {
            ui->c19->setDisabled(true);
            ui->c19->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 20) {
            ui->c20->setDisabled(true);
            ui->c20->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 21) {
            ui->c21->setDisabled(true);
            ui->c21->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 22) {
            ui->c22->setDisabled(true);
            ui->c22->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 23) {
            ui->c23->setDisabled(true);
            ui->c23->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 24) {
            ui->c24->setDisabled(true);
            ui->c24->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 25) {
            ui->c25->setDisabled(true);
            ui->c25->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 26) {
            ui->c26->setDisabled(true);
            ui->c26->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 27) {
            ui->c27->setDisabled(true);
            ui->c27->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 28) {
            ui->c28->setDisabled(true);
            ui->c28->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 29) {
            ui->c29->setDisabled(true);
            ui->c29->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 30) {
            ui->c30->setDisabled(true);
            ui->c30->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 31) {
            ui->c31->setDisabled(true);
            ui->c31->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 32) {
            ui->c32->setDisabled(true);
            ui->c32->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 33) {
            ui->c33->setDisabled(true);
            ui->c33->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 34) {
            ui->c34->setDisabled(true);
            ui->c34->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 35) {
            ui->c35->setDisabled(true);
            ui->c35->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 36) {
            ui->c36->setDisabled(true);
            ui->c36->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 37) {
            ui->c37->setDisabled(true);
            ui->c37->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 38) {
            ui->c38->setDisabled(true);
            ui->c38->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 39) {
            ui->c39->setDisabled(true);
            ui->c39->setStyleSheet("QCheckBox{background-color:red; }");
        }
        else if (check == 40) {
            ui->c40->setDisabled(true);
            ui->c40->setStyleSheet("QCheckBox{background-color:red; }");
        }
    }
    db.connClose();
    db.connOpen();
    int seat ;
    QSqlQuery qry1;
    qry1.prepare("SELECT * FROM Trains WHERE Source = '"+t1.getSource()+"' AND Destination = '"+t1.getDestination()+"' AND Time = '"+t1.getTime()+"' AND Type = '"+t1.getType()+"'");
    qry1.exec();
    int count=0;
    while(qry1.next()){
        count++;
    }
    if(count==1){
        qry1.first();
        seat = qry1.value(3).toInt();
    }
    db.connClose();
    seat  = seat-t1.getPassengers().toInt();
    db.connOpen();
    QSqlQuery q1;
    q1.prepare("UPDATE Trains set Seats = :Seats WHERE  Source = '"+t1.getSource()+"' AND Destination = '"+t1.getDestination()+"' AND Time = '"+t1.getTime()+"' AND Type = '"+t1.getType()+"'");
    q1.bindValue(":Seats",seat);
    q1.exec();
    db.connClose();
    setBill(total);
    ui->label->setText(QString("Your total bill is: %1/-").arg(getBill()));
ui->error->setVisible(false);
}
QString Phoneno;
Seats::~Seats()
{
    delete ui;
}
void insertdata(int seat,trainInfo t1){
    qDebug() << Phoneno;
    QString name;
    Database db;
    db.connOpen();

    QSqlQuery query;
    query.prepare("SELECT * FROM records WHERE Phone = '"+Phoneno+"'");
    query.exec();
    int count=0;
    while(query.next()){
        count++;
    }
    if(count==1){
        query.first();
        name =query.value(0).toString();
    }
    db.connClose();
    db.connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO bookings(Name,Phone,Source,Destination,Passengers,Seatno,Time,Type,Price,Date) Values(:Name,:Phone,:Source,:Destination,:Passengers,:Seatno,:Time,:Type,:Price,:Date)");
    qry.bindValue(":Name",name);
    qry.bindValue(":Phone",Phoneno);
    qry.bindValue(":Source",t1.getSource());
    qry.bindValue(":Destination",t1.getDestination());
    qry.bindValue(":Passengers",t1.getPassengers());
    qry.bindValue(":Seatno",seat);
    qry.bindValue(":Time",t1.getTime());
    qry.bindValue(":Type",t1.getType());
    qry.bindValue(":Price",t1.getPrice());
    qry.bindValue(":Date",t1.getDate());
    if(qry.exec()){
        qDebug() << "Sucessful";
    }
    db.connClose();
}
void Seats::on_checkBox_stateChanged(int arg1)
{

}


void Seats::on_pushButton_clicked()
{

    if(count1 == t.getPassengers().toInt()){
        int seat;
        if(ui->c1->isChecked()){
            seat =1;
            insertdata(seat,t);
        }
        if(ui->c2->isChecked()){
            seat =2;
            insertdata(seat,t);
        }
        if(ui->c3->isChecked()){
            seat =3;
            insertdata(seat,t);
        }
        if(ui->c4->isChecked()){
            seat =4;
            insertdata(seat,t);
        }
        if(ui->c5->isChecked()){
            seat =5;
            insertdata(seat,t);
        }
        if(ui->c6->isChecked()){
            seat =6;
            insertdata(seat,t);
        }
        if(ui->c7->isChecked()){
            seat =7;
            insertdata(seat,t);
        }
        if(ui->c8->isChecked()){
            seat =8;
            insertdata(seat,t);
        }
        if(ui->c9->isChecked()){
            seat =9;
            insertdata(seat,t);
        }
        if(ui->c10->isChecked()){
            seat =10;
            insertdata(seat,t);
        }
        if(ui->c11->isChecked()){
            seat =11;
            insertdata(seat,t);
        }
        if(ui->c12->isChecked()){
            seat =12;
            insertdata(seat,t);
        }
        if(ui->c13->isChecked()){
            seat =13;
            insertdata(seat,t);
        }
        if(ui->c14->isChecked()){
            seat =14;
            insertdata(seat,t);
        }
        if(ui->c15->isChecked()){
            seat =15;
            insertdata(seat,t);
        }
        if(ui->c16->isChecked()){
            seat =16;
            insertdata(seat,t);
        }
        if(ui->c17->isChecked()){
            seat =17;
            insertdata(seat,t);
        }
        if(ui->c18->isChecked()){
            seat =18;
            insertdata(seat,t);
        }
        if(ui->c19->isChecked()){
            seat =19;
            insertdata(seat,t);
        }
        if(ui->c20->isChecked()){
            seat =20;
            insertdata(seat,t);
        }
        if(ui->c21->isChecked()){
            seat =21;
            insertdata(seat,t);
        }
        if(ui->c22->isChecked()){
            seat =22;
            insertdata(seat,t);
        }
        if(ui->c23->isChecked()){
            seat =23;
            insertdata(seat,t);
        }
        if(ui->c24->isChecked()){
            seat =24;
            insertdata(seat,t);
        }
        if(ui->c25->isChecked()){
            seat =25;
            insertdata(seat,t);
        }
        if(ui->c26->isChecked()){
            seat =26;
            insertdata(seat,t);
        }
        if(ui->c27->isChecked()){
            seat =27;
            insertdata(seat,t);
        }
        if(ui->c28->isChecked()){
            seat =28;
            insertdata(seat,t);
        }
        if(ui->c29->isChecked()){
            seat =29;
            insertdata(seat,t);
        }
        if(ui->c30->isChecked()){
            seat =30;
            insertdata(seat,t);
        }
        if(ui->c31->isChecked()){
            seat =31;
            insertdata(seat,t);
        }
        if(ui->c32->isChecked()){
            seat =32;
            insertdata(seat,t);
        }
        if(ui->c33->isChecked()){
            seat =33;
            insertdata(seat,t);
        }
        if(ui->c34->isChecked()){
            seat =34;
            insertdata(seat,t);
        }
        if(ui->c35->isChecked()){
            seat =35;
            insertdata(seat,t);
        }
        if(ui->c36->isChecked()){
            seat =36;
            insertdata(seat,t);
        }
        if(ui->c37->isChecked()){
            seat =37;
            insertdata(seat,t);
        }
        if(ui->c38->isChecked()){
            seat =38;
            insertdata(seat,t);
        }
        if(ui->c39->isChecked()){
            seat =39;
            insertdata(seat,t);
        }
        if(ui->c40->isChecked()){
            seat =40;
            insertdata(seat,t);
        }
        this->hide();
        Payment p(nullptr,t);
        p.setModal(true);
        p.exec();
    }
    else{
       ui->error->setVisible(true);
    }
}


void Seats::on_checkBox_2_stateChanged(int arg1)
{

}


void Seats::on_c1_stateChanged(int arg1)
{
    if(ui->c1->isChecked()){
        count1++;}
    if(ui->c1->checkState()== Qt::Unchecked){
        count1--;
    }

}
void Seats::on_c2_stateChanged(int arg1)
{
    if(ui->c2->isChecked()){
        count1++;}
    if(ui->c2->checkState()== Qt::Unchecked){
        count1--;
    }
}
void Seats::on_c3_stateChanged(int arg1)
{
    if(ui->c3->isChecked()){
        count1++;}
    if(ui->c3->checkState()== Qt::Unchecked){
        count1--;
    }
}
void Seats::on_c4_stateChanged(int arg1)
{
    if(ui->c4->isChecked()){
        count1++;}
    if(ui->c4->checkState()== Qt::Unchecked){
        count1--;
    }
}
void Seats::on_c5_stateChanged(int arg1)
{
    if(ui->c5->isChecked()){
        count1++;}
    if(ui->c5->checkState()== Qt::Unchecked){
        count1--;
    }
}
void Seats::on_c6_stateChanged(int arg1)
{
    if(ui->c6->isChecked()){
        count1++;}
    if(ui->c6->checkState()== Qt::Unchecked){
        count1--;
    }
}
void Seats::on_c7_stateChanged(int arg1)
{
    if(ui->c7->isChecked()){
        count1++;}
    if(ui->c7->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c8_stateChanged(int arg1)
{
    if(ui->c8->isChecked()){
        count1++;}
    if(ui->c8->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c9_stateChanged(int arg1)
{
    if(ui->c9->isChecked()){
        count1++;}
    if(ui->c9->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c10_stateChanged(int arg1)
{
    if(ui->c10->isChecked()){
        count1++;}
    if(ui->c10->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c11_stateChanged(int arg1)
{
    if(ui->c11->isChecked()){
        count1++;}
    if(ui->c11->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c12_stateChanged(int arg1)
{
    if(ui->c12->isChecked()){
        count1++;}
    if(ui->c12->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c13_stateChanged(int arg1)
{
    if(ui->c13->isChecked()){
        count1++;}
    if(ui->c13->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c14_stateChanged(int arg1)
{
    if(ui->c14->isChecked()){
        count1++;}
    if(ui->c14->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c15_stateChanged(int arg1)
{
    if(ui->c15->isChecked()){
        count1++;}
    if(ui->c15->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c16_stateChanged(int arg1)
{
    if(ui->c16->isChecked()){
        count1++;}
    if(ui->c16->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c17_stateChanged(int arg1)
{
    if(ui->c17->isChecked()){
        count1++;}
    if(ui->c17->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c18_stateChanged(int arg1)
{
    if(ui->c18->isChecked()){
        count1++;}
    if(ui->c18->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c19_stateChanged(int arg1)
{
    if(ui->c19->isChecked()){
        count1++;}
    if(ui->c19->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c20_stateChanged(int arg1)
{
    if(ui->c20->isChecked()){
        count1++;}
    if(ui->c20->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c21_stateChanged(int arg1)
{
    if(ui->c21->isChecked()){
        count1++;}
    if(ui->c21->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c22_stateChanged(int arg1)
{
    if(ui->c22->isChecked()){
        count1++;}
    if(ui->c22->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c23_stateChanged(int arg1)
{
    if(ui->c23->isChecked()){
        count1++;}
    if(ui->c23->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c24_stateChanged(int arg1)
{
    if(ui->c24->isChecked()){
        count1++;}
    if(ui->c24->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c25_stateChanged(int arg1)
{
    if(ui->c25->isChecked()){
        count1++;}
    if(ui->c25->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c26_stateChanged(int arg1)
{
    if(ui->c26->isChecked()){
        count1++;}
    if(ui->c26->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c27_stateChanged(int arg1)
{
    if(ui->c27->isChecked()){
        count1++;}
    if(ui->c27->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c28_stateChanged(int arg1)
{
    if(ui->c28->isChecked()){
        count1++;}
    if(ui->c28->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c29_stateChanged(int arg1)
{
    if(ui->c29->isChecked()){
        count1++;}
    if(ui->c29->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c30_stateChanged(int arg1)
{
    if(ui->c30->isChecked()){
        count1++;}
    if(ui->c30->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c31_stateChanged(int arg1)
{
    if(ui->c31->isChecked()){
        count1++;}
    if(ui->c31->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c32_stateChanged(int arg1)
{
    if(ui->c32->isChecked()){
        count1++;}
    if(ui->c32->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c33_stateChanged(int arg1)
{
    if(ui->c33->isChecked()){
        count1++;}
    if(ui->c33->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c34_stateChanged(int arg1)
{
    if(ui->c34->isChecked()){
        count1++;}
    if(ui->c34->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c35_stateChanged(int arg1)
{
    if(ui->c35->isChecked()){
        count1++;}
    if(ui->c35->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c36_stateChanged(int arg1)
{
    if(ui->c36->isChecked()){
        count1++;}
    if(ui->c36->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c37_stateChanged(int arg1)
{
    if(ui->c37->isChecked()){
        count1++;}
    if(ui->c37->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c38_stateChanged(int arg1)
{
    if(ui->c38->isChecked()){
        count1++;}
    if(ui->c38->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c39_stateChanged(int arg1)
{
    if(ui->c39->isChecked()){
        count1++;}
    if(ui->c39->checkState()== Qt::Unchecked){
        count1--;
    }
}void Seats::on_c40_stateChanged(int arg1)
{
    if(ui->c40->isChecked()){
        count1++;}
    if(ui->c40->checkState()== Qt::Unchecked){
        count1--;
    }
}


void Seats::on_pushButton_2_clicked()
{

    this->hide();
    Train t1(nullptr,t);
    t1.setModal(true);
    t1.exec();
}

