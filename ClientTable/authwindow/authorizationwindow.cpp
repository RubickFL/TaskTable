/*
    *Copyright (c) 2019 <Rubick>

    * GUI authorization window realization file
*/


#include "authorizationwindow.h"
#include "ui_authorizationwindow.h"
#include <QDebug>


// CONSTRUCT AND DESTRUCT -------------------------------------------------------------
AuthorizationWindow::AuthorizationWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthorizationWindow)
{
    qDebug() << "Authorization widget activated";

    // setups
    ui->setupUi(this);
}



AuthorizationWindow::~AuthorizationWindow() {
    qDebug() << "Authorization widget closed";

    // deallocations
    delete ui;
}
// end if CONSTRUCT AND DESTRUCT _____________________________________



// SLOTS ------------------------------------------------------------------------------------------
void AuthorizationWindow::on_showPassword_stateChanged(int arg1) {
    ui->password->setEchoMode(arg1 == 2 ? QLineEdit::Normal : QLineEdit::Password);
}
// end if SLOTS _______________________________________________________
