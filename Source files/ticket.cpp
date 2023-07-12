#include "ticket.h"
#include "ui_ticket.h"
#include "showbooking.h"
extern QString Phoneno;
Ticket::Ticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ticket)
{
    ui->setupUi(this);
}

Ticket::~Ticket()
{
    delete ui;
}

void Ticket::on_pushButton_clicked()
{
    this->hide();
    Booking b1;
    b1.setModal(true);
    b1.exec();
}


void Ticket::on_pushButton_2_clicked()
{
    this->hide();
    showbooking s1;
    s1.setModal(true);
    s1.exec();
}

