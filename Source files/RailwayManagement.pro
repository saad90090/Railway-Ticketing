QT       += core gui sql
QT += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bill.cpp \
    booking.cpp \
    captcha.cpp \
    database.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    payment.cpp \
    seats.cpp \
    showbooking.cpp \
    signup.cpp \
    ticket.cpp \
    train.cpp

HEADERS += \
    bill.h \
    booking.h \
    captcha.h \
    database.h \
    dialog.h \
    mainwindow.h \
    payment.h \
    seats.h \
    showbooking.h \
    signup.h \
    ticket.h \
    train.h \
    traininfo.h

FORMS += \
    bill.ui \
    booking.ui \
    dialog.ui \
    mainwindow.ui \
    payment.ui \
    seats.ui \
    showbooking.ui \
    signup.ui \
    ticket.ui \
    train.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
