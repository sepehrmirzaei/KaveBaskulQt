/********************************************************************************
** Form generated from reading UI file 'allweightindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLWEIGHTINDIALOG_H
#define UI_ALLWEIGHTINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllWeightinDialog
{
public:
    QTableView *tableView;

    void setupUi(QWidget *AllWeightinDialog)
    {
        if (AllWeightinDialog->objectName().isEmpty())
            AllWeightinDialog->setObjectName(QStringLiteral("AllWeightinDialog"));
        AllWeightinDialog->resize(800, 480);
        tableView = new QTableView(AllWeightinDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 800, 481));
        tableView->setMouseTracking(true);
        tableView->setLayoutDirection(Qt::RightToLeft);
        tableView->setSortingEnabled(true);

        retranslateUi(AllWeightinDialog);

        QMetaObject::connectSlotsByName(AllWeightinDialog);
    } // setupUi

    void retranslateUi(QWidget *AllWeightinDialog)
    {
        AllWeightinDialog->setWindowTitle(QApplication::translate("AllWeightinDialog", "\331\205\330\264\330\247\331\207\330\257\331\207 \330\252\331\205\330\247\331\205 \330\252\331\210\330\262\333\214\331\206 \331\207\330\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AllWeightinDialog: public Ui_AllWeightinDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLWEIGHTINDIALOG_H
