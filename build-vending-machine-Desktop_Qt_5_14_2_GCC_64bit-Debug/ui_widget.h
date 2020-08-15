/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pbCoffee;
    QPushButton *pbTea;
    QPushButton *pbMilk;
    QPushButton *pbReset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(140, 50, 201, 91));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName(QString::fromUtf8("pb10"));
        pb10->setGeometry(QRect(130, 160, 89, 51));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setGeometry(QRect(130, 220, 89, 51));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setGeometry(QRect(130, 280, 89, 51));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName(QString::fromUtf8("pb500"));
        pb500->setGeometry(QRect(130, 340, 89, 51));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName(QString::fromUtf8("pbCoffee"));
        pbCoffee->setGeometry(QRect(260, 160, 89, 51));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName(QString::fromUtf8("pbTea"));
        pbTea->setGeometry(QRect(260, 220, 89, 51));
        pbMilk = new QPushButton(Widget);
        pbMilk->setObjectName(QString::fromUtf8("pbMilk"));
        pbMilk->setGeometry(QRect(260, 280, 89, 51));
        pbReset = new QPushButton(Widget);
        pbReset->setObjectName(QString::fromUtf8("pbReset"));
        pbReset->setGeometry(QRect(260, 340, 89, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        pbTea->setText(QCoreApplication::translate("Widget", "Tea(150)", nullptr));
        pbMilk->setText(QCoreApplication::translate("Widget", "Milk(200)", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
