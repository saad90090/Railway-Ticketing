#ifndef TICKET_H
#define TICKET_H

#include <QDialog>
#include "booking.h"
namespace Ui {
class Ticket;
}

class Ticket : public QDialog
{
    Q_OBJECT

public:
    explicit Ticket(QWidget *parent = nullptr);
    ~Ticket();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Ticket *ui;
};

#endif // TICKET_H
