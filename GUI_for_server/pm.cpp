#include "pm.h"
#include "ui_pm.h"
#include "mainwindow.h"

PM::PM(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PM)
{
    ui->setupUi(this);
}

PM::~PM()
{
    delete ui;
}



