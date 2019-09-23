#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QStyle>
#include <QFileDialog>
#include <QSettings>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidget>
#include <QList>
#include <QFont>

const int selectors_button_size_x=30;
const int selectors_button_size_y=30;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    connect(ui->PM_selector_1,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_2,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_3,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_4,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_5,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_6,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_7,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_8,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_9,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_10,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_11,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_12,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_13,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_14,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_15,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_16,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_17,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_18,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_19,SIGNAL(clicked()),this,SLOT(Clear_PM()));
    connect(ui->PM_selector_20,SIGNAL(clicked()),this,SLOT(Clear_PM()));



//Fixing of grid PM selecting elements
    ui->PM_selector_1->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_2->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_3->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_4->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_5->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_6->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_7->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_8->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_9->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_10->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_12->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_11->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_13->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_14->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_15->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_16->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_17->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_18->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_19->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->PM_selector_20->setFixedSize(selectors_button_size_x, selectors_button_size_y);
//Fixing of grid Channel selecting elements
    ui->Channel_selector_1->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_2->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_3->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_4->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_5->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_6->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_7->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_8->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_9->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_10->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_11->setFixedSize(selectors_button_size_x, selectors_button_size_y);
    ui->Channel_selector_12->setFixedSize(selectors_button_size_x, selectors_button_size_y);

    ui->TRG_single_val_cmd->setFixedSize(20,20);
    ui->LE_trg_single_val->setFixedSize(40,25);
    ui->res_gbt->setFixedSize(130,20);
    ui->Res_gbt_err->setFixedSize(130,20);
    ui->res_rx->setFixedSize(130,20);
    ui->Reset_orbit_sync->setFixedSize(130,20);
    ui->Res_dat->setFixedSize(130,40);
    ui->Reset_dropping->setFixedSize(130,20);



//setting connection with channel viewer
    connect(ui->Channel_selector_1,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_2,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_3,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_4,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_5,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_6,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_7,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_8,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_9,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_10,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_12,SIGNAL(clicked()),this,SLOT(Channel_viewer()));
    connect(ui->Channel_selector_11,SIGNAL(clicked()),this,SLOT(Channel_viewer()));

 //setting connection with bool button
        connect(ui->Channel_selector_1,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_2,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_3,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_4,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_5,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_6,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_7,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_8,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_9,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_10,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_12,SIGNAL(clicked()),this,SLOT(Clear_Ch()));
        connect(ui->Channel_selector_11,SIGNAL(clicked()),this,SLOT(Clear_Ch()));

        for(int i=0; i<20; i++)
        {for (int  j = 0;  j< 13; j++)
            {
                if(j==1 || j==4 || j==7 || j==10 || j==12)
                    buffer_link[i][j]=0;
                else if(j==3 || j==6 || j== 9)
                    buffer_link[i][j]=12;
                else {
                    buffer_link[i][j]=1;
                }
            }

        }

        this->createTable(QStringList()<<"Sync \n adjustment \n complete"
                                  // <<"PM"
                                   <<"line 0 \n link \n lost"
                                   <<"line 0 \n stable"
                                   <<"line 1 \n delay \n value"
                                   <<"line 1 \n link \n lost"
                                   <<"line 1 \n stable"
                                   <<"line 2 \n delay \n value"
                                   <<"line 2 \n link \n lost"
                                   <<"line 2 \n stable"
                                   <<"line 3 \n delay \n value"
                                   <<"line 3 \n link \n lost"
                                   <<"line 3 \n stable"
                                   <<"Error");


    QRect rect(0,0,26,26);
    qDebug() << rect.size();
    QRegion region(rect, QRegion::Ellipse);
    qDebug() << region.boundingRect().size();
    ui->TRG_single_val_cmd->setText("");
    ui->TRG_single_val_cmd->setFixedHeight(26);
    ui->TRG_single_val_cmd->setFixedWidth(26);
    qDebug() << rect.size();
    qDebug() << ui->TRG_single_val_cmd->size();

    ui->tableWidget->hide();
    ui->Refresh->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PM_selector_1_clicked()
{
    ui->PM_Number->display("PM 1");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_2_clicked()
{
   ui->PM_Number->display("PM 2");
   PM_selection_status=true;
}

void MainWindow::on_PM_selector_3_clicked()
{
   ui->PM_Number->display("PM 3");
   PM_selection_status=true;
}

void MainWindow::on_PM_selector_4_clicked()
{
    ui->PM_Number->display("PM 4");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_5_clicked()
{
    ui->PM_Number->display("PM 5");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_6_clicked()
{
    ui->PM_Number->display("PM 6");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_7_clicked()
{
    ui->PM_Number->display("PM 7");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_8_clicked()
{
   ui->PM_Number->display("PM 8");
   PM_selection_status=true;
}

void MainWindow::on_PM_selector_9_clicked()
{
    ui->PM_Number->display("PM 9");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_10_clicked()
{
    ui->PM_Number->display("PM 10");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_11_clicked()
{
    ui->PM_Number->display("PM 11");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_12_clicked()
{
    ui->PM_Number->display("PM 12");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_13_clicked()
{
    ui->PM_Number->display("PM 13");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_14_clicked()
{
    ui->PM_Number->display("PM 14");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_15_clicked()
{
    ui->PM_Number->display("PM 15");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_16_clicked()
{
    ui->PM_Number->display("PM 16");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_17_clicked()
{
    ui->PM_Number->display("PM 17");
}
void MainWindow::on_PM_selector_18_clicked()
{
    ui->PM_Number->display("PM 18");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_19_clicked()
{
    ui->PM_Number->display("PM 19");
    PM_selection_status=true;
}

void MainWindow::on_PM_selector_20_clicked()
{
    ui->PM_Number->display("PM 20");
    PM_selection_status=true;
}

void MainWindow::Channel_viewer()
{
    if(PM_selection_status)
    {
    QPushButton *but = (QPushButton *)sender();
    ui->Ch_Number->display(but->text());//Отображение на лсд дисплей того, что написано на кнопке
    }
    else {
        QMessageBox::information(this,"Attention","Choose the PM first");
    }
}

/*void MainWindow::on_darkPushButton_clicked()
{
    // New theme of dark palette
    // Настраиваем палитру для цветовых ролей элементов интерфейса
    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);


    qApp->setPalette(darkPalette);
}

void MainWindow::on_lightPushButton_clicked()
{

}*/








void MainWindow::on_action_triggered()//функция сохранения .ini файла
{


    QString savefile=QFileDialog::getSaveFileName(this,"Saving configurations","",".ini");//В сейвфайл записывается текущее имя и расположение файла
    QSettings setting(savefile+".ini",QSettings::IniFormat);//Создаются настройки .ini формата с именем savefile.ini
if(ui->PMcontrol->isChecked())
    {setting.beginGroup("PM_control");//Начала одной из групп параметров
    setting.setValue("ADC_ZERO",ui->lineEdit_ADC_Zero->text());
    setting.setValue("ADC_DELAY",ui->lineEdit_ADC_DELAY->text());
    setting.setValue("ADC0_OFFSET",ui->lineEdit_ADC_OFFSET->text());
    setting.setValue("ADC1_OFFSET",ui->lineEdit_ADC_OFFSET_2->text());
    setting.setValue("ADC0_RANGE",ui->lineEdit_ADC_RANGE->text());
    setting.setValue("ADC1_RANGE",ui->lineEdit_ADC_RANGE_2->text());
    setting.setValue("TIME_ALIN",ui->lineEdit_TIME_ALIN->text());
    setting.setValue("CFD_TRESHOLD",ui->lineEdit_CFD_TRESHOLD->text());
    setting.setValue("CFD_ZERO",ui->lineEdit_CFD_ZERO->text());
    setting.endGroup();
    }

   /* setting.beginGroup("PM_status");Это было для сохранения PM status но сошлись на том, что нет необходимости в его сохранении
    setting.setValue("ADC0_MEANAMP",ui->lineEdit_ADC0_MEANAMPL->text());
    setting.setValue("ADC1_MEANAMP",ui->lineEdit_ADC1_MEANAMPL->text());
    setting.setValue("ADC0_ZERPLVL",ui->lineEdit_ADC_ZERO_LVL->text());
    setting.setValue("ADC1_ZEROLVL",ui->lineEdit_ADC1_ZERO_LVL->text());
    setting.setValue("CFD_CNT",ui->lineEdit_CFD_CNT->text());
    setting.setValue("STROBE_CNT",ui->lineEdit_STROBE_CNT->text());
    setting.setValue("MEAN_TIME",ui->lineEdit_MEAN_TIME->text());
    setting.endGroup();*/

    if(ui->commandPar->isChecked())
{
    setting.beginGroup("Common_PM_parameters");
    setting.setValue("OR_GATE",ui->lineEdit_OR_GATE->text());
    setting.setValue("CFD_SATR",ui->lineEdit_CFD_SATR->text());
    setting.setValue("CH_MASK",ui->lineEdit_CH_MASK->text());
   // setting.setValue("BOARD_STATUS",ui->lineEdit_BOARD_STATUS->text());
    setting.endGroup();
}

    if(ui->Radoutcontrol->isChecked())
    {
        if(!ui->TCM->isChecked())//Если Клавиша тсм не нажата, и происходит сохранения, то из соответствующих лайн эдитов значения записываются в буфер для пмов.
            //Далее во время сохранения идет считывание именно из этого буфера
        PM_save();
        else
            TCM_save();

//сохранение произойдет в любом случае
        setting.beginGroup("Readout_control");
        setting.setValue("TIGGER_RESPON_MASK",PM_Trigger_resp_mask);
        setting.setValue("DATA_BUNCH_PATTERN",PM_Data_bunch_pattern);
        setting.setValue("TRIGGER_CONTINUOUS_VALUE",PM_Trigger_cont_value);
        setting.setValue("TRG_CONTINUOUS_PATTERN_1",PM_Trigger_cont_pattern1);
        setting.setValue("TRG_CONTINUOUS_PATTERN_2",PM_Trigger_cont_pattern2);
        setting.setValue("TRIGGER_BUNCH_FREQUENCY",PM_TRG_bunch_freq);
        setting.setValue("TRIGGER_FREQUENCY_OFFSET",PM_TRG_freq_offset);
        setting.setValue("DATA_BUNCH_FREQUENCY",PM_Data_bunch_freq);
        setting.setValue("DATA_FREQUENCY_OFFSET",PM_Data_freq_offset);
        setting.setValue("FEE_ID",ui->lineEdit_FEE_ID->text());
        setting.setValue("CRU_TRIGGER_COMPARE_DELAY",ui->lineEdit_CRU_trigger_compar_delay->text());
        setting.setValue("MAX_RHD_PAYLOAD",ui->lineEdit_max_RHD_pqyload->text());
        setting.setValue("PAR",ui->lineEdit_PAR->text());
        setting.setValue("DET_FIELD",ui->lineEdit_Det_field->text());
        setting.setValue("BCID_DELAY",ui->lineEdit_DCID_delay->text());
        setting.endGroup();

    }
//Если мы не нажимали тсм то значения буфера тсм будут пустые, а если нажимали, но возвращались то в буфере будет то, что мы вводили до возвращения
    setting.beginGroup("TCM_Readout_control");
    setting.setValue("TIGGER_RESPON_MASK_TCM",TCM_Trigger_resp_mask);
    setting.setValue("DATA_BUNCH_PATTERN_TCM",TCM_Data_bunch_pattern);
    setting.setValue("TRIGGER_CONTINUOUS_VALUE_TCM",TCM_Trigger_cont_value);
    setting.setValue("TRG_CONTINUOUS_PATTERN_1_TCM",TCM_Trigger_cont_pattern1);
    setting.setValue("TRG_CONTINUOUS_PATTERN_2_TCM",TCM_Trigger_cont_pattern2);
    setting.setValue("TRIGGER_BUNCH_FREQUENCY_TCM",TCM_TRG_bunch_freq);
    setting.setValue("TRIGGER_FREQUENCY_OFFSET_TCM",TCM_TRG_freq_offset);
    setting.setValue("DATA_BUNCH_FREQUENCY_TCM",TCM_Data_bunch_freq);
    setting.setValue("DATA_FREQUENCY_OFFSET_TCM",TCM_Data_freq_offset);
    setting.endGroup();

    ui->statusBar->showMessage("Configurations saved as "+savefile+".ini",2000);

}

void MainWindow::on_action_2_triggered()//Функция загрузки параметров
{
    QString openfile=QFileDialog::getOpenFileName(this,"Open configuration","","*.ini");//Открытие файла аналогично тому, что было при его создании
    QSettings setting(openfile,QSettings::IniFormat);
    if(ui->PMcontrol->isChecked())
   {setting.beginGroup("PM_control");
    ui->lineEdit_ADC_Zero->setText(setting.value("ADC_ZERO").toString());
    ui->lineEdit_ADC_DELAY->setText(setting.value("ADC_DELAY").toString());
    ui->lineEdit_ADC_OFFSET->setText(setting.value("ADC0_OFFSET").toString());
    ui->lineEdit_ADC_OFFSET_2->setText(setting.value("ADC1_OFFSET").toString());
    ui->lineEdit_ADC_RANGE->setText(setting.value("ADC0_RANGE").toString());
    ui->lineEdit_ADC_RANGE_2->setText(setting.value("ADC1_RANGE").toString());
    ui->lineEdit_TIME_ALIN->setText(setting.value("TIME_ALIN").toString());
    ui->lineEdit_CFD_TRESHOLD->setText(setting.value("CFD_TRESHOLD").toString());
    ui->lineEdit_CFD_ZERO->setText(setting.value("CFD_ZERO").toString());
    setting.endGroup();
    }

    if(ui->commandPar->isChecked())
    {
        setting.beginGroup("Common_PM_parameters");
        ui->lineEdit_OR_GATE->setText(setting.value("OR_GATE").toString());
        ui->lineEdit_CFD_SATR->setText(setting.value("CFD_SATR").toString());
        ui->lineEdit_CH_MASK->setText(setting.value("CH_MASK").toString());
       // ui->lineEdit_BOARD_STATUS->setText(setting.value("BOARD_STATUS").toString());
        setting.endGroup();
    }
//изначаньно в буфер записываются значения, указанные в файле настроек
    setting.beginGroup("Readout_control");
    PM_Trigger_resp_mask=(setting.value("TIGGER_RESPON_MASK").toString());
    PM_Data_bunch_pattern=(setting.value("DATA_BUNCH_PATTERN").toString());
    PM_Trigger_cont_value=(setting.value("TRIGGER_CONTINUOUS_VALUE").toString());
    PM_Trigger_cont_pattern1=(setting.value("TRG_CONTINUOUS_PATTERN_1").toString());
    PM_Trigger_cont_pattern2=(setting.value("TRG_CONTINUOUS_PATTERN_2").toString());
    PM_TRG_bunch_freq=(setting.value("TRIGGER_BUNCH_FREQUENCY").toString());
    PM_TRG_freq_offset=(setting.value("TRIGGER_FREQUENCY_OFFSET").toString());
    PM_Data_bunch_freq=(setting.value("DATA_BUNCH_FREQUENCY").toString());
    PM_Data_freq_offset=(setting.value("DATA_FREQUENCY_OFFSET").toString());
    setting.endGroup();

    setting.beginGroup("TCM_Readout_control");
    TCM_Trigger_resp_mask=(setting.value("TIGGER_RESPON_MASK_TCM").toString());
    TCM_Data_bunch_pattern=(setting.value("DATA_BUNCH_PATTERN_TCM").toString());
    TCM_Trigger_cont_value=(setting.value("TRIGGER_CONTINUOUS_VALUE_TCM").toString());
    TCM_Trigger_cont_pattern1=(setting.value("TRG_CONTINUOUS_PATTERN_1_TCM").toString());
    TCM_Trigger_cont_pattern2=(setting.value("TRG_CONTINUOUS_PATTERN_2_TCM").toString());
    TCM_TRG_bunch_freq=(setting.value("TRIGGER_BUNCH_FREQUENCY_TCM").toString());
    TCM_TRG_freq_offset=(setting.value("TRIGGER_FREQUENCY_OFFSET_TCM").toString());
    TCM_Data_bunch_freq=(setting.value("DATA_BUNCH_FREQUENCY_TCM").toString());
    TCM_Data_freq_offset=(setting.value("DATA_FREQUENCY_OFFSET_TCM").toString());
    setting.endGroup();

    if(ui->Radoutcontrol->isChecked())
    {
        setting.beginGroup("Readout_control");
        if(!ui->TCM->isChecked())//Если клавиша тсм не нажата, то в лайн эдиты записывается то, что касается пмов
        {
            PM_set_lineEdit();

       /* ui->lineEdit_trigger_respond_mask->setText(setting.value("TIGGER_RESPON_MASK").toString());
        ui->lineEdit_data_bunch_pattern->setText(setting.value("DATA_BUNCH_PATTERN").toString());
        ui->lineEdit_trg_cont_val->setText(setting.value("TRIGGER_CONTINUOUS_VALUE").toString());
        ui->lineEdit_trg_cont_pat_1->setText(setting.value("TRG_CONTINUOUS_PATTERN_1").toString());
        ui->lineEdit_trg_cont_pat_2->setText(setting.value("TRG_CONTINUOUS_PATTERN_2").toString());
        ui->lineEdit_trg_bunch_freq->setText(setting.value("TRIGGER_BUNCH_FREQUENCY").toString());
        ui->lineEdit_trg_freq_offset->setText(setting.value("TRIGGER_FREQUENCY_OFFSET").toString());
        ui->lineEdit_dat_bunch_freq->setText(setting.value("DATA_BUNCH_FREQUENCY").toString());
        ui->lineEdit_dat_freq_offset->setText(setting.value("DATA_FREQUENCY_OFFSET").toString());*/

        }
        else
            TCM_set_lineEdit();//если нажата, то тсмов

        ui->lineEdit_FEE_ID->setText(setting.value("FEE_ID").toString());
        ui->lineEdit_CRU_trigger_compar_delay->setText(setting.value("CRU_TRIGGER_COMPARE_DELAY").toString());
        ui->lineEdit_max_RHD_pqyload->setText(setting.value("MAX_RHD_PAYLOAD").toString());
        ui->lineEdit_PAR->setText(setting.value("PAR").toString());
        ui->lineEdit_Det_field->setText(setting.value("DET_FIELD").toString());
        ui->lineEdit_DCID_delay->setText(setting.value("BCID_DELAY").toString());
        setting.endGroup();
    }




}

void MainWindow::on_actionLight_theme_triggered()
{
    //returning to light palette
    qApp->setPalette(style()->standardPalette());
}

void MainWindow::on_actionDark_theme_triggered()
{
    QPalette darkPalette;
    // New theme of dark palette
    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Disabled,QPalette::WindowText, Qt::black);
    darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
    darkPalette.setColor(QPalette::Disabled,QPalette::Base, Qt::black);
    darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Disabled,QPalette::Text, Qt::black);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::Disabled,QPalette::ButtonText, Qt::black);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);



    qApp->setPalette(darkPalette);
}

void MainWindow::on_actionClear_all_triggered()
{
    if(ui->PMcontrol->isChecked())
   {
    ui->lineEdit_ADC_Zero->setText("");
    ui->lineEdit_ADC_DELAY->setText("");
    ui->lineEdit_ADC_OFFSET->setText("");
    ui->lineEdit_ADC_OFFSET_2->setText("");
    ui->lineEdit_ADC_RANGE->setText("");
    ui->lineEdit_ADC_RANGE_2->setText("");
    ui->lineEdit_TIME_ALIN->setText("");
    }

    if(ui->commandPar->isChecked())
    {

        ui->lineEdit_OR_GATE->setText("");
        ui->lineEdit_CFD_SATR->setText("");
        ui->lineEdit_CH_MASK->setText("");
        ui->lineEdit_BOARD_STATUS->setText("");

    }

    if(ui->Radoutcontrol->isChecked())
    {

        ui->lineEdit_trigger_respond_mask->setText("");
        ui->lineEdit_data_bunch_pattern->setText("");
        ui->lineEdit_trg_cont_val->setText("");
        ui->lineEdit_trg_cont_pat_1->setText("");
        ui->lineEdit_trg_cont_pat_2->setText("");
        ui->lineEdit_trg_bunch_freq->setText("");
        ui->lineEdit_trg_freq_offset->setText("");
        ui->lineEdit_dat_bunch_freq->setText("");
        ui->lineEdit_dat_freq_offset->setText("");
        ui->lineEdit_FEE_ID->setText("");
        ui->lineEdit_CRU_trigger_compar_delay->setText("");
        ui->lineEdit_max_RHD_pqyload->setText("");
        ui->lineEdit_PAR->setText("");
        ui->lineEdit_Det_field->setText("");
        ui->lineEdit_DCID_delay->setText("");

    }

}

void MainWindow::Clear_PM()//Функция снятия нажатия кнопки в PM selector. Когда нажата одна кнопка и нажимается слудующая -> предыдущая отлипает
{
    QPushButton* but=(QPushButton *)sender();//В but записывается адрес той кнопки, которую мы нажали
    QString No_PM=but->text();//В No_PM записывается текстовое содержимое кнопки, которую мы нажали. В данном случае это номер
    int flag=No_PM.toInt();//В переменную флаг записвается номер путем перевода из строки в целое число

    if(flag!=1)
        ui->PM_selector_1->setChecked(0);
    if(flag!=2)
        ui->PM_selector_2->setChecked(0);
    if(flag!=3)
        ui->PM_selector_3->setChecked(0);
    if(flag!=4)
        ui->PM_selector_4->setChecked(0);
    if(flag!=5)
        ui->PM_selector_5->setChecked(0);
    if(flag!=6)
        ui->PM_selector_6->setChecked(0);
    if(flag!=7)
        ui->PM_selector_7->setChecked(0);
    if(flag!=8)
        ui->PM_selector_8->setChecked(0);
    if(flag!=9)
        ui->PM_selector_9->setChecked(0);
    if(flag!=10)
        ui->PM_selector_10->setChecked(0);
    if(flag!=11)
        ui->PM_selector_11->setChecked(0);
    if(flag!=12)
        ui->PM_selector_12->setChecked(0);
    if(flag!=13)
        ui->PM_selector_13->setChecked(0);
    if(flag!=14)
        ui->PM_selector_14->setChecked(0);
    if(flag!=15)
        ui->PM_selector_15->setChecked(0);
    if(flag!=16)
        ui->PM_selector_16->setChecked(0);
    if(flag!=17)
        ui->PM_selector_17->setChecked(0);
    if(flag!=18)
        ui->PM_selector_18->setChecked(0);
    if(flag!=19)
        ui->PM_selector_19->setChecked(0);
    if(flag!=20)
        ui->PM_selector_20->setChecked(0);


}

void MainWindow::Clear_Ch()//Аналогичная функция для панели выбора канала
{
    QPushButton* but=(QPushButton *)sender();
    QString No_Ch=but->text();
    int flag=No_Ch.toInt();

    if(flag!=1)
        ui->Channel_selector_1->setChecked(0);
    if(flag!=2)
        ui->Channel_selector_2->setChecked(0);
    if(flag!=3)
        ui->Channel_selector_3->setChecked(0);
    if(flag!=4)
        ui->Channel_selector_4->setChecked(0);
    if(flag!=5)
        ui->Channel_selector_5->setChecked(0);
    if(flag!=6)
        ui->Channel_selector_6->setChecked(0);
    if(flag!=7)
        ui->Channel_selector_7->setChecked(0);
    if(flag!=8)
        ui->Channel_selector_8->setChecked(0);
    if(flag!=9)
        ui->Channel_selector_9->setChecked(0);
    if(flag!=10)
        ui->Channel_selector_10->setChecked(0);
    if(flag!=11)
        ui->Channel_selector_11->setChecked(0);
    if(flag!=12)
        ui->Channel_selector_12->setChecked(0);
}








void MainWindow::on_TCM_clicked()
{
    if(ui->TCM->isChecked())//Прячем все то, что не относится к TCM
    {
        ui->Current->setEnabled(false);
        ui->PM_BOARD_STATUS->setEnabled(false);
        ui->PM_selection->setEnabled(false);
        ui->Ch_selection->setEnabled(false);
        ui->PMcontrol->setEnabled(false);
        ui->PMstatus->setEnabled(false);
        ui->commandPar->setEnabled(false);
        ui->FEE_ID->setEnabled(false);
        ui->lineEdit_FEE_ID->setEnabled(false);
        ui->VIEW_FEE_ID->setEnabled(false);
        ui->WRITE_FEE_ID->setEnabled(false);
        ui->MAx_RDH_payload->setEnabled(false);
        ui->lineEdit_max_RHD_pqyload->setEnabled(false);
        ui->VIEW_MAX_RHD_PAYLOAD->setEnabled(false);
        ui->WRITE_MAX_RHD_PAYLOAD->setEnabled(false);
        ui->CRU_trg_comp_dal->setEnabled(false);
        ui->lineEdit_CRU_trigger_compar_delay->setEnabled(false);
        ui->VIEW_CRU_trg->setEnabled(false);
        ui->WRITE_CRU_trg->setEnabled(false);
        ui->PAR->setEnabled(false);
        ui->lineEdit_PAR->setEnabled(false);
        ui->VIEW_PAR->setEnabled(false);
        ui->WRITE_PAR->setEnabled(false);
        ui->DET_FIELD->setEnabled(false);
        ui->lineEdit_Det_field->setEnabled(false);
        ui->VIEW_DET->setEnabled(false);
        ui->WRITE_DET->setEnabled(false);
        ui->BCIDdelay->setEnabled(false);
        ui->lineEdit_DCID_delay->setEnabled(false);
        ui->VIEW_BCID_delay->setEnabled(false);
        ui->WRITE_BCID_delay->setEnabled(false);
        ui->Reset_orbit_sync->setEnabled(false);
        ui->res_rx->setEnabled(false);
        ui->Selector_fifo_count->setText("Readout FIFO");
        ui->Selector_first->setEnabled(false);
        ui->LCD_selector_first->setEnabled(false);
        ui->Selector_last->setEnabled(false);
        ui->LCD_selector_last->setEnabled(false);
        ui->selector_hits->setEnabled(false);
        ui->LCD_selector_hits->setEnabled(false);
        ui->Readout_rate->setEnabled(false);
        ui->LCD_readout_rate->setEnabled(false);
        ui->RX_phase->setEnabled(false);
        ui->LCD_RX_phase->setEnabled(false);
        ui->BCID_sync_mode->setEnabled(false);
        ui->LCD_BCiD_SYNC_MODE->setEnabled(false);
        ui->RX_phase_error->setEnabled(false);
        ui->LCD_RX_PHASE_ERROR->setEnabled(false);


        PM_save();//При переключении на тсм значение, в тех лайн эдитах, которые относятся и к пм и к тсм сохраняются в буфер пм
        TCM_set_lineEdit();//В лайн эдиты записываются текущие значения, соответствующие тсмам из буфера



    }
    if(!ui->TCM->isChecked())//показваем все то, что не относится к TCM
    {
        ui->Current->setEnabled(true);
        ui->PM_BOARD_STATUS->setEnabled(true);
        ui->PM_selection->setEnabled(true);
        ui->Ch_selection->setEnabled(true);
        ui->PMcontrol->setEnabled(true);
        ui->PMstatus->setEnabled(true);
        ui->commandPar->setEnabled(true);
        ui->FEE_ID->setEnabled(true);
        ui->lineEdit_FEE_ID->setEnabled(true);
        ui->VIEW_FEE_ID->setEnabled(true);
        ui->WRITE_FEE_ID->setEnabled(true);
        ui->MAx_RDH_payload->setEnabled(true);
        ui->lineEdit_max_RHD_pqyload->setEnabled(true);
        ui->VIEW_MAX_RHD_PAYLOAD->setEnabled(true);
        ui->WRITE_MAX_RHD_PAYLOAD->setEnabled(true);
        ui->CRU_trg_comp_dal->setEnabled(true);
        ui->lineEdit_CRU_trigger_compar_delay->setEnabled(true);
        ui->VIEW_CRU_trg->setEnabled(true);
        ui->WRITE_CRU_trg->setEnabled(true);
        ui->PAR->setEnabled(true);
        ui->lineEdit_PAR->setEnabled(true);
        ui->VIEW_PAR->setEnabled(true);
        ui->WRITE_PAR->setEnabled(true);
        ui->DET_FIELD->setEnabled(true);
        ui->lineEdit_Det_field->setEnabled(true);
        ui->VIEW_DET->setEnabled(true);
        ui->WRITE_DET->setEnabled(true);
        ui->BCIDdelay->setEnabled(true);
        ui->lineEdit_DCID_delay->setEnabled(true);
        ui->VIEW_BCID_delay->setEnabled(true);
        ui->WRITE_BCID_delay->setEnabled(true);
        ui->Reset_orbit_sync->setEnabled(true);
        ui->res_rx->setEnabled(true);
        ui->Selector_fifo_count->setEnabled(true);
        ui->Selector_first->setEnabled(true);
        ui->LCD_selector_first->setEnabled(true);
        ui->Selector_last->setEnabled(true);
        ui->LCD_selector_last->setEnabled(true);
        ui->selector_hits->setEnabled(true);
        ui->LCD_selector_hits->setEnabled(true);
        ui->Readout_rate->setEnabled(true);
        ui->LCD_readout_rate->setEnabled(true);
        ui->RX_phase->setEnabled(true);
        ui->LCD_RX_phase->setEnabled(true);
        ui->BCID_sync_mode->setEnabled(true);
        ui->LCD_BCiD_SYNC_MODE->setEnabled(true);
        ui->RX_phase_error->setEnabled(true);
        ui->LCD_RX_PHASE_ERROR->setEnabled(true);

        TCM_save();//При переключении на рм значение, в тех лайн эдитах, которые относятся и к пм и к тсм сохраняются в буфер тсм
        PM_set_lineEdit();//В лайн эдиты записываются текущие значения, соответствующие рм из буфера


    }

}

void MainWindow::PM_save()
{
    PM_Trigger_resp_mask=ui->lineEdit_trigger_respond_mask->text();
    PM_Data_bunch_pattern=ui->lineEdit_data_bunch_pattern->text();
    PM_Trigger_cont_pattern1=ui->lineEdit_trg_cont_pat_1->text();
    PM_Trigger_cont_pattern2=ui->lineEdit_trg_cont_pat_2->text();
    PM_Trigger_cont_value=ui->lineEdit_trg_cont_val->text();
    PM_TRG_bunch_freq=ui->lineEdit_trg_bunch_freq->text();
    PM_TRG_freq_offset=ui->lineEdit_trg_freq_offset->text();
    PM_Data_bunch_freq=ui->lineEdit_dat_bunch_freq->text();
    PM_Data_freq_offset=ui->lineEdit_dat_freq_offset->text();

}

void MainWindow::TCM_set_lineEdit()
{
    ui->lineEdit_trigger_respond_mask->setText(TCM_Trigger_resp_mask);
    ui->lineEdit_data_bunch_pattern->setText(TCM_Data_bunch_pattern);
    ui->lineEdit_trg_cont_pat_1->setText(TCM_Trigger_cont_pattern1);
    ui->lineEdit_trg_cont_pat_2->setText(TCM_Trigger_cont_pattern2);
    ui->lineEdit_trg_cont_val->setText(TCM_Trigger_cont_value);
    ui->lineEdit_trg_bunch_freq->setText(TCM_TRG_bunch_freq);
    ui->lineEdit_trg_freq_offset->setText(TCM_TRG_freq_offset);
    ui->lineEdit_dat_bunch_freq->setText(TCM_Data_bunch_freq);
    ui->lineEdit_dat_freq_offset->setText(TCM_Data_freq_offset);
}

void MainWindow::TCM_save()
{
TCM_Trigger_resp_mask=ui->lineEdit_trigger_respond_mask->text();
TCM_Data_bunch_pattern=ui->lineEdit_data_bunch_pattern->text();
TCM_Trigger_cont_pattern1=ui->lineEdit_trg_cont_pat_1->text();
TCM_Trigger_cont_pattern2=ui->lineEdit_trg_cont_pat_2->text();
TCM_Trigger_cont_value=ui->lineEdit_trg_cont_val->text();
TCM_TRG_bunch_freq=ui->lineEdit_trg_bunch_freq->text();
TCM_TRG_freq_offset=ui->lineEdit_trg_freq_offset->text();
TCM_Data_bunch_freq=ui->lineEdit_dat_bunch_freq->text();
TCM_Data_freq_offset=ui->lineEdit_dat_freq_offset->text();
}

void MainWindow::PM_set_lineEdit()
{
    ui->lineEdit_trigger_respond_mask->setText(PM_Trigger_resp_mask);
    ui->lineEdit_data_bunch_pattern->setText(PM_Data_bunch_pattern);
    ui->lineEdit_trg_cont_pat_1->setText(PM_Trigger_cont_pattern1);
    ui->lineEdit_trg_cont_pat_2->setText(PM_Trigger_cont_pattern2);
    ui->lineEdit_trg_cont_val->setText(PM_Trigger_cont_value);
    ui->lineEdit_trg_bunch_freq->setText(PM_TRG_bunch_freq);
    ui->lineEdit_trg_freq_offset->setText(PM_TRG_freq_offset);
    ui->lineEdit_dat_bunch_freq->setText(PM_Data_bunch_freq);
    ui->lineEdit_dat_freq_offset->setText(PM_Data_freq_offset);
}

void MainWindow::createTable(QStringList &headers)
{
    //QFont font = ui->label_6->font();
    ui->tableWidget->setColumnCount(13);
    ui->tableWidget->setRowCount(20);
    ui->tableWidget->setShowGrid(true);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    QFont font = ui->tableWidget->horizontalHeader()->font();
    font.setPointSize( 7 );
    ui->tableWidget->horizontalHeader()->setFont( font );
    ui->tableWidget->setColumnWidth(0,70);
    for(int k=1; k<ui->tableWidget->columnCount(); k++)
    {
        ui->tableWidget->setColumnWidth(k,45);
        
    }

    QStringList PMs;
    for(int i=1; i<21 ; i++ )
    {
        PMs<<QString::number(i);
    }
    ui->tableWidget->setVerticalHeaderLabels(PMs);
    int value_link=0;
    QString str="";
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
            for(int j = 0; j < ui->tableWidget->columnCount(); j++){
                value_link=buffer_link[i][j];
                       if(value_link==0 && j!=3 && j!=6 && j!=9 )
                       {
                           str="No";


                       }
                       if (value_link==1 && j!=3 && j!=6 && j!=9)
                           str="Yes";
                       if(j==3 || j==6 || j==9) {
                           str=QString::number(buffer_link[i][j]*2.5/32)+" ns";
                       }
                QTableWidgetItem *itm = new QTableWidgetItem(str);
               if( ((j==1 || j==7 || j==4 || j==10 || j==12) && str=="No") || ( (j==0 || j==2 || j==5 || j==8 || j==11) && str=="Yes"))
                    itm->setBackgroundColor(Qt::green);
                else if (j==3 || j==6 || j==9)
                    itm->setBackgroundColor(Qt::white);
                else
                    itm->setBackground(Qt::red);

               font.setPointSize(7);
                itm->setFont(font);
                itm->setTextColor(Qt::black);
                itm->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, j, itm);

            }
    }


void MainWindow::on_FTM_clicked()
{
    if(ui->FTM->isChecked())
    {
    ui->tableWidget->show();
    ui->Refresh->show();
    ui->Ch_selection->hide();
    ui->PM_selection->hide();
    ui->groupBox->hide();
    ui->Datagenerator->hide();
    ui->Triggergenerator->hide();
    ui->Update_writeALL->hide();
    ui->PMcontrol->hide();
    ui->PM_BOARD_STATUS->hide();
    ui->PMstatus->hide();
   // ui->Readoutstatus->hide();
    ui->commandPar->hide();
   // ui->GBTstatusbits->hide();
    ui->TCM->setEnabled(false);
    //ui->FTM->hide();
   // ui->Current->hide();
    ui->Resetcontrol->hide();
    ui->Readoutcommand->hide();
    //ui->Radoutcontrol->hide();
    ui->FEE_ID->setEnabled(false);
    ui->lineEdit_FEE_ID->setEnabled(false);
    ui->VIEW_FEE_ID->setEnabled(false);
    ui->WRITE_FEE_ID->setEnabled(false);
    ui->MAx_RDH_payload->setEnabled(false);
    ui->lineEdit_max_RHD_pqyload->setEnabled(false);
    ui->VIEW_MAX_RHD_PAYLOAD->setEnabled(false);
    ui->WRITE_MAX_RHD_PAYLOAD->setEnabled(false);
    ui->CRU_trg_comp_dal->setEnabled(false);
    ui->lineEdit_CRU_trigger_compar_delay->setEnabled(false);
    ui->VIEW_CRU_trg->setEnabled(false);
    ui->WRITE_CRU_trg->setEnabled(false);
    ui->PAR->setEnabled(false);
    ui->lineEdit_PAR->setEnabled(false);
    ui->VIEW_PAR->setEnabled(false);
    ui->WRITE_PAR->setEnabled(false);
    ui->DET_FIELD->setEnabled(false);
    ui->lineEdit_Det_field->setEnabled(false);
    ui->VIEW_DET->setEnabled(false);
    ui->WRITE_DET->setEnabled(false);
    ui->BCIDdelay->setEnabled(false);
    ui->lineEdit_DCID_delay->setEnabled(false);
    ui->VIEW_BCID_delay->setEnabled(false);
    ui->WRITE_BCID_delay->setEnabled(false);
    ui->Selector_first->setEnabled(false);
    ui->LCD_selector_first->setEnabled(false);
    ui->Selector_last->setEnabled(false);
    ui->LCD_selector_last->setEnabled(false);
    ui->selector_hits->setEnabled(false);
    ui->LCD_selector_hits->setEnabled(false);
    ui->Readout_rate->setEnabled(false);
    ui->LCD_readout_rate->setEnabled(false);
    ui->RX_phase->setEnabled(false);
    ui->LCD_RX_phase->setEnabled(false);
    ui->BCID_sync_mode->setEnabled(false);
    ui->LCD_BCiD_SYNC_MODE->setEnabled(false);
    ui->RX_phase_error->setEnabled(false);
    ui->LCD_RX_PHASE_ERROR->setEnabled(false);
}
    if(!ui->FTM->isChecked())
    {
        ui->tableWidget->hide();

        ui->Refresh->hide();
        ui->Ch_selection->show();
        ui->PM_selection->show();
        ui->groupBox->show();
        ui->Datagenerator->show();
        ui->Triggergenerator->show();
        ui->Update_writeALL->show();
        ui->PMcontrol->show();
        ui->PM_BOARD_STATUS->show();
        ui->PMstatus->show();
        //ui->Readoutstatus->show();
        ui->commandPar->show();
        //ui->GBTstatusbits->show();
        ui->TCM->setEnabled(true);
       // ui->FTM->show();
        //ui->Current->show();
        ui->Resetcontrol->show();
        ui->Readoutcommand->show();
      //  ui->Radoutcontrol->show();
        ui->FEE_ID->setEnabled(true);
        ui->lineEdit_FEE_ID->setEnabled(true);
        ui->VIEW_FEE_ID->setEnabled(true);
        ui->WRITE_FEE_ID->setEnabled(true);
        ui->MAx_RDH_payload->setEnabled(true);
        ui->lineEdit_max_RHD_pqyload->setEnabled(true);
        ui->VIEW_MAX_RHD_PAYLOAD->setEnabled(true);
        ui->WRITE_MAX_RHD_PAYLOAD->setEnabled(true);
        ui->CRU_trg_comp_dal->setEnabled(true);
        ui->lineEdit_CRU_trigger_compar_delay->setEnabled(true);
        ui->VIEW_CRU_trg->setEnabled(true);
        ui->WRITE_CRU_trg->setEnabled(true);
        ui->PAR->setEnabled(true);
        ui->lineEdit_PAR->setEnabled(true);
        ui->VIEW_PAR->setEnabled(true);
        ui->WRITE_PAR->setEnabled(true);
        ui->DET_FIELD->setEnabled(true);
        ui->lineEdit_Det_field->setEnabled(true);
        ui->VIEW_DET->setEnabled(true);
        ui->WRITE_DET->setEnabled(true);
        ui->BCIDdelay->setEnabled(true);
        ui->lineEdit_DCID_delay->setEnabled(true);
        ui->VIEW_BCID_delay->setEnabled(true);
        ui->WRITE_BCID_delay->setEnabled(true);
        ui->Selector_first->setEnabled(true);
        ui->LCD_selector_first->setEnabled(true);
        ui->Selector_last->setEnabled(true);
        ui->LCD_selector_last->setEnabled(true);
        ui->selector_hits->setEnabled(true);
        ui->LCD_selector_hits->setEnabled(true);
        ui->Readout_rate->setEnabled(true);
        ui->LCD_readout_rate->setEnabled(true);
        ui->RX_phase->setEnabled(true);
        ui->LCD_RX_phase->setEnabled(true);
        ui->BCID_sync_mode->setEnabled(true);
        ui->LCD_BCiD_SYNC_MODE->setEnabled(true);
        ui->RX_phase_error->setEnabled(true);
        ui->LCD_RX_PHASE_ERROR->setEnabled(true);
    }


}


