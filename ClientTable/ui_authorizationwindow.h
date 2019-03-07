/********************************************************************************
** Form generated from reading UI file 'authorizationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONWINDOW_H
#define UI_AUTHORIZATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthorizationWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *button_submit;
    QCheckBox *showPassword;
    QLabel *label_3;

    void setupUi(QWidget *AuthorizationWindow)
    {
        if (AuthorizationWindow->objectName().isEmpty())
            AuthorizationWindow->setObjectName(QStringLiteral("AuthorizationWindow"));
        AuthorizationWindow->resize(467, 258);
        AuthorizationWindow->setStyleSheet(QStringLiteral("background-color: rgb(156, 156, 156);"));
        verticalLayoutWidget = new QWidget(AuthorizationWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(78, 104, 319, 83));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: italic 12pt \"Verdana\";\n"
"color: rgb(212, 255, 243);"));

        horizontalLayout->addWidget(label);

        login = new QLineEdit(verticalLayoutWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setStyleSheet(QStringLiteral("color: rgb(211, 255, 229);"));
        login->setMaxLength(16);

        horizontalLayout->addWidget(login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: italic 12pt \"Verdana\";\n"
"color: rgb(212, 255, 243);"));

        horizontalLayout_2->addWidget(label_2);

        password = new QLineEdit(verticalLayoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setStyleSheet(QStringLiteral("color: rgb(211, 255, 229);"));
        password->setMaxLength(32);
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(password);


        verticalLayout->addLayout(horizontalLayout_2);

        button_submit = new QPushButton(AuthorizationWindow);
        button_submit->setObjectName(QStringLiteral("button_submit"));
        button_submit->setGeometry(QRect(98, 196, 145, 43));
        button_submit->setStyleSheet(QLatin1String("background-color: rgb(174, 255, 170);\n"
"font: 75 italic 14pt \"Verdana\";"));
        showPassword = new QCheckBox(AuthorizationWindow);
        showPassword->setObjectName(QStringLiteral("showPassword"));
        showPassword->setGeometry(QRect(266, 218, 131, 17));
        label_3 = new QLabel(AuthorizationWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(62, 14, 351, 51));
        label_3->setStyleSheet(QLatin1String("color: rgb(199, 255, 196);\n"
"font: 75 italic 16pt \"Verdana\";\n"
"text-decoration: underline;"));

        retranslateUi(AuthorizationWindow);

        QMetaObject::connectSlotsByName(AuthorizationWindow);
    } // setupUi

    void retranslateUi(QWidget *AuthorizationWindow)
    {
        AuthorizationWindow->setWindowTitle(QApplication::translate("AuthorizationWindow", "Sign in client table", 0));
        label->setText(QApplication::translate("AuthorizationWindow", "Login:", 0));
        login->setPlaceholderText(QApplication::translate("AuthorizationWindow", "Enter your login here", 0));
        label_2->setText(QApplication::translate("AuthorizationWindow", "Password:", 0));
        password->setPlaceholderText(QApplication::translate("AuthorizationWindow", "Enter your password here", 0));
        button_submit->setText(QApplication::translate("AuthorizationWindow", "Submit", 0));
        showPassword->setText(QApplication::translate("AuthorizationWindow", "show password", 0));
        label_3->setText(QApplication::translate("AuthorizationWindow", "Please, sign in to use Task Table", 0));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationWindow: public Ui_AuthorizationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONWINDOW_H
