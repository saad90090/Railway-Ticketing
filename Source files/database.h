#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql/QSqlDatabase>
#include <QDebug>
class Database
{
public:
    Database();
    QSqlDatabase mydb;
    void connClose(){

        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
{
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/Saad/Desktop/Database/customer.db");
        if(!mydb.open()){
            qDebug() << "NOT OPEN";
            return false;
        }
        else{
            qDebug() << "OPEN";
            return true;
        }
    }
};

#endif // DATABASE_H
