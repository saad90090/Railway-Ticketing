#ifndef BILL_H
#define BILL_H

#include <QDialog>
#include "database.h"
#include "traininfo.h"
namespace Ui {
class Bill;
}

class Bill : public QDialog
{
    Q_OBJECT

public:
    explicit Bill(QWidget *parent = nullptr,trainInfo a = trainInfo());
    ~Bill();
    void printContent();
    void setTotal(int a){
        total=a;
    }
    int getTotal(){
        return total;
    }
    // Getter method for 'name'
    QString getName() {
        return name;
    }

    // Setter method for 'name'
    void setName(QString newName) {
        name = newName;
    }

    // Getter method for 'ticket'
    int getTicket() {
        return ticketno;
    }

    // Setter method for 'ticket'
    void setTicketno(int newTicket) {
        ticketno = newTicket;
    }

private slots:
    void on_pushButton_clicked();

private:
    Ui::Bill *ui;
    trainInfo t1;
    int total;
    QString name;
    int ticketno;

};

#endif // BILL_H
