#ifndef PM_H
#define PM_H

#include <QDialog>
#include<QString>




namespace Ui {
class PM;
}

class PM : public QDialog
{
    Q_OBJECT

public:
    explicit PM(int No=0, QWidget *parent = nullptr);


    ~PM();



private slots:
   /* void on_ADC_ZERO_INFO_clicked();

    void on_ADC_DELAY_INFO_clicked();

    void on_ADC0_OFFSET_INFO_clicked();

    void on_ADC1_OFFSET_INFO_clicked();

    void on_ADC0_RANGE_INFO_clicked();

    void on_ADC1_RANGE_INFO_clicked();

    void on_TIME_ALIN_INFO_clicked();

    void on_label_3_linkHovered(const QString &link);

    void on_VIEW_ADC_ZERO_clicked();

    void on_VIEW_ADC_DELAY_clicked();

    void on_VIEW_ADC0_OFFSET_clicked();

    void on_VIEW_ADC1_OFFSET_clicked();

    void on_VIEW_ADC0_RANGE_clicked();

    void on_VIEW_ADC1_RANGE_clicked();

    void on_VIEW_TIME_ALIN_clicked();*/

private:
    Ui::PM *ui;

};


#endif // PM_H
