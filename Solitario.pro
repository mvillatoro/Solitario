#-------------------------------------------------
#
# Project created by QtCreator 2014-02-01T22:15:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Solitario
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cartas.cpp \
    barajas.cpp \
    game.cpp \
    lista.cpp

HEADERS  += mainwindow.h \
    cartas.h \
    barajas.h \
    game.h \
    lista.h

FORMS    += mainwindow.ui

RESOURCES += \
    Images.qrc
