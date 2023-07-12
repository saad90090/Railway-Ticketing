#include "showbooking.h"
#include "qsqlquery.h"
#include "qsqlquerymodel.h"
#include "ui_showbooking.h"
#include <QSqlQuery>
#include "train.h"
extern QString Phoneno;
showbooking::showbooking(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showbooking)
{

    ui->setupUi(this);
    Database obj;
    QSqlQueryModel *modal = new QSqlQueryModel();
    obj.connOpen();
    QSqlQuery*qry = new QSqlQuery(obj.mydb);
    qry->prepare("SELECT * FROM bookings WHERE Phone='"+Phoneno+"' ");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    obj.connClose();
}

showbooking::~showbooking()
{
    delete ui;
}

void showbooking::on_pushButton_clicked()
{
    this->hide();
    Ticket t1;
    t1.setModal(true);
    t1.exec();

}

