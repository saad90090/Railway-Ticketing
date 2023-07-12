#ifndef BOOKING_H
#define BOOKING_H

#include <QDialog>
#include "qdatetime.h"
#include "train.h"
#include "traininfo.h"
namespace Ui {
class Booking;
}

class Booking : public QDialog,public trainInfo
{
    Q_OBJECT

public:
    explicit Booking(QWidget *parent = nullptr);
    ~Booking();


private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_2_clicked();

private:
    Ui::Booking *ui;
    QDate invalidDate;
};

#endif // BOOKING_H
