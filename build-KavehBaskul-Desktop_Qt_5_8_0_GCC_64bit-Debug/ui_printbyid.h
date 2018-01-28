/********************************************************************************
** Form generated from reading UI file 'printbyid.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTBYID_H
#define UI_PRINTBYID_H

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

class Ui_PrintById
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *txtWeightinId;
    QPushButton *btnSearchId;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLineEdit *txtDriverName;
    QLabel *label_7;
    QLabel *label_5;
    QLineEdit *txtLoad;
    QLineEdit *txtCourier;
    QLabel *label_4;
    QLabel *lblPlate;
    QLineEdit *txtPlate;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *txtWeightinFull;
    QLineEdit *txtWeightinFullTIme;
    QLineEdit *txtWeightinFullDate;
    QPushButton *btnPrint;
    QGroupBox *groupBox_4;
    QLineEdit *txtWeightinEmptyTime;
    QLineEdit *txtWeightinEmptyDate;
    QLineEdit *txtWeightinEmptyWeight;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QWidget *PrintById)
    {
        if (PrintById->objectName().isEmpty())
            PrintById->setObjectName(QStringLiteral("PrintById"));
        PrintById->resize(640, 462);
        groupBox = new QGroupBox(PrintById);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 621, 80));
        groupBox->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(510, 30, 101, 20));
        txtWeightinId = new QLineEdit(groupBox);
        txtWeightinId->setObjectName(QStringLiteral("txtWeightinId"));
        txtWeightinId->setGeometry(QRect(280, 30, 251, 20));
        btnSearchId = new QPushButton(groupBox);
        btnSearchId->setObjectName(QStringLiteral("btnSearchId"));
        btnSearchId->setGeometry(QRect(40, 30, 171, 23));
        groupBox_2 = new QGroupBox(PrintById);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 621, 181));
        groupBox_2->setLayoutDirection(Qt::RightToLeft);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(470, 110, 46, 13));
        txtDriverName = new QLineEdit(groupBox_2);
        txtDriverName->setObjectName(QStringLiteral("txtDriverName"));
        txtDriverName->setEnabled(false);
        txtDriverName->setGeometry(QRect(110, 60, 291, 25));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(470, 150, 46, 13));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 70, 46, 13));
        txtLoad = new QLineEdit(groupBox_2);
        txtLoad->setObjectName(QStringLiteral("txtLoad"));
        txtLoad->setEnabled(false);
        txtLoad->setGeometry(QRect(110, 100, 291, 25));
        txtCourier = new QLineEdit(groupBox_2);
        txtCourier->setObjectName(QStringLiteral("txtCourier"));
        txtCourier->setEnabled(false);
        txtCourier->setGeometry(QRect(110, 140, 291, 25));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 20, 46, 13));
        lblPlate = new QLabel(groupBox_2);
        lblPlate->setObjectName(QStringLiteral("lblPlate"));
        lblPlate->setGeometry(QRect(110, 20, 291, 16));
        txtPlate = new QLineEdit(groupBox_2);
        txtPlate->setObjectName(QStringLiteral("txtPlate"));
        txtPlate->setEnabled(false);
        txtPlate->setGeometry(QRect(110, 20, 291, 25));
        groupBox_3 = new QGroupBox(PrintById);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 280, 301, 131));
        groupBox_3->setLayoutDirection(Qt::RightToLeft);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 30, 46, 13));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 60, 46, 13));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 90, 46, 13));
        txtWeightinFull = new QLineEdit(groupBox_3);
        txtWeightinFull->setObjectName(QStringLiteral("txtWeightinFull"));
        txtWeightinFull->setEnabled(false);
        txtWeightinFull->setGeometry(QRect(20, 20, 151, 25));
        txtWeightinFullTIme = new QLineEdit(groupBox_3);
        txtWeightinFullTIme->setObjectName(QStringLiteral("txtWeightinFullTIme"));
        txtWeightinFullTIme->setEnabled(false);
        txtWeightinFullTIme->setGeometry(QRect(20, 50, 151, 25));
        txtWeightinFullDate = new QLineEdit(groupBox_3);
        txtWeightinFullDate->setObjectName(QStringLiteral("txtWeightinFullDate"));
        txtWeightinFullDate->setEnabled(false);
        txtWeightinFullDate->setGeometry(QRect(20, 80, 151, 25));
        btnPrint = new QPushButton(PrintById);
        btnPrint->setObjectName(QStringLiteral("btnPrint"));
        btnPrint->setGeometry(QRect(10, 420, 121, 23));
        groupBox_4 = new QGroupBox(PrintById);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 280, 301, 131));
        groupBox_4->setLayoutDirection(Qt::RightToLeft);
        txtWeightinEmptyTime = new QLineEdit(groupBox_4);
        txtWeightinEmptyTime->setObjectName(QStringLiteral("txtWeightinEmptyTime"));
        txtWeightinEmptyTime->setEnabled(false);
        txtWeightinEmptyTime->setGeometry(QRect(20, 50, 151, 25));
        txtWeightinEmptyDate = new QLineEdit(groupBox_4);
        txtWeightinEmptyDate->setObjectName(QStringLiteral("txtWeightinEmptyDate"));
        txtWeightinEmptyDate->setEnabled(false);
        txtWeightinEmptyDate->setGeometry(QRect(20, 80, 151, 25));
        txtWeightinEmptyWeight = new QLineEdit(groupBox_4);
        txtWeightinEmptyWeight->setObjectName(QStringLiteral("txtWeightinEmptyWeight"));
        txtWeightinEmptyWeight->setEnabled(false);
        txtWeightinEmptyWeight->setGeometry(QRect(20, 20, 151, 25));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(230, 90, 46, 13));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(230, 60, 46, 13));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(230, 30, 46, 13));

        retranslateUi(PrintById);

        QMetaObject::connectSlotsByName(PrintById);
    } // setupUi

    void retranslateUi(QWidget *PrintById)
    {
        PrintById->setWindowTitle(QApplication::translate("PrintById", "\332\206\330\247\331\276 \330\250\330\261\330\247\330\263\330\247\330\263 \330\261\330\257\333\214\331\201", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PrintById", "\330\247\330\267\331\204\330\247\330\271\330\247\330\252 \330\252\331\210\330\262\333\214\331\206", Q_NULLPTR));
        label->setText(QApplication::translate("PrintById", "\330\264\331\205\330\247\330\261\331\207 \330\261\332\251\331\210\330\261\330\257", Q_NULLPTR));
        btnSearchId->setText(QApplication::translate("PrintById", "\330\254\330\263\330\252\330\254\331\210", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("PrintById", "\330\247\330\267\331\204\330\247\330\271\330\247\330\252 \330\252\331\210\330\262\333\214\331\206", Q_NULLPTR));
        label_6->setText(QApplication::translate("PrintById", "\331\205\330\255\331\205\331\210\331\204\331\207", Q_NULLPTR));
        label_7->setText(QApplication::translate("PrintById", "\330\250\330\247\330\261\330\250\330\261\333\214", Q_NULLPTR));
        label_5->setText(QApplication::translate("PrintById", "\331\206\330\247\331\205 \330\261\330\247\331\206\331\206\330\257\331\207", Q_NULLPTR));
        label_4->setText(QApplication::translate("PrintById", "\331\276\331\204\330\247\332\251", Q_NULLPTR));
        lblPlate->setText(QString());
        groupBox_3->setTitle(QApplication::translate("PrintById", "\331\276\330\261", Q_NULLPTR));
        label_2->setText(QApplication::translate("PrintById", "\331\210\330\262\331\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("PrintById", "\330\263\330\247\330\271\330\252", Q_NULLPTR));
        label_8->setText(QApplication::translate("PrintById", "\330\252\330\247\330\261\333\214\330\256", Q_NULLPTR));
        btnPrint->setText(QApplication::translate("PrintById", "\332\206\330\247\331\276", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("PrintById", "\330\256\330\247\331\204\333\214", Q_NULLPTR));
        label_9->setText(QApplication::translate("PrintById", "\330\252\330\247\330\261\333\214\330\256", Q_NULLPTR));
        label_10->setText(QApplication::translate("PrintById", "\330\263\330\247\330\271\330\252", Q_NULLPTR));
        label_11->setText(QApplication::translate("PrintById", "\331\210\330\262\331\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrintById: public Ui_PrintById {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTBYID_H
