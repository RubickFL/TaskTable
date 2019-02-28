/*
    *Copyright (c) 2019 <Rubick>

    *Main file which defines entry point
*/

#include "mainwindow.h"
#include "core/core.h"
#include "authwindow/authorizationwindow.h"
#include <QApplication>
#include <QDebug>



int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    qDebug() << "Showing start window...";

    #if AUTHORIZATION_NEEDED == 0
    MainWindow startWindow;
    #endif // authorization not needed

    #if AUTHORIZATION_NEEDED == 1
    AuthorizationWindow startWindow;
    #endif // authorization needed

    startWindow.show();
    return app.exec();
}
