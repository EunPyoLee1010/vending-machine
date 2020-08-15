#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QString>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pbCoffee->setEnabled(false);
    ui->pbTea->setEnabled(false);
    ui->pbMilk->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::ButtonCheck()
{
    if(money >= 100)
        ui->pbCoffee->setEnabled(true);
    else
        ui->pbCoffee->setEnabled(false);

    if(money >= 150)
        ui->pbTea->setEnabled(true);
    else
        ui->pbTea->setEnabled(false);

    if(money >= 200)
        ui->pbMilk->setEnabled(true);
    else
        ui->pbMilk->setEnabled(false);
}

void Widget::ChangeMoney(int diff)
{
    if(diff == 0)
    {
        int count500 = int(money / 500);
        money %= 500;
        int count100 = int(money / 100);
        money %= 100;
        int count50 = int(money / 50);
        money %= 50;
        int count10 = int(money / 10);
        money %= 10;
        QString notice = QString("500: ") + QString::number(count500) + QString('\n')+
                QString("100: ") + QString::number(count100) + QString('\n')+
                QString("50: ") + QString::number(count50) + QString('\n')+
                QString("10: ") + QString::number(count10) + QString('\n');

        QMessageBox m;
        m.information(nullptr, "Check the change",notice);
        money = 0;
        ui->lcdNumber->display(money);
        ui->pbCoffee->setEnabled(false);
        ui->pbTea->setEnabled(false);
        ui->pbMilk->setEnabled(false);
    }
    else
    {
        money += diff;
        ui->lcdNumber->display(money);
        ButtonCheck();
    }
}

void Widget::on_pb10_clicked()
{
    ChangeMoney(10);
}

void Widget::on_pb50_clicked()
{
    ChangeMoney(50);
}

void Widget::on_pb100_clicked()
{
    ChangeMoney(100);
}

void Widget::on_pb500_clicked()
{
    ChangeMoney(500);
}

void Widget::on_pbCoffee_clicked()
{
    ChangeMoney(-100);
}

void Widget::on_pbTea_clicked()
{
    ChangeMoney(-150);
}

void Widget::on_pbMilk_clicked()
{
    ChangeMoney(-200);
}

void Widget::on_pbReset_clicked()
{
    ChangeMoney(0);
}
