#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>
#include "traininfo.h"
namespace Ui {
class Payment;
}

class Payment : public QDialog
{
    Q_OBJECT

public:
    explicit Payment(QWidget *parent = nullptr,trainInfo t = trainInfo());
    ~Payment();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Payment *ui;
    trainInfo t1;
};

#endif // PAYMENT_H
