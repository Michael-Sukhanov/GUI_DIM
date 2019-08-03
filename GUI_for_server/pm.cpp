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


void PM::on_ADC_ZERO_INFO_clicked()
{
    ui->INFO->setText("ADC zero offset, analog set");
}

void PM::on_ADC_DELAY_INFO_clicked()
{
    ui->INFO->setText("ADC clock delay relative to LHC clock, analog set");
}


void PM::on_ADC0_OFFSET_INFO_clicked()
{
    ui->INFO->setText("ADC0 digital offset");
}

void PM::on_ADC1_OFFSET_INFO_clicked()
{
    ui->INFO->setText("ADC1 digital offset");
}


void PM::on_ADC0_RANGE_INFO_clicked()
{
    ui->INFO->setText("Channel amplitude calibration");
}

void PM::on_ADC1_RANGE_INFO_clicked()
{
    ui->INFO->setText("Channel amplitude calibration");
}

void PM::on_TIME_ALIN_INFO_clicked()
{
    ui->INFO->setText("Digital decrimental time alinement");
}

void PM::on_label_3_linkHovered(const QString &link)
{
    ui->ADC_ZERO_INFO->setText("Digital decrimental time alinement");
}
