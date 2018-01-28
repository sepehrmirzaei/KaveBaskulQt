/********************************************************************************
** Form generated from reading UI file 'loginmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINMENU_H
#define UI_LOGINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginMenu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *UserName;
    QLabel *label_2;
    QLineEdit *PassWord;
    QPushButton *SignIn;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginMenu)
    {
        if (LoginMenu->objectName().isEmpty())
            LoginMenu->setObjectName(QStringLiteral("LoginMenu"));
        LoginMenu->resize(641, 449);
        QPalette palette;
        QBrush brush(QColor(0, 0, 74, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(129, 86, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(252, 252, 252, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(74, 150, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush4(QColor(119, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        LoginMenu->setPalette(palette);
        QFont font;
        font.setPointSize(9);
        LoginMenu->setFont(font);
        LoginMenu->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(LoginMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 120, 81, 21));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        UserName = new QLineEdit(centralwidget);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(200, 150, 231, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 220, 81, 20));
        label_2->setFont(font1);
        PassWord = new QLineEdit(centralwidget);
        PassWord->setObjectName(QStringLiteral("PassWord"));
        PassWord->setGeometry(QRect(200, 250, 231, 51));
        SignIn = new QPushButton(centralwidget);
        SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->setGeometry(QRect(270, 330, 91, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush5(QColor(65, 131, 97, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        SignIn->setPalette(palette1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 20, 341, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Serif Condensed"));
        font2.setPointSize(35);
        font2.setItalic(true);
        label_3->setFont(font2);
        LoginMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginMenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 641, 19));
        LoginMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginMenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginMenu->setStatusBar(statusbar);

        retranslateUi(LoginMenu);

        QMetaObject::connectSlotsByName(LoginMenu);
    } // setupUi

    void retranslateUi(QMainWindow *LoginMenu)
    {
        LoginMenu->setWindowTitle(QApplication::translate("LoginMenu", "\330\263\330\247\331\205\330\247\331\206\331\207 \331\205\330\257\333\214\330\261\333\214\330\252 \330\250\330\247\330\263\332\251\331\210\331\204", Q_NULLPTR));
        label->setText(QApplication::translate("LoginMenu", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", Q_NULLPTR));
        UserName->setText(QString());
        label_2->setText(QApplication::translate("LoginMenu", "\332\251\331\204\331\205\331\207 \330\271\330\250\331\210\330\261:", Q_NULLPTR));
        SignIn->setText(QApplication::translate("LoginMenu", "\331\210\330\261\331\210\330\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginMenu", "\330\263\330\247\331\205\330\247\331\206\331\207 \331\205\330\257\333\214\330\261\333\214\330\252 \330\250\330\247\330\263\332\251\331\210\331\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginMenu: public Ui_LoginMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINMENU_H
