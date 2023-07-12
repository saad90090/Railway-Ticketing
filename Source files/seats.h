#ifndef SEATS_H
#define SEATS_H

#include <QDialog>
#include "traininfo.h"
#include "database.h"
#include "payment.h"
namespace Ui {
class Seats;
}
class Seats : public QDialog
{
    Q_OBJECT

public:
    explicit Seats(QWidget *parent = nullptr,trainInfo t1= trainInfo());
    ~Seats();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_c1_stateChanged(int arg1);

    void on_c3_stateChanged(int arg1);

    void on_c2_stateChanged(int arg1);

    void on_c4_stateChanged(int arg1);

    void on_c5_stateChanged(int arg1);

    void on_c6_stateChanged(int arg1);

    void on_c7_stateChanged(int arg1);

    void on_c8_stateChanged(int arg1);

    void on_c9_stateChanged(int arg1);

    void on_c10_stateChanged(int arg1);

    void on_c11_stateChanged(int arg1);

    void on_c12_stateChanged(int arg1);

    void on_c13_stateChanged(int arg1);

    void on_c14_stateChanged(int arg1);

    void on_c15_stateChanged(int arg1);

    void on_c16_stateChanged(int arg1);

    void on_c20_stateChanged(int arg1);

    void on_c17_stateChanged(int arg1);

    void on_c18_stateChanged(int arg1);

    void on_c19_stateChanged(int arg1);

    void on_c21_stateChanged(int arg1);

    void on_c22_stateChanged(int arg1);

    void on_c23_stateChanged(int arg1);

    void on_c24_stateChanged(int arg1);

    void on_c25_stateChanged(int arg1);

    void on_c26_stateChanged(int arg1);

    void on_c27_stateChanged(int arg1);

    void on_c28_stateChanged(int arg1);

    void on_c29_stateChanged(int arg1);

    void on_c30_stateChanged(int arg1);

    void on_c31_stateChanged(int arg1);

    void on_c32_stateChanged(int arg1);

    void on_c33_stateChanged(int arg1);

    void on_c34_stateChanged(int arg1);

    void on_c35_stateChanged(int arg1);

    void on_c36_stateChanged(int arg1);

    void on_c37_stateChanged(int arg1);

    void on_c38_stateChanged(int arg1);

    void on_c39_stateChanged(int arg1);

    void on_c40_stateChanged(int arg1);
    int getBill() const{
        return Bill;
    }
    void setBill(int bill){
        Bill=bill;
    }
    void on_pushButton_2_clicked();

private:
    Ui::Seats *ui;
    trainInfo t;
int Bill;
};

#endif // SEATS_H
