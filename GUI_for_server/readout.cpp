#include "readout.h"
#include "ui_readout.h"
#include "readout.h"
#include <QMessageBox>
#include "aboutcontrolreadout.h"
#include <QDebug>

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
    ui->comboBox_Data->addItem("0-No Generator");
    ui->comboBox_Data->addItem("1-Main Generator");
    ui->comboBox_Data->addItem("2-TX Generator");
    ui->comboBox_Trigger->addItem("0-No Generator");
    ui->comboBox_Trigger->addItem("1-Continuous");
    ui->comboBox_Readout->addItem("1-SOC");
    ui->comboBox_Readout->addItem("2-SOT");
    ui->comboBox_Readout->addItem("3-EOC");
    ui->comboBox_Readout->addItem("4-SOC");
    ui->pushButton_2->setText("");
    ui->pushButton_2->setFixedHeight(26);
    ui->pushButton_2->setFixedWidth(26);
    QRect rect(0,0,26,26);
    qDebug() << rect.size();
    qDebug() << ui->pushButton_2->size();
    QRegion region(rect, QRegion::Ellipse);
    qDebug() << region.boundingRect().size();
    ui->pushButton_2->setMask(region);

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
