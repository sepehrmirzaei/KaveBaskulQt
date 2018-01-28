/********************************************************************************
** Form generated from reading UI file 'showallmembers.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLMEMBERS_H
#define UI_SHOWALLMEMBERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllMembers
{
public:
    QTableView *tableView;

    void setupUi(QWidget *ShowAllMembers)
    {
        if (ShowAllMembers->objectName().isEmpty())
            ShowAllMembers->setObjectName(QStringLiteral("ShowAllMembers"));
        ShowAllMembers->resize(664, 346);
        QPalette palette;
        QBrush brush(QColor(252, 252, 252, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(207, 255, 169, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        ShowAllMembers->setPalette(palette);
        tableView = new QTableView(ShowAllMembers);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 20, 601, 311));

        retranslateUi(ShowAllMembers);

        QMetaObject::connectSlotsByName(ShowAllMembers);
    } // setupUi

    void retranslateUi(QWidget *ShowAllMembers)
    {
        ShowAllMembers->setWindowTitle(QApplication::translate("ShowAllMembers", "\331\205\330\264\330\247\331\207\330\257\331\207 \332\251\330\247\330\261\330\250\330\261\330\247\331\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowAllMembers: public Ui_ShowAllMembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLMEMBERS_H
