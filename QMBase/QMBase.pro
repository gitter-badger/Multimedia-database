#-------------------------------------------------
#
# Project created by QtCreator 2016-01-28T11:04:57
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QMBase
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imagehandler.cpp

HEADERS  += mainwindow.h \
    imagehandler.h

FORMS    += mainwindow.ui
