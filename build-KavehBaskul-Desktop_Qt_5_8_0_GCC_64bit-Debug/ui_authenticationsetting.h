/********************************************************************************
** Form generated from reading UI file 'authenticationsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATIONSETTING_H
#define UI_AUTHENTICATIONSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthenticationSetting
{
public:
    QGroupBox *groupBox;
    QLineEdit *txtPassword;
    QLineEdit *txtUsername;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *txtBaseUrl;
    QPushButton *btnAccept;
    QPushButton *btnCancel;

    void setupUi(QWidget *AuthenticationSetting)
    {
        if (AuthenticationSetting->objectName().isEmpty())
            AuthenticationSetting->setObjectName(QStringLiteral("AuthenticationSetting"));
        AuthenticationSetting->resize(320, 206);
        groupBox = new QGroupBox(AuthenticationSetting);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 151));
        groupBox->setLayoutDirection(Qt::RightToLeft);
        txtPassword = new QLineEdit(groupBox);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setGeometry(QRect(20, 70, 171, 20));
        txtUsername = new QLineEdit(groupBox);
        txtUsername->setObjectName(QStringLiteral("txtUsername"));
        txtUsername->setGeometry(QRect(20, 30, 171, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 30, 71, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 70, 71, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 110, 71, 20));
        txtBaseUrl = new QLineEdit(groupBox);
        txtBaseUrl->setObjectName(QStringLiteral("txtBaseUrl"));
        txtBaseUrl->setGeometry(QRect(20, 110, 171, 20));
        btnAccept = new QPushButton(AuthenticationSetting);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));
        btnAccept->setGeometry(QRect(100, 170, 75, 23));
        btnCancel = new QPushButton(AuthenticationSetting);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(10, 170, 75, 23));

        retranslateUi(AuthenticationSetting);

        QMetaObject::connectSlotsByName(AuthenticationSetting);
    } // setupUi

    void retranslateUi(QWidget *AuthenticationSetting)
    {
        AuthenticationSetting->setWindowTitle(QApplication::translate("AuthenticationSetting", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \330\247\330\255\330\261\330\247\330\262 \331\207\331\210\333\214\330\252", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AuthenticationSetting", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \330\247\330\255\330\261\330\247\330\262 \331\207\331\210\333\214\330\252", Q_NULLPTR));
        label->setText(QApplication::translate("AuthenticationSetting", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("AuthenticationSetting", "\332\251\331\204\331\205\331\207 \330\271\330\250\331\210\330\261", Q_NULLPTR));
        label_5->setText(QApplication::translate("AuthenticationSetting", "\330\242\330\257\330\261\330\263 \331\276\330\247\333\214\331\207 \330\263\330\261\331\210\330\261", Q_NULLPTR));
        btnAccept->setText(QApplication::translate("AuthenticationSetting", "\330\253\330\250\330\252", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("AuthenticationSetting", "\331\204\330\272\331\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AuthenticationSetting: public Ui_AuthenticationSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATIONSETTING_H
