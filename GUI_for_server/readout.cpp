#include "readout.h"
#include "ui_readout.h"
#include "readout.h"
#include <QMessageBox>
#include "aboutcontrolreadout.h"

Readout::Readout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Readout)
{
    ui->setupUi(this);
    ui->Reset_list->addItem("Reset orbit sync");
    ui->Reset_list->addItem("Reset dropping it counters");
    ui->Reset_list->addItem("Reset data/TRG generators bunch offset");
    ui->Reset_list->addItem("Reset GBT errors");
    ui->Reset_list->addItem("Reset GBT");
    ui->Reset_list->addItem("Reset RX phase error");
    ui->spinBox_Data->setValue(0);
    ui->spinBox_Data->setMaximum(2);
    ui->spinBox_Data->setMinimum(0);
    ui->spinBox_Trigger->setValue(0);
    ui->spinBox_Trigger->setMinimum(0);
    ui->spinBox_Trigger->setMaximum(1);
    ui->spinBox_RC->setRange(0,4);
    ui->spinBox_RC->setValue(0);



}

Readout::~Readout()
{
    delete ui;
}

void Readout::on_pushButton_2_clicked()
{
    Aboutcontrolreadout win;
    win.setModal(true);
    win.exec();
}
