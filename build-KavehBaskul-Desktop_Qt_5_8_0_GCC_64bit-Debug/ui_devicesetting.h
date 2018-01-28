/********************************************************************************
** Form generated from reading UI file 'devicesetting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESETTING_H
#define UI_DEVICESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceSetting
{
public:
    QPushButton *btnCancel;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtName;
    QComboBox *cbType;
    QTextEdit *txtAddress;
    QLabel *label_4;
    QLineEdit *txtIP;
    QLineEdit *txtPort;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtPortname;
    QLineEdit *txtBaudrate;
    QPushButton *btnAccept;

    void setupUi(QWidget *DeviceSetting)
    {
        if (DeviceSetting->objectName().isEmpty())
            DeviceSetting->setObjectName(QStringLiteral("DeviceSetting"));
        DeviceSetting->resize(318, 376);
        btnCancel = new QPushButton(DeviceSetting);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(10, 340, 75, 23));
        groupBox = new QGroupBox(DeviceSetting);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 321));
        groupBox->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 40, 71, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 70, 71, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 100, 71, 20));
        txtName = new QLineEdit(groupBox);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(20, 40, 171, 20));
        cbType = new QComboBox(groupBox);
        cbType->setObjectName(QStringLiteral("cbType"));
        cbType->setGeometry(QRect(20, 70, 171, 22));
        txtAddress = new QTextEdit(groupBox);
        txtAddress->setObjectName(QStringLiteral("txtAddress"));
        txtAddress->setGeometry(QRect(20, 100, 171, 71));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 180, 71, 20));
        txtIP = new QLineEdit(groupBox);
        txtIP->setObjectName(QStringLiteral("txtIP"));
        txtIP->setGeometry(QRect(20, 180, 171, 20));
        txtPort = new QLineEdit(groupBox);
        txtPort->setObjectName(QStringLiteral("txtPort"));
        txtPort->setGeometry(QRect(20, 210, 171, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 210, 71, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 270, 81, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 240, 81, 20));
        txtPortname = new QLineEdit(groupBox);
        txtPortname->setObjectName(QStringLiteral("txtPortname"));
        txtPortname->setGeometry(QRect(20, 240, 171, 20));
        txtBaudrate = new QLineEdit(groupBox);
        txtBaudrate->setObjectName(QStringLiteral("txtBaudrate"));
        txtBaudrate->setGeometry(QRect(20, 270, 171, 20));
        btnAccept = new QPushButton(DeviceSetting);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));
        btnAccept->setGeometry(QRect(100, 340, 75, 23));

        retranslateUi(DeviceSetting);

        QMetaObject::connectSlotsByName(DeviceSetting);
    } // setupUi

    void retranslateUi(QWidget *DeviceSetting)
    {
        DeviceSetting->setWindowTitle(QApplication::translate("DeviceSetting", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \330\250\330\247\330\263\332\251\331\210\331\204", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("DeviceSetting", "\331\204\330\272\331\210", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DeviceSetting", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \330\250\330\247\330\263\332\251\331\210\331\204", Q_NULLPTR));
        label->setText(QApplication::translate("DeviceSetting", "\331\206\330\247\331\205 \330\250\330\247\330\263\332\251\331\210\331\204", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeviceSetting", "\331\205\330\257\331\204 \330\250\330\247\330\263\332\251\331\210\331\204", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeviceSetting", "\330\242\330\257\330\261\330\263", Q_NULLPTR));
        cbType->clear();
        cbType->insertItems(0, QStringList()
         << QApplication::translate("DeviceSetting", "TozinElectronic", Q_NULLPTR)
         << QApplication::translate("DeviceSetting", "BehinTozin", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("DeviceSetting", "\330\264\331\206\330\247\330\263\331\207 \330\264\330\250\332\251\331\207", Q_NULLPTR));
        label_5->setText(QApplication::translate("DeviceSetting", "\331\276\331\210\330\261\330\252", Q_NULLPTR));
        label_6->setText(QApplication::translate("DeviceSetting", "\331\206\330\261\330\256 \330\247\331\206\330\252\331\202\330\247\331\204 \330\263\330\261\333\214\330\247\331\204", Q_NULLPTR));
        label_7->setText(QApplication::translate("DeviceSetting", "\331\206\330\247\331\205 \331\276\331\210\330\261\330\252 \330\263\330\261\333\214\330\247\331\204", Q_NULLPTR));
        btnAccept->setText(QApplication::translate("DeviceSetting", "\330\253\330\250\330\252", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeviceSetting: public Ui_DeviceSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESETTING_H
