#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pm.h"
#include "readout.h"





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

    int PMno=ui->PM_list->currentIndex();


        pm_win_1=new PM(PMno+1, this);
        pm_win_1->show();
#define  PMNO 1;


}

void MainWindow::on_pushButton_clicked()
{
    read_win=new Readout(this);
    read_win->show();
}
