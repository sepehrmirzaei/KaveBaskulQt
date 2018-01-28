/********************************************************************************
** Form generated from reading UI file 'changemember.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEMEMBER_H
#define UI_CHANGEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeMember
{
public:
    QLabel *label;
    QLineEdit *Name1;
    QLabel *label_2;
    QLineEdit *CallNumber1;
    QPushButton *SearchButton;
    QPushButton *CleanButton1;
    QFrame *line;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *Name2;
    QLineEdit *CallNumber2;
    QLineEdit *UserName;
    QLineEdit *Password;
    QLabel *label_7;
    QLineEdit *Activation;
    QPushButton *SubmitButton;
    QPushButton *CleanButton2;
    QPushButton *deActiveButton;

    void setupUi(QWidget *ChangeMember)
    {
        if (ChangeMember->objectName().isEmpty())
            ChangeMember->setObjectName(QStringLiteral("ChangeMember"));
        ChangeMember->resize(515, 470);
        QPalette palette;
        QBrush brush(QColor(0, 0, 120, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(216, 142, 107, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(252, 252, 252, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(190, 255, 160, 255));
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
        ChangeMember->setPalette(palette);
        label = new QLabel(ChangeMember);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 20, 121, 21));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        Name1 = new QLineEdit(ChangeMember);
        Name1->setObjectName(QStringLiteral("Name1"));
        Name1->setGeometry(QRect(240, 50, 221, 31));
        label_2 = new QLabel(ChangeMember);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(378, 100, 81, 20));
        label_2->setFont(font);
        CallNumber1 = new QLineEdit(ChangeMember);
        CallNumber1->setObjectName(QStringLiteral("CallNumber1"));
        CallNumber1->setGeometry(QRect(242, 120, 221, 31));
        SearchButton = new QPushButton(ChangeMember);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setGeometry(QRect(20, 170, 71, 21));
        CleanButton1 = new QPushButton(ChangeMember);
        CleanButton1->setObjectName(QStringLiteral("CleanButton1"));
        CleanButton1->setGeometry(QRect(110, 170, 71, 21));
        line = new QFrame(ChangeMember);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(7, 200, 481, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(ChangeMember);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 210, 421, 201));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 30, 101, 20));
        QFont font1;
        font1.setPointSize(9);
        label_5->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 60, 81, 20));
        label_4->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 90, 71, 20));
        label_3->setFont(font);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(340, 120, 71, 20));
        label_6->setFont(font);
        Name2 = new QLineEdit(groupBox);
        Name2->setObjectName(QStringLiteral("Name2"));
        Name2->setGeometry(QRect(20, 30, 291, 21));
        CallNumber2 = new QLineEdit(groupBox);
        CallNumber2->setObjectName(QStringLiteral("CallNumber2"));
        CallNumber2->setGeometry(QRect(20, 60, 291, 22));
        UserName = new QLineEdit(groupBox);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(20, 90, 291, 22));
        Password = new QLineEdit(groupBox);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(20, 120, 291, 22));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(350, 150, 59, 21));
        QFont font2;
        font2.setPointSize(11);
        label_7->setFont(font2);
        Activation = new QLineEdit(groupBox);
        Activation->setObjectName(QStringLiteral("Activation"));
        Activation->setGeometry(QRect(20, 150, 291, 22));
        SubmitButton = new QPushButton(ChangeMember);
        SubmitButton->setObjectName(QStringLiteral("SubmitButton"));
        SubmitButton->setGeometry(QRect(20, 420, 71, 22));
        CleanButton2 = new QPushButton(ChangeMember);
        CleanButton2->setObjectName(QStringLiteral("CleanButton2"));
        CleanButton2->setGeometry(QRect(210, 420, 71, 22));
        deActiveButton = new QPushButton(ChangeMember);
        deActiveButton->setObjectName(QStringLiteral("deActiveButton"));
        deActiveButton->setGeometry(QRect(100, 420, 101, 22));
        QFont font3;
        font3.setPointSize(8);
        deActiveButton->setFont(font3);

        retranslateUi(ChangeMember);

        QMetaObject::connectSlotsByName(ChangeMember);
    } // setupUi

    void retranslateUi(QWidget *ChangeMember)
    {
        ChangeMember->setWindowTitle(QApplication::translate("ChangeMember", "\330\252\330\272\333\214\333\214\330\261 \330\247\330\267\331\204\330\247\330\271\330\247\330\252 \332\251\330\247\330\261\330\250\330\261", Q_NULLPTR));
        label->setText(QApplication::translate("ChangeMember", "\331\206\330\247\331\205 \331\210 \331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", Q_NULLPTR));
        Name1->setText(QString());
        label_2->setText(QApplication::translate("ChangeMember", "\330\264\331\205\330\247\330\261\331\207 \330\252\331\205\330\247\330\263:", Q_NULLPTR));
        SearchButton->setText(QApplication::translate("ChangeMember", "\330\254\330\263\330\252\330\254\331\210", Q_NULLPTR));
        CleanButton1->setText(QApplication::translate("ChangeMember", "\331\276\330\247\332\251 \332\251\330\261\330\257\331\206", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_5->setText(QApplication::translate("ChangeMember", "\331\206\330\247\331\205 \331\210 \331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChangeMember", "\330\264\331\205\330\247\330\261\331\207 \330\252\331\205\330\247\330\263:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangeMember", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ChangeMember", "\332\251\331\204\331\205\331\207 \330\271\330\250\331\210\330\261:", Q_NULLPTR));
        label_7->setText(QApplication::translate("ChangeMember", "\331\210\330\266\330\271\333\214\330\252:", Q_NULLPTR));
        SubmitButton->setText(QApplication::translate("ChangeMember", "\330\253\330\250\330\252", Q_NULLPTR));
        CleanButton2->setText(QApplication::translate("ChangeMember", "\331\276\330\247\332\251 \332\251\330\261\330\257\331\206", Q_NULLPTR));
        deActiveButton->setText(QApplication::translate("ChangeMember", "\330\272\333\214\330\261 \331\201\330\271\330\247\331\204/\331\201\330\271\330\247\331\204  \332\251\330\261\330\257\331\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeMember: public Ui_ChangeMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEMEMBER_H
