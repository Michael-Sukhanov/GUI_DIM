#include "pm.h"
#include "ui_pm.h"
#include "mainwindow.h"
#include <QDebug>


PM::PM(int No, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PM)
{  QString NO=QString::number(No);
    ui->setupUi(this);
    ui->THIS_PM_NO->setStyleSheet("color:red;font-style:italic;font-size: 5");
    QString config="PM "+NO;
    ui->THIS_PM_NO->setText(config);
    ui->THIS_PM_NO_2->setStyleSheet("color:red;font-style:italic;font-size: 5");
    ui->THIS_PM_NO_2->setText("CONFIGURATION");

}

PM::~PM()
{
    delete ui;
}



