/*
    *Copyright (c) 2019 <Rubick>

    * GUI authorization window headder file
*/


#ifndef AUTHORIZATIONWINDOW_H
#define AUTHORIZATIONWINDOW_H
#include <QWidget>


namespace Ui {
    class AuthorizationWindow;
}


class AuthorizationWindow : public QWidget {
    Q_OBJECT

public:
    explicit AuthorizationWindow(QWidget *parent = 0);
    ~AuthorizationWindow();

private slots:
    void on_showPassword_stateChanged(int arg1);

private:
    Ui::AuthorizationWindow *ui;
};

#endif // AUTHORIZATIONWINDOW_H
