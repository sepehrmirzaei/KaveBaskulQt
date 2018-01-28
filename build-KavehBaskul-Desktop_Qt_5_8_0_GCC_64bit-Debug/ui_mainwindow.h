/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAllWeightin;
    QAction *actionWithoutExit;
    QAction *actionWeightinByPlate;
    QAction *actionServerSettings;
    QAction *actionBaskulSettings;
    QAction *actionPrintSetting;
    QAction *actionWeightinById;
    QAction *actionPrintById;
    QAction *actionSyncWithServer;
    QAction *actionAllMembers;
    QAction *actionChangeMember;
    QAction *actionAddMember;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *lblDate;
    QLabel *label_3;
    QLabel *lblTime;
    QLabel *label_4;
    QLineEdit *txtPlateA;
    QComboBox *cbPlateA;
    QLineEdit *txtPlateB;
    QLabel *label_2;
    QLineEdit *txtPlateC;
    QLabel *label_5;
    QLineEdit *txtDriverName;
    QLabel *label_6;
    QLineEdit *txtLoad;
    QLabel *label_7;
    QLineEdit *txtCourier;
    QPushButton *btnSaveWeightIn;
    QPushButton *btnClearWeightin;
    QPushButton *btnPrint;
    QFrame *line;
    QFrame *line_2;
    QPushButton *btnSearch;
    QGroupBox *groupBox_2;
    QLCDNumber *lcdNumber;
    QGroupBox *groupBox_3;
    QRadioButton *radioBtnEnter;
    QRadioButton *radioBtnExit;
    QGroupBox *groupBox_4;
    QPushButton *btnAUthenticationSetting;
    QPushButton *btnBaskulSetting;
    QPushButton *btnPrintSetting;
    QLabel *lblAuthorization;
    QLabel *lblWeightin;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(682, 442);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        actionAllWeightin = new QAction(MainWindow);
        actionAllWeightin->setObjectName(QStringLiteral("actionAllWeightin"));
        actionAllWeightin->setPriority(QAction::NormalPriority);
        actionWithoutExit = new QAction(MainWindow);
        actionWithoutExit->setObjectName(QStringLiteral("actionWithoutExit"));
        actionWeightinByPlate = new QAction(MainWindow);
        actionWeightinByPlate->setObjectName(QStringLiteral("actionWeightinByPlate"));
        actionServerSettings = new QAction(MainWindow);
        actionServerSettings->setObjectName(QStringLiteral("actionServerSettings"));
        actionBaskulSettings = new QAction(MainWindow);
        actionBaskulSettings->setObjectName(QStringLiteral("actionBaskulSettings"));
        actionPrintSetting = new QAction(MainWindow);
        actionPrintSetting->setObjectName(QStringLiteral("actionPrintSetting"));
        actionWeightinById = new QAction(MainWindow);
        actionWeightinById->setObjectName(QStringLiteral("actionWeightinById"));
        actionPrintById = new QAction(MainWindow);
        actionPrintById->setObjectName(QStringLiteral("actionPrintById"));
        actionSyncWithServer = new QAction(MainWindow);
        actionSyncWithServer->setObjectName(QStringLiteral("actionSyncWithServer"));
        actionAllMembers = new QAction(MainWindow);
        actionAllMembers->setObjectName(QStringLiteral("actionAllMembers"));
        actionChangeMember = new QAction(MainWindow);
        actionChangeMember->setObjectName(QStringLiteral("actionChangeMember"));
        actionAddMember = new QAction(MainWindow);
        actionAddMember->setObjectName(QStringLiteral("actionAddMember"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 441, 361));
        groupBox->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, 40, 46, 13));
        lblDate = new QLabel(groupBox);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        lblDate->setGeometry(QRect(70, 40, 171, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 80, 46, 13));
        lblTime = new QLabel(groupBox);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setGeometry(QRect(140, 80, 101, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 160, 46, 13));
        txtPlateA = new QLineEdit(groupBox);
        txtPlateA->setObjectName(QStringLiteral("txtPlateA"));
        txtPlateA->setGeometry(QRect(70, 150, 41, 25));
        cbPlateA = new QComboBox(groupBox);
        cbPlateA->setObjectName(QStringLiteral("cbPlateA"));
        cbPlateA->setGeometry(QRect(120, 150, 41, 25));
        txtPlateB = new QLineEdit(groupBox);
        txtPlateB->setObjectName(QStringLiteral("txtPlateB"));
        txtPlateB->setGeometry(QRect(170, 150, 61, 25));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 150, 21, 25));
        txtPlateC = new QLineEdit(groupBox);
        txtPlateC->setObjectName(QStringLiteral("txtPlateC"));
        txtPlateC->setGeometry(QRect(270, 150, 41, 25));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 200, 46, 13));
        txtDriverName = new QLineEdit(groupBox);
        txtDriverName->setObjectName(QStringLiteral("txtDriverName"));
        txtDriverName->setGeometry(QRect(20, 190, 291, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(380, 240, 46, 13));
        txtLoad = new QLineEdit(groupBox);
        txtLoad->setObjectName(QStringLiteral("txtLoad"));
        txtLoad->setGeometry(QRect(20, 230, 291, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 280, 46, 13));
        txtCourier = new QLineEdit(groupBox);
        txtCourier->setObjectName(QStringLiteral("txtCourier"));
        txtCourier->setGeometry(QRect(20, 270, 291, 20));
        btnSaveWeightIn = new QPushButton(groupBox);
        btnSaveWeightIn->setObjectName(QStringLiteral("btnSaveWeightIn"));
        btnSaveWeightIn->setGeometry(QRect(180, 320, 75, 23));
        btnClearWeightin = new QPushButton(groupBox);
        btnClearWeightin->setObjectName(QStringLiteral("btnClearWeightin"));
        btnClearWeightin->setGeometry(QRect(100, 320, 75, 23));
        btnPrint = new QPushButton(groupBox);
        btnPrint->setObjectName(QStringLiteral("btnPrint"));
        btnPrint->setGeometry(QRect(20, 320, 75, 23));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 120, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 300, 411, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        btnSearch = new QPushButton(groupBox);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));
        btnSearch->setGeometry(QRect(20, 150, 41, 25));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(460, 0, 211, 181));
        groupBox_2->setLayoutDirection(Qt::RightToLeft);
        lcdNumber = new QLCDNumber(groupBox_2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 20, 171, 131));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(460, 180, 211, 71));
        groupBox_3->setLayoutDirection(Qt::RightToLeft);
        radioBtnEnter = new QRadioButton(groupBox_3);
        radioBtnEnter->setObjectName(QStringLiteral("radioBtnEnter"));
        radioBtnEnter->setGeometry(QRect(90, 30, 82, 17));
        radioBtnEnter->setChecked(true);
        radioBtnExit = new QRadioButton(groupBox_3);
        radioBtnExit->setObjectName(QStringLiteral("radioBtnExit"));
        radioBtnExit->setGeometry(QRect(30, 30, 82, 17));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(460, 250, 211, 111));
        groupBox_4->setLayoutDirection(Qt::RightToLeft);
        btnAUthenticationSetting = new QPushButton(groupBox_4);
        btnAUthenticationSetting->setObjectName(QStringLiteral("btnAUthenticationSetting"));
        btnAUthenticationSetting->setGeometry(QRect(30, 20, 151, 23));
        btnBaskulSetting = new QPushButton(groupBox_4);
        btnBaskulSetting->setObjectName(QStringLiteral("btnBaskulSetting"));
        btnBaskulSetting->setGeometry(QRect(30, 50, 151, 23));
        btnPrintSetting = new QPushButton(groupBox_4);
        btnPrintSetting->setObjectName(QStringLiteral("btnPrintSetting"));
        btnPrintSetting->setGeometry(QRect(30, 80, 151, 23));
        lblAuthorization = new QLabel(centralWidget);
        lblAuthorization->setObjectName(QStringLiteral("lblAuthorization"));
        lblAuthorization->setGeometry(QRect(465, 370, 201, 20));
        lblWeightin = new QLabel(centralWidget);
        lblWeightin->setObjectName(QStringLiteral("lblWeightin"));
        lblWeightin->setGeometry(QRect(20, 370, 431, 20));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 682, 19));
        menuBar->setLayoutDirection(Qt::RightToLeft);
        menuBar->setNativeMenuBar(false);
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionAllWeightin);
        menu->addAction(actionWeightinByPlate);
        menu->addAction(actionWeightinById);
        menu->addAction(actionPrintById);
        menu->addAction(actionSyncWithServer);
        menu_2->addAction(actionServerSettings);
        menu_2->addAction(actionBaskulSettings);
        menu_2->addAction(actionPrintSetting);
        menu_3->addAction(actionAllMembers);
        menu_3->addAction(actionChangeMember);
        menu_3->addAction(actionAddMember);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\330\263\330\247\331\205\330\247\331\206\331\207 \330\254\330\247\331\205\330\271 \330\252\331\210\330\262\333\214\331\206 \332\251\330\247\331\210\331\207", Q_NULLPTR));
        actionAllWeightin->setText(QApplication::translate("MainWindow", "\331\205\330\264\330\247\331\207\330\257\331\207 \330\252\331\210\330\262\333\214\331\206 \331\207\330\247", Q_NULLPTR));
        actionWithoutExit->setText(QApplication::translate("MainWindow", "\331\210\330\261\331\210\330\257 \331\207\330\247\333\214 \330\250\330\257\331\210\331\206 \330\256\330\261\331\210\330\254", Q_NULLPTR));
        actionWeightinByPlate->setText(QApplication::translate("MainWindow", "\330\252\331\210\330\262\333\214\331\206 \330\250\330\261\330\247\330\263\330\247\330\263 \331\276\331\204\330\247\332\251", Q_NULLPTR));
        actionServerSettings->setText(QApplication::translate("MainWindow", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \330\263\330\261\331\210\330\261", Q_NULLPTR));
        actionBaskulSettings->setText(QApplication::translate("MainWindow", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \330\250\330\247\330\263\332\251\331\210\331\204", Q_NULLPTR));
        actionPrintSetting->setText(QApplication::translate("MainWindow", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \332\206\330\247\331\276", Q_NULLPTR));
        actionWeightinById->setText(QApplication::translate("MainWindow", "\330\252\331\210\330\262\333\214\331\206 \330\250\330\261 \330\247\330\263\330\247\330\263 \330\264\331\205\330\247\330\261\331\207 \330\261\332\251\331\210\330\261\330\257", Q_NULLPTR));
        actionPrintById->setText(QApplication::translate("MainWindow", "\332\206\330\247\331\276 \331\205\330\254\330\257\330\257 \330\261\330\257\333\214\331\201", Q_NULLPTR));
        actionSyncWithServer->setText(QApplication::translate("MainWindow", "\331\207\331\205\332\257\330\247\331\205 \330\263\330\247\330\262\333\214 \330\250\330\247 \330\263\330\261\331\210\330\261", Q_NULLPTR));
        actionAllMembers->setText(QApplication::translate("MainWindow", "\331\205\330\264\330\247\331\207\330\257\331\207 \332\251\330\247\330\261\330\250\330\261\330\247\331\206", Q_NULLPTR));
        actionChangeMember->setText(QApplication::translate("MainWindow", "\330\252\330\272\333\214\333\214\330\261 \330\247\330\267\331\204\330\247\330\271\330\247\330\252 \332\251\330\247\330\261\330\250\330\261", Q_NULLPTR));
        actionAddMember->setText(QApplication::translate("MainWindow", "\330\247\333\214\330\254\330\247\330\257 \332\251\330\247\330\261\330\250\330\261 \330\254\330\257\333\214\330\257", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\331\205\330\264\330\256\330\265\330\247\330\252 \330\252\331\210\330\262\333\214\331\206", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\330\252\330\247\330\261\333\214\330\256", Q_NULLPTR));
        lblDate->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\330\262\331\205\330\247\331\206", Q_NULLPTR));
        lblTime->setText(QApplication::translate("MainWindow", "Time", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\331\276\331\204\330\247\332\251", Q_NULLPTR));
        cbPlateA->clear();
        cbPlateA->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\330\247\331\204\331\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\250", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\331\276", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\252", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\253", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\254", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\332\206", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\255", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\256", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\257", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\260", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\261", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\262", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\263", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\264", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\265", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\266", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\267", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\270", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\271", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\330\272", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\331\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\331\202", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\332\251", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\331\204", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\331\205", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\331\206", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\331\210", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\331\207", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\333\214", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "\330\247\333\214\330\261\330\247\331\206", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205 \330\261\330\247\331\206\331\206\330\257\331\207", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\331\205\330\255\331\205\331\210\331\204\331\207", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\330\250\330\247\330\261\330\250\330\261\333\214", Q_NULLPTR));
        btnSaveWeightIn->setText(QApplication::translate("MainWindow", "\330\253\330\250\330\252", Q_NULLPTR));
        btnClearWeightin->setText(QApplication::translate("MainWindow", "\331\276\330\247\332\251 \330\263\330\247\330\262\333\214", Q_NULLPTR));
        btnPrint->setText(QApplication::translate("MainWindow", "\331\276\330\261\333\214\331\206\330\252", Q_NULLPTR));
        btnSearch->setText(QApplication::translate("MainWindow", "\330\254\330\263\330\252\330\254\331\210", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\331\210\330\262\331\206", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\331\206\331\210\330\271 \330\252\330\261\330\257\330\257", Q_NULLPTR));
        radioBtnEnter->setText(QApplication::translate("MainWindow", "\331\210\330\261\331\210\330\257", Q_NULLPTR));
        radioBtnExit->setText(QApplication::translate("MainWindow", "\330\256\330\261\331\210\330\254", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\330\252\331\206\330\270\333\214\331\205\330\247\330\252", Q_NULLPTR));
        btnAUthenticationSetting->setText(QApplication::translate("MainWindow", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \330\263\330\261\331\210\330\261", Q_NULLPTR));
        btnBaskulSetting->setText(QApplication::translate("MainWindow", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \330\250\330\247\330\263\332\251\331\210\331\204", Q_NULLPTR));
        btnPrintSetting->setText(QApplication::translate("MainWindow", "\330\252\331\206\330\267\333\214\331\205\330\247\330\252 \332\206\330\247\331\276", Q_NULLPTR));
        lblAuthorization->setText(QString());
        lblWeightin->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\330\252\331\210\330\262\333\214\331\206 \331\207\330\247", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\330\252\331\206\330\270\333\214\331\205\330\247\330\252", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\330\252\331\206\330\270\333\214\331\205\330\247\330\252 \332\251\330\247\330\261\330\250\330\261\333\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
