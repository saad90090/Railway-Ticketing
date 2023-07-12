#ifndef TRAIN_H
#define TRAIN_H

#include <QDialog>
#include "traininfo.h"
#include "database.h"

namespace Ui {
class Train;
}

class Train : public QDialog
{
    Q_OBJECT

public:
    explicit Train(QWidget *parent = nullptr,trainInfo a = trainInfo());
    ~Train();
    // Getter and Setter for time

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Train *ui;
trainInfo t1;

};

#endif // TRAIN_H
