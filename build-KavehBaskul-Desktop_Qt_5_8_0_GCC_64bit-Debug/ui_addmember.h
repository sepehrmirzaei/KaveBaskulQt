/********************************************************************************
** Form generated from reading UI file 'addmember.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMember
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLineEdit *phone;
    QLineEdit *user;
    QLineEdit *pass;
    QPushButton *SubmitButton;

    void setupUi(QWidget *AddMember)
    {
        if (AddMember->objectName().isEmpty())
            AddMember->setObjectName(QStringLiteral("AddMember"));
        AddMember->resize(400, 300);
        QPalette palette;
        QBrush brush(QColor(0, 0, 116, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(185, 123, 92, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(252, 252, 252, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(205, 255, 157, 255));
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
        AddMember->setPalette(palette);
        label = new QLabel(AddMember);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 30, 101, 21));
        label_2 = new QLabel(AddMember);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(278, 70, 81, 20));
        label_3 = new QLabel(AddMember);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(288, 110, 71, 20));
        label_4 = new QLabel(AddMember);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(288, 150, 71, 20));
        name = new QLineEdit(AddMember);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(92, 30, 161, 22));
        phone = new QLineEdit(AddMember);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(92, 70, 161, 22));
        user = new QLineEdit(AddMember);
        user->setObjectName(QStringLiteral("user"));
        user->setGeometry(QRect(92, 110, 161, 22));
        pass = new QLineEdit(AddMember);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setGeometry(QRect(92, 150, 161, 22));
        SubmitButton = new QPushButton(AddMember);
        SubmitButton->setObjectName(QStringLiteral("SubmitButton"));
        SubmitButton->setGeometry(QRect(40, 230, 80, 31));

        retranslateUi(AddMember);

        QMetaObject::connectSlotsByName(AddMember);
    } // setupUi

    void retranslateUi(QWidget *AddMember)
    {
        AddMember->setWindowTitle(QApplication::translate("AddMember", "\330\247\333\214\330\254\330\247\330\257 \332\251\330\247\330\261\330\250\330\261 \330\254\330\257\333\214\330\257", Q_NULLPTR));
        label->setText(QApplication::translate("AddMember", "\331\206\330\247\331\205 \331\210 \331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddMember", "\330\264\331\205\330\247\330\261\331\207 \330\252\331\205\330\247\330\263:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddMember", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddMember", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261:", Q_NULLPTR));
        SubmitButton->setText(QApplication::translate("AddMember", "\330\247\333\214\330\254\330\247\330\257 \332\251\330\247\330\261\330\250\330\261", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddMember: public Ui_AddMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
