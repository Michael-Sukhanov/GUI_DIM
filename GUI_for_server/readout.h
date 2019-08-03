#ifndef READOUT_H
#define READOUT_H

#include <QDialog>

namespace Ui {
class Readout;
}

class Readout : public QDialog
{
    Q_OBJECT

public:
    explicit Readout(QWidget *parent = nullptr);
    ~Readout();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Readout *ui;
};

#endif // READOUT_H
