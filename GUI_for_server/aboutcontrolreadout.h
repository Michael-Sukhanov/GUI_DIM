#ifndef ABOUTCONTROLREADOUT_H
#define ABOUTCONTROLREADOUT_H

#include <QDialog>

namespace Ui {
class Aboutcontrolreadout;
}

class Aboutcontrolreadout : public QDialog
{
    Q_OBJECT

public:
    explicit Aboutcontrolreadout(QWidget *parent = nullptr);
    ~Aboutcontrolreadout();

private:
    Ui::Aboutcontrolreadout *ui;
};

#endif // ABOUTCONTROLREADOUT_H
