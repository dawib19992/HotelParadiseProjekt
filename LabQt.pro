QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    panel_sterowania_gosc.cpp \
    rezerwacja_sala.cpp

HEADERS += \
    mainwindow.h \
    panel_sterowania_gosc.h \
    rezerwacja_sala.h

FORMS += \
    mainwindow.ui \
    panel_sterowania_gosc.ui \
    rezerwacja_sala.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
