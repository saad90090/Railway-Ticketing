#ifndef SHOWBOOKING_H
#define SHOWBOOKING_H

#include <QDialog>
#include "database.h"
#include "mainwindow.h"
namespace Ui {
class showbooking;
}

class showbooking : public QDialog
{
    Q_OBJECT

public:
    explicit showbooking(QWidget *parent = nullptr);
    ~showbooking();

private slots:
    void on_pushButton_clicked();

private:
    Ui::showbooking *ui;
};

#endif // SHOWBOOKING_H
