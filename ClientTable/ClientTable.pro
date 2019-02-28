#-------------------------------------------------
#
# Project created by QtCreator 2019-02-28T19:32:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ClientTable
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    authwindow/authorizationwindow.cpp

HEADERS  += mainwindow.h \
    core/settings.h \
    core/core.h \
    authwindow/authorizationwindow.h

FORMS    += mainwindow.ui \
    authwindow/authorizationwindow.ui
