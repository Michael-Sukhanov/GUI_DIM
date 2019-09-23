#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void Clear_PM();
    void Clear_Ch();



    void on_PM_selector_1_clicked();
    void on_PM_selector_2_clicked();
    void on_PM_selector_3_clicked();
    void on_PM_selector_4_clicked();
    void on_PM_selector_5_clicked();
    void on_PM_selector_6_clicked();
    void on_PM_selector_7_clicked();
    void on_PM_selector_8_clicked();
    void on_PM_selector_9_clicked();
    void on_PM_selector_10_clicked();
    void on_PM_selector_11_clicked();
    void on_PM_selector_12_clicked();
    void on_PM_selector_13_clicked();
    void on_PM_selector_14_clicked();
    void on_PM_selector_15_clicked();
    void on_PM_selector_16_clicked();
    void on_PM_selector_17_clicked();
    void on_PM_selector_18_clicked();
    void on_PM_selector_19_clicked();
    void on_PM_selector_20_clicked();

    void Channel_viewer();





    //void on_darkPushButton_clicked();

    //void on_lightPushButton_clicked();

    void on_action_triggered();

    void on_action_2_triggered();

    void on_actionLight_theme_triggered();

    void on_actionDark_theme_triggered();

    void on_actionClear_all_triggered();



    void on_TCM_clicked();

    void on_FTM_clicked();



private:
    Ui::MainWindow *ui;
    //TCM parameters для сохранения и чтения .ini файла:
    QString TCM_Trigger_resp_mask="";
    QString TCM_Data_bunch_pattern="";
    QString TCM_Trigger_cont_pattern1="";
    QString TCM_Trigger_cont_pattern2="";
    QString TCM_Trigger_cont_value="";
    QString TCM_TRG_bunch_freq="";
    QString TCM_TRG_freq_offset="";
    QString TCM_Data_bunch_freq="";
    QString TCM_Data_freq_offset="";

    //PM parameters для сохранения и чтения .ini файла:
    QString PM_Trigger_resp_mask="";
    QString PM_Data_bunch_pattern="";
    QString PM_Trigger_cont_pattern1="";
    QString PM_Trigger_cont_pattern2="";
    QString PM_Trigger_cont_value="";
    QString PM_TRG_bunch_freq="";
    QString PM_TRG_freq_offset="";
    QString PM_Data_bunch_freq="";
    QString PM_Data_freq_offset="";

    bool PM_selection_status=false;

    void PM_save();
    void TCM_save();
    void PM_set_lineEdit();
    void TCM_set_lineEdit();
    void createTable(QStringList & headers);
    int buffer_link[20][13];
};

#endif // MAINWINDOW_H
