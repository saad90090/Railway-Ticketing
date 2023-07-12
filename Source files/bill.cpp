#include "bill.h"
#include "mainwindow.h"
#include "ui_bill.h"
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include <QMessageBox>
#include <QSqlQuery>
#include <cstdlib>

Bill::Bill(QWidget *parent,trainInfo t) :
    QDialog(parent),
    ui(new Ui::Bill),
    t1(t)
{

    ui->setupUi(this);
    QString name;
    QString Seat;
    srand(time(0));
    int tempTotal=0;
    int count=0;
    Database db;
    db.connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM bookings WHERE Phone = '"+Phoneno+"' "
                                                                 "AND Source='"+t1.getSource()+"' AND Destination = '"+t1.getDestination()+"'"
                                                                                                                                           "AND Time = '"+t1.getTime()+"' AND Date = '"+t1.getDate()+"' AND Type = '"+t1.getType()+"'");
    if(qry.exec()){
        qDebug() << "EHHE";
    }
    while(qry.next() && count< t1.getPassengers().toInt()){
        tempTotal += qry.value(8).toInt();
        name = qry.value(0).toString();
        QString seatNo = qry.value(5).toString();
        Seat.append(seatNo + ",");
        count++;

    }
    int temp = rand() % 9999;
    setName(name);
    setTicketno(temp);
    setTotal(tempTotal);
    ui->label_4->setText(name);
    ui->label_8->setText(t1.getSource());
    ui->label_22->setText(t1.getDestination());
    ui->label_10->setText(t1.getPassengers());
    ui->label_12->setText(Seat);
    ui->label_14->setText(t1.getTime());
    ui->label_18->setText(t1.getDate());
    ui->label_2->setText(QString::number(getTicket()));
    ui->label_5->setText(QString::number(getTicket()));
    ui->label_6->setText(t1.getType());


}
Bill::~Bill()
{
    delete ui;
}
void Bill::printContent()
{
    // Create a QPrinter object
    QPrinter printer(QPrinter::PrinterResolution);

    // Create a QPainter object
    QPainter painter;

    // Try to start the printer dialog
    QPrintDialog printDialog(&printer, nullptr);
    if (printDialog.exec() != QDialog::Accepted)
        return;

    // Try to open the printer
    if (!painter.begin(&printer)) {
        QMessageBox::warning(nullptr, "Error", "Could not open the printer");
        return;
    }

    // Get the content from the labels
    QString name = ui->label_4->text();
    QString phone = ui->label_6->text();
    QString source = ui->label_8->text();
    QString destination = ui->label_22->text();
    QString passengers = ui->label_10->text();
    QString seat =  ui->label_12->text();
    QString time = ui->label_14->text();
    // QString total = ui->label_16->text();
    QString date = ui->label_18->text();
    // QString status = ui->label_20->text();
    QString ticket = ui->label_2->text();
    // Set the font and alignment
    QFont font;
    font.setPointSize(12); // Adjust the font size as desired
    painter.setFont(font);

    // Set the starting position for drawing the text
    int xPos = 100; // Adjust the X position as desired
    int yPos = 100; // Adjust the Y position as desired

    // Draw the labels and values
    painter.drawText(xPos, yPos, "Ticket no: " + ticket);
    yPos += painter.fontMetrics().height(); // Move to the next line
    painter.drawText(xPos, yPos, "Name: " + name);
    yPos += painter.fontMetrics().height(); // Move to the next line
    painter.drawText(xPos, yPos, "Train: " + phone);
    yPos += painter.fontMetrics().height(); // Move to the next line
    painter.drawText(xPos, yPos, "Source: " + source);
    yPos += painter.fontMetrics().height(); // Move to the next line
    painter.drawText(xPos, yPos, "Destination: " + destination);
    yPos += painter.fontMetrics().height(); // Move to the next line
    painter.drawText(xPos, yPos, "Passengers: " + passengers);
    yPos += painter.fontMetrics().height(); // Move to the next line
    painter.drawText(xPos, yPos, "Seat: " + seat);
    yPos += painter.fontMetrics().height(); // Move to the next line
    painter.drawText(xPos, yPos, "Time: " + time);
    yPos += painter.fontMetrics().height(); // Move to the next line
  //  painter.drawText(xPos, yPos, "Total: " + total);
    //yPos += painter.fontMetrics().height(); // Move to the next line
    painter.drawText(xPos, yPos, "Date: " + date);
    yPos += painter.fontMetrics().height(); // Move to the next line
    // painter.drawText(xPos, yPos, "Status: " + status);
    // End painting
    painter.end();
}


void Bill::on_pushButton_clicked()
{
    printContent();
}

