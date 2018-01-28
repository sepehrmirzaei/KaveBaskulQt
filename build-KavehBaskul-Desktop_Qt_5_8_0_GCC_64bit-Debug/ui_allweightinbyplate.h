/********************************************************************************
** Form generated from reading UI file 'allweightinbyplate.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLWEIGHTINBYPLATE_H
#define UI_ALLWEIGHTINBYPLATE_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllWeightinByPlate
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *btnSearchId;
    QLabel *label_2;
    QLineEdit *txtPlateC;
    QComboBox *cbPlateA;
    QLineEdit *txtPlateA;
    QLineEdit *txtPlateB;
    QGroupBox *groupBox_2;
    QTableView *tableView;

    void setupUi(QWidget *AllWeightinByPlate)
    {
        if (AllWeightinByPlate->objectName().isEmpty())
            AllWeightinByPlate->setObjectName(QStringLiteral("AllWeightinByPlate"));
        AllWeightinByPlate->resize(640, 480);
        groupBox = new QGroupBox(AllWeightinByPlate);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 621, 80));
        groupBox->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(510, 30, 101, 20));
        btnSearchId = new QPushButton(groupBox);
        btnSearchId->setObjectName(QStringLiteral("btnSearchId"));
        btnSearchId->setGeometry(QRect(40, 30, 171, 25));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 30, 21, 25));
        txtPlateC = new QLineEdit(groupBox);
        txtPlateC->setObjectName(QStringLiteral("txtPlateC"));
        txtPlateC->setGeometry(QRect(480, 30, 41, 25));
        cbPlateA = new QComboBox(groupBox);
        cbPlateA->setObjectName(QStringLiteral("cbPlateA"));
        cbPlateA->setGeometry(QRect(330, 30, 41, 25));
        txtPlateA = new QLineEdit(groupBox);
        txtPlateA->setObjectName(QStringLiteral("txtPlateA"));
        txtPlateA->setGeometry(QRect(280, 30, 41, 25));
        txtPlateB = new QLineEdit(groupBox);
        txtPlateB->setObjectName(QStringLiteral("txtPlateB"));
        txtPlateB->setGeometry(QRect(380, 30, 61, 25));
        groupBox_2 = new QGroupBox(AllWeightinByPlate);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 621, 381));
        groupBox_2->setLayoutDirection(Qt::RightToLeft);
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 20, 601, 351));

        retranslateUi(AllWeightinByPlate);

        QMetaObject::connectSlotsByName(AllWeightinByPlate);
    } // setupUi

    void retranslateUi(QWidget *AllWeightinByPlate)
    {
        AllWeightinByPlate->setWindowTitle(QApplication::translate("AllWeightinByPlate", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AllWeightinByPlate", "\330\247\330\267\331\204\330\247\330\271\330\247\330\252 \330\252\331\210\330\262\333\214\331\206", Q_NULLPTR));
        label->setText(QApplication::translate("AllWeightinByPlate", "\330\264\331\205\330\247\330\261\331\207 \331\276\331\204\330\247\332\251", Q_NULLPTR));
        btnSearchId->setText(QApplication::translate("AllWeightinByPlate", "\330\254\330\263\330\252\330\254\331\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("AllWeightinByPlate", "\330\247\333\214\330\261\330\247\331\206", Q_NULLPTR));
        cbPlateA->clear();
        cbPlateA->insertItems(0, QStringList()
         << QApplication::translate("AllWeightinByPlate", "\330\247\331\204\331\201", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\250", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\331\276", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\252", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\253", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\254", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\332\206", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\255", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\256", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\257", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\260", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\261", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\262", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\263", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\264", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\265", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\266", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\267", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\270", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\271", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\330\272", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\331\201", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\331\202", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\332\251", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\331\204", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\331\205", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\331\206", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\331\210", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\331\207", Q_NULLPTR)
         << QApplication::translate("AllWeightinByPlate", "\333\214", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("AllWeightinByPlate", "\330\252\331\210\330\262\333\214\331\206 \331\207\330\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AllWeightinByPlate: public Ui_AllWeightinByPlate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLWEIGHTINBYPLATE_H
