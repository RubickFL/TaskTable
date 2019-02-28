/*
    *Copyright (c) 2019 <Rubick>

    *File with the realisation of main window GUI and methods.
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "core/core.h"
#include <QDebug>


// CONSTRUCTOR AND DESTRUCTOR ------------------------------------------------------------------------------------
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug() << "Main widget is activated";

    // setups
    ui->setupUi(this);
}


MainWindow::~MainWindow() {
    qDebug() << "Main widget closed";

    // deallocations
    delete ui;
}
// end of CONSTRUCTOR AND DESTRUCTOR___________________________________________________
