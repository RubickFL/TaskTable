/*
    *Copyright (c) 2019 <Rubick>

    * GUI authorization window realization file
*/


#include "authorizationwindow.h"
#include "ui_authorizationwindow.h"
#include <QDebug>
#include "core/logging/logging.h"


// CONSTRUCT AND DESTRUCT -------------------------------------------------------------
AuthorizationWindow::AuthorizationWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthorizationWindow)
{
    logger::log("Authwindow created");


    // setups
    ui->setupUi(this);
}



AuthorizationWindow::~AuthorizationWindow() {
   logger::log("Authorization widget closed");


    // deallocations
    delete ui;
}
// end if CONSTRUCT AND DESTRUCT _____________________________________



// SLOTS ------------------------------------------------------------------------------------------
void AuthorizationWindow::on_showPassword_stateChanged(int arg1) {
    ui->password->setEchoMode(arg1 == 2 ? QLineEdit::Normal : QLineEdit::Password);
}
// end if SLOTS _______________________________________________________
