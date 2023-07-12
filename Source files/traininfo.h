#ifndef TRAININFO_H
#define TRAININFO_H
#include <QDialog>
class trainInfo {
private:
    QString Source;
    QString Destination;
    QString Date;
    QString Passengers;
    QString Time;
    QString Type;
    QString Price;
public:
    // Constructor
    trainInfo(QString source = "", QString destination = "", QString date = "", QString passengers = "",QString time="",QString typ="",
            QString price="")
        : Source(source), Destination(destination), Date(date), Passengers(passengers),Time(time),Type(typ), Price(price){
    }

    // Getter methods
    QString getSource() const {
        return Source;
    }

    QString getDestination() const {
        return Destination;
    }

    QString getDate() const {
        return Date;
    }

    QString getPassengers() const {
        return Passengers;
    }

    // Setter methods
    void setSource(QString source) {
        Source = source;
    }

    void setDestination(QString destination) {
        Destination = destination;
    }

    void setDate(QString date) {
        Date = date;
    }

    void setPassengers(QString passengers) {
        Passengers = passengers;
    }
    QString getTime() const {
        return Time;
    }

    void setTime(QString newTime) {
        Time = newTime;
    }

    // Getter and Setter for t_Class
    QString getType() const {
        return Type;
    }

    void setType( QString newType) {
        Type = newType;
    }

    // Getter and Setter for price
    QString getPrice() const {
        return Price;
    }

    void setPrice(QString newPrice) {
        Price = newPrice;
    }


};

#endif // TRAININFO_H
