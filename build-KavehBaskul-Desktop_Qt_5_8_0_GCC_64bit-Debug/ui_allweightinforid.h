/********************************************************************************
** Form generated from reading UI file 'allweightinforid.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLWEIGHTINFORID_H
#define UI_ALLWEIGHTINFORID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllWeightinForId
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *txtWeightinId;
    QPushButton *btnSearchId;
    QGroupBox *groupBox_2;
    QTableView *tableView;

    void setupUi(QWidget *AllWeightinForId)
    {
        if (AllWeightinForId->objectName().isEmpty())
            AllWeightinForId->setObjectName(QStringLiteral("AllWeightinForId"));
        AllWeightinForId->resize(640, 480);
        groupBox = new QGroupBox(AllWeightinForId);
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
        groupBox_2 = new QGroupBox(AllWeightinForId);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 621, 381));
        groupBox_2->setLayoutDirection(Qt::RightToLeft);
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 20, 601, 351));

        retranslateUi(AllWeightinForId);

        QMetaObject::connectSlotsByName(AllWeightinForId);
    } // setupUi

    void retranslateUi(QWidget *AllWeightinForId)
    {
        AllWeightinForId->setWindowTitle(QApplication::translate("AllWeightinForId", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AllWeightinForId", "\330\247\330\267\331\204\330\247\330\271\330\247\330\252 \330\252\331\210\330\262\333\214\331\206", Q_NULLPTR));
        label->setText(QApplication::translate("AllWeightinForId", "\330\264\331\205\330\247\330\261\331\207 \330\261\332\251\331\210\330\261\330\257", Q_NULLPTR));
        btnSearchId->setText(QApplication::translate("AllWeightinForId", "\330\254\330\263\330\252\330\254\331\210", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("AllWeightinForId", "\330\252\331\210\330\262\333\214\331\206 \331\207\330\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AllWeightinForId: public Ui_AllWeightinForId {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLWEIGHTINFORID_H
