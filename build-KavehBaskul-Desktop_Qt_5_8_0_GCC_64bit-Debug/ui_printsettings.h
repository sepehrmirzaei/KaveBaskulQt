/********************************************************************************
** Form generated from reading UI file 'printsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTSETTINGS_H
#define UI_PRINTSETTINGS_H

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

class Ui_PrintSettings
{
public:
    QPushButton *btnCancel;
    QPushButton *btnAccept;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtWeigtFullX;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *txtWeigtFullY;
    QLineEdit *txtWeigtEmptyY;
    QLineEdit *txtWeigtEmptyX;
    QLineEdit *txtWeigtPureY;
    QLineEdit *txtWeigtPureX;
    QLineEdit *txtDriverY;
    QLineEdit *txtDriverX;
    QLineEdit *txtDateY;
    QLineEdit *txtDateX;
    QLineEdit *txtTimeY;
    QLineEdit *txtTimeX;
    QLineEdit *txtLoadY;
    QLineEdit *txtLoadX;
    QLineEdit *txtCarrierY;
    QLineEdit *txtCarrierX;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *txtTimeY_2;
    QLineEdit *txtTimeX_2;
    QLineEdit *txtDateX_2;
    QLineEdit *txtDateY_2;
    QLabel *label_12;
    QLineEdit *txtPlateY;
    QLineEdit *txtPlateX;
    QLabel *label_13;

    void setupUi(QWidget *PrintSettings)
    {
        if (PrintSettings->objectName().isEmpty())
            PrintSettings->setObjectName(QStringLiteral("PrintSettings"));
        PrintSettings->resize(465, 449);
        btnCancel = new QPushButton(PrintSettings);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(20, 410, 75, 23));
        btnAccept = new QPushButton(PrintSettings);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));
        btnAccept->setGeometry(QRect(110, 410, 75, 23));
        groupBox = new QGroupBox(PrintSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 431, 391));
        groupBox->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 60, 71, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 90, 71, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 120, 71, 20));
        txtWeigtFullX = new QLineEdit(groupBox);
        txtWeigtFullX->setObjectName(QStringLiteral("txtWeigtFullX"));
        txtWeigtFullX->setGeometry(QRect(40, 60, 131, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 150, 71, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 180, 71, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 210, 71, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(330, 300, 71, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(330, 330, 71, 20));
        txtWeigtFullY = new QLineEdit(groupBox);
        txtWeigtFullY->setObjectName(QStringLiteral("txtWeigtFullY"));
        txtWeigtFullY->setGeometry(QRect(190, 60, 131, 20));
        txtWeigtEmptyY = new QLineEdit(groupBox);
        txtWeigtEmptyY->setObjectName(QStringLiteral("txtWeigtEmptyY"));
        txtWeigtEmptyY->setGeometry(QRect(190, 90, 131, 20));
        txtWeigtEmptyX = new QLineEdit(groupBox);
        txtWeigtEmptyX->setObjectName(QStringLiteral("txtWeigtEmptyX"));
        txtWeigtEmptyX->setGeometry(QRect(40, 90, 131, 20));
        txtWeigtPureY = new QLineEdit(groupBox);
        txtWeigtPureY->setObjectName(QStringLiteral("txtWeigtPureY"));
        txtWeigtPureY->setGeometry(QRect(190, 120, 131, 20));
        txtWeigtPureX = new QLineEdit(groupBox);
        txtWeigtPureX->setObjectName(QStringLiteral("txtWeigtPureX"));
        txtWeigtPureX->setGeometry(QRect(40, 120, 131, 20));
        txtDriverY = new QLineEdit(groupBox);
        txtDriverY->setObjectName(QStringLiteral("txtDriverY"));
        txtDriverY->setGeometry(QRect(190, 150, 131, 20));
        txtDriverX = new QLineEdit(groupBox);
        txtDriverX->setObjectName(QStringLiteral("txtDriverX"));
        txtDriverX->setGeometry(QRect(40, 150, 131, 20));
        txtDateY = new QLineEdit(groupBox);
        txtDateY->setObjectName(QStringLiteral("txtDateY"));
        txtDateY->setGeometry(QRect(190, 180, 131, 20));
        txtDateX = new QLineEdit(groupBox);
        txtDateX->setObjectName(QStringLiteral("txtDateX"));
        txtDateX->setGeometry(QRect(40, 180, 131, 20));
        txtTimeY = new QLineEdit(groupBox);
        txtTimeY->setObjectName(QStringLiteral("txtTimeY"));
        txtTimeY->setGeometry(QRect(190, 210, 131, 20));
        txtTimeX = new QLineEdit(groupBox);
        txtTimeX->setObjectName(QStringLiteral("txtTimeX"));
        txtTimeX->setGeometry(QRect(40, 210, 131, 20));
        txtLoadY = new QLineEdit(groupBox);
        txtLoadY->setObjectName(QStringLiteral("txtLoadY"));
        txtLoadY->setGeometry(QRect(190, 300, 131, 20));
        txtLoadX = new QLineEdit(groupBox);
        txtLoadX->setObjectName(QStringLiteral("txtLoadX"));
        txtLoadX->setGeometry(QRect(40, 300, 131, 20));
        txtCarrierY = new QLineEdit(groupBox);
        txtCarrierY->setObjectName(QStringLiteral("txtCarrierY"));
        txtCarrierY->setGeometry(QRect(190, 330, 131, 20));
        txtCarrierX = new QLineEdit(groupBox);
        txtCarrierX->setObjectName(QStringLiteral("txtCarrierX"));
        txtCarrierX->setGeometry(QRect(40, 330, 131, 20));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 20, 101, 20));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 20, 101, 20));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(330, 240, 71, 20));
        txtTimeY_2 = new QLineEdit(groupBox);
        txtTimeY_2->setObjectName(QStringLiteral("txtTimeY_2"));
        txtTimeY_2->setGeometry(QRect(190, 270, 131, 20));
        txtTimeX_2 = new QLineEdit(groupBox);
        txtTimeX_2->setObjectName(QStringLiteral("txtTimeX_2"));
        txtTimeX_2->setGeometry(QRect(40, 270, 131, 20));
        txtDateX_2 = new QLineEdit(groupBox);
        txtDateX_2->setObjectName(QStringLiteral("txtDateX_2"));
        txtDateX_2->setGeometry(QRect(40, 240, 131, 20));
        txtDateY_2 = new QLineEdit(groupBox);
        txtDateY_2->setObjectName(QStringLiteral("txtDateY_2"));
        txtDateY_2->setGeometry(QRect(190, 240, 131, 20));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(330, 270, 71, 20));
        txtPlateY = new QLineEdit(groupBox);
        txtPlateY->setObjectName(QStringLiteral("txtPlateY"));
        txtPlateY->setGeometry(QRect(190, 360, 131, 20));
        txtPlateX = new QLineEdit(groupBox);
        txtPlateX->setObjectName(QStringLiteral("txtPlateX"));
        txtPlateX->setGeometry(QRect(40, 360, 131, 20));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(330, 360, 71, 20));

        retranslateUi(PrintSettings);

        QMetaObject::connectSlotsByName(PrintSettings);
    } // setupUi

    void retranslateUi(QWidget *PrintSettings)
    {
        PrintSettings->setWindowTitle(QApplication::translate("PrintSettings", "Form", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("PrintSettings", "\331\204\330\272\331\210", Q_NULLPTR));
        btnAccept->setText(QApplication::translate("PrintSettings", "\330\253\330\250\330\252", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PrintSettings", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \332\206\330\247\331\276", Q_NULLPTR));
        label->setText(QApplication::translate("PrintSettings", "\331\210\330\262\331\206 \331\276\330\261", Q_NULLPTR));
        label_2->setText(QApplication::translate("PrintSettings", "\331\210\330\262\331\206 \330\256\330\247\331\204\333\214", Q_NULLPTR));
        label_3->setText(QApplication::translate("PrintSettings", "\331\210\330\262\331\206 \330\256\330\247\331\204\330\265", Q_NULLPTR));
        label_4->setText(QApplication::translate("PrintSettings", "\330\261\330\247\331\206\331\206\330\257\331\207", Q_NULLPTR));
        label_5->setText(QApplication::translate("PrintSettings", "\330\252\330\247\330\261\333\214\330\256", Q_NULLPTR));
        label_6->setText(QApplication::translate("PrintSettings", "\330\262\331\205\330\247\331\206", Q_NULLPTR));
        label_7->setText(QApplication::translate("PrintSettings", "\330\250\330\247\330\261/\331\205\330\255\330\265\331\210\331\204", Q_NULLPTR));
        label_8->setText(QApplication::translate("PrintSettings", "\330\250\330\247\330\261\330\250\330\261\333\214", Q_NULLPTR));
        label_9->setText(QApplication::translate("PrintSettings", "X: \331\205\330\255\331\204 \330\264\330\261\331\210\330\271 \330\247\331\201\331\202\333\214", Q_NULLPTR));
        label_10->setText(QApplication::translate("PrintSettings", "Y:\331\205\330\255\331\204 \330\264\330\261\331\210\330\271 \330\271\331\205\331\210\330\257\333\214", Q_NULLPTR));
        label_11->setText(QApplication::translate("PrintSettings", "\330\252\330\247\330\261\333\214\330\256", Q_NULLPTR));
        label_12->setText(QApplication::translate("PrintSettings", "\330\262\331\205\330\247\331\206", Q_NULLPTR));
        label_13->setText(QApplication::translate("PrintSettings", "\331\276\331\204\330\247\332\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrintSettings: public Ui_PrintSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTSETTINGS_H
