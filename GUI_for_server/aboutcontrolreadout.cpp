#include "aboutcontrolreadout.h"
#include "ui_aboutcontrolreadout.h"

Aboutcontrolreadout::Aboutcontrolreadout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Aboutcontrolreadout)
{
    ui->setupUi(this);
}

Aboutcontrolreadout::~Aboutcontrolreadout()
{
    delete ui;
}
