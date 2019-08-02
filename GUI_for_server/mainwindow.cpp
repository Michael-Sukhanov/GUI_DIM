#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pm.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->PM_list->addItem("PM 1");
    ui->PM_list->addItem("PM 2");
    ui->PM_list->addItem("PM 3");
    ui->PM_list->addItem("PM 4");
    ui->PM_list->addItem("PM 5");
    ui->PM_list->addItem("PM 6");
    ui->PM_list->addItem("PM 7");
    ui->PM_list->addItem("PM 8");
    ui->PM_list->addItem("PM 9");
    ui->PM_list->addItem("PM 10");
    ui->PM_list->addItem("PM 11");
    ui->PM_list->addItem("PM 12");
    ui->PM_list->addItem("PM 13");
    ui->PM_list->addItem("PM 14");
    ui->PM_list->addItem("PM 15");
    ui->PM_list->addItem("PM 16");
    ui->PM_list->addItem("PM 17");
    ui->PM_list->addItem("PM 18");
    ui->PM_list->addItem("PM 19");
    ui->PM_list->addItem("PM 20");
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_2_clicked()
{
    QString PM_NO;
    PM_NO=ui->PM_list->currentItem()->text();
    if(PM_NO=="PM 1")
    {
        pm_win_1=new PM(this);
        pm_win_1->show();
    }
}
