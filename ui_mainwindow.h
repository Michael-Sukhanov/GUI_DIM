/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *actionLight_theme;
    QAction *actionDark_theme;
    QAction *actionClear_all;
    QWidget *centralWidget;
    QLabel *label_37;
    QLabel *label_41;
    QGroupBox *PM_selection;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PM_selector_1;
    QPushButton *PM_selector_2;
    QPushButton *PM_selector_3;
    QPushButton *PM_selector_4;
    QPushButton *PM_selector_5;
    QPushButton *PM_selector_6;
    QPushButton *PM_selector_7;
    QPushButton *PM_selector_8;
    QPushButton *PM_selector_9;
    QPushButton *PM_selector_10;
    QPushButton *PM_selector_11;
    QPushButton *PM_selector_12;
    QPushButton *PM_selector_13;
    QPushButton *PM_selector_14;
    QPushButton *PM_selector_15;
    QPushButton *PM_selector_16;
    QPushButton *PM_selector_17;
    QPushButton *PM_selector_18;
    QPushButton *PM_selector_19;
    QPushButton *PM_selector_20;
    QGroupBox *Ch_selection;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Channel_selector_1;
    QPushButton *Channel_selector_2;
    QPushButton *Channel_selector_3;
    QPushButton *Channel_selector_4;
    QPushButton *Channel_selector_5;
    QPushButton *Channel_selector_6;
    QPushButton *Channel_selector_7;
    QPushButton *Channel_selector_8;
    QPushButton *Channel_selector_9;
    QPushButton *Channel_selector_10;
    QPushButton *Channel_selector_11;
    QPushButton *Channel_selector_12;
    QGroupBox *Resetcontrol;
    QVBoxLayout *verticalLayout;
    QPushButton *Reset_dropping;
    QPushButton *Res_dat;
    QPushButton *Res_gbt_err;
    QPushButton *res_gbt;
    QPushButton *Reset_orbit_sync;
    QPushButton *res_rx;
    QGroupBox *Readoutcommand;
    QGridLayout *gridLayout_3;
    QPushButton *soc;
    QPushButton *eoc;
    QPushButton *sot;
    QPushButton *eot;
    QGroupBox *Triggergenerator;
    QVBoxLayout *verticalLayout_3;
    QPushButton *No_get_trg;
    QPushButton *continuous;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *LE_trg_single_val;
    QPushButton *TRG_single_val_cmd;
    QGroupBox *PMcontrol;
    QGridLayout *gridLayout_4;
    QLabel *CFD_TRESHOLD;
    QLabel *ADC_ZERO;
    QLabel *ADC1_OFFSET;
    QLabel *ADC0_RANGE;
    QLabel *TIME_ALIN;
    QPushButton *WRITE_TIME_ALIN;
    QLabel *ADC_DELAY;
    QPushButton *VIEW_ADC1_OFFSET;
    QPushButton *WRITE_ADC0_OFFSET;
    QPushButton *VIEW_ADC1_RANGE;
    QPushButton *VIEW_TIME_ALIN;
    QLabel *ADC1_RANGE;
    QPushButton *WRITE_ADC1_OFFSET;
    QPushButton *VIEW_ADC0_OFFSET;
    QPushButton *WRITE_ADC_DELAY;
    QPushButton *WRITE_ADC1_RANGE_2;
    QPushButton *WRITE_ADC_RANGE;
    QPushButton *VIEW_ADC0_RANGE;
    QPushButton *VIEW_ADC_DELAY;
    QLabel *ADC0_OFFSET;
    QLineEdit *lineEdit_ADC_DELAY;
    QLineEdit *lineEdit_ADC_OFFSET;
    QLineEdit *lineEdit_ADC_OFFSET_2;
    QLineEdit *lineEdit_ADC_RANGE;
    QLineEdit *lineEdit_ADC_RANGE_2;
    QLineEdit *lineEdit_TIME_ALIN;
    QPushButton *VIEW_ADC_ZERO;
    QPushButton *WRITE_ADC_ZERO;
    QLineEdit *lineEdit_ADC_Zero;
    QLabel *CFD_ZERO;
    QLineEdit *lineEdit_CFD_TRESHOLD;
    QLineEdit *lineEdit_CFD_ZERO;
    QPushButton *VIEW_CFD_TRESHOLD;
    QPushButton *VIEW_CFD_ZERO;
    QPushButton *WRITE_CFD_TRESHOLD;
    QPushButton *WRITE_CFD_ZERO;
    QGroupBox *PMstatus;
    QGridLayout *gridLayout_5;
    QLabel *ADC0_MEANAMPL;
    QLineEdit *lineEdit_ADC0_MEANAMPL;
    QPushButton *VIEW_ADC0_Meanampl;
    QLabel *ADC1_MEANAMPL;
    QLineEdit *lineEdit_ADC1_MEANAMPL;
    QPushButton *VIEW_ADC1_Mean;
    QLabel *ADC0_ZERO_LVL;
    QLineEdit *lineEdit_ADC_ZERO_LVL;
    QPushButton *VIEW_ADC0_Zerolvl;
    QLabel *ADC1_ZERO_LVL;
    QLineEdit *lineEdit_ADC1_ZERO_LVL;
    QPushButton *VIEW_ADC1_zerolvl;
    QLabel *CFD_CNT;
    QLineEdit *lineEdit_CFD_CNT;
    QPushButton *VIEW_cfd_cnt;
    QLabel *STROBE_CNT;
    QLineEdit *lineEdit_STROBE_CNT;
    QPushButton *VIEW_Strobe_cnt;
    QLineEdit *lineEdit_MEAN_TIME;
    QLabel *MEAN_TIME;
    QPushButton *VIEW_mean_time;
    QGroupBox *commandPar;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_CFD_SATR;
    QPushButton *VIEW_CFD_SATR;
    QPushButton *WRITE_Chmask;
    QLabel *CFD_SATR;
    QLineEdit *lineEdit_OR_GATE;
    QPushButton *WRITE_OR_GATE;
    QPushButton *WRITE_BOARD_STATUS;
    QPushButton *VIEW_BOARD_STATUS;
    QLabel *BOARD_STATUS;
    QLabel *CH_MASK;
    QLabel *OR_GATE;
    QLineEdit *lineEdit_CH_MASK;
    QPushButton *WRITE_CFD_SATR;
    QLineEdit *lineEdit_BOARD_STATUS;
    QPushButton *VIEW_OR_GATE;
    QPushButton *VIEW_CH_MASK;
    QGroupBox *Radoutcontrol;
    QGridLayout *gridLayout_7;
    QPushButton *VIEW_ADC1_OFFSET_3;
    QLabel *Data_bunc_freq;
    QLabel *Data_bunch_pat;
    QPushButton *WRITE_ADC_RANGE_3;
    QLineEdit *lineEdit_trg_cont_val;
    QPushButton *VIEW_BCID_delay;
    QPushButton *WRITE_PAR;
    QLabel *trg_cont_pat_2;
    QPushButton *VIEW_ADC1_RANGE_3;
    QPushButton *VIEW_ADC1_RANGE_4;
    QPushButton *WRITE_DET;
    QLabel *trg_cont_value;
    QLineEdit *lineEdit_max_RHD_pqyload;
    QPushButton *WRITE_ADC_ZERO_3;
    QLabel *Trg_cont_pat_1;
    QLabel *BCIDdelay;
    QLabel *PAR;
    QPushButton *VIEW_ADC0_RANGE_5;
    QPushButton *WRITE_MAX_RHD_PAYLOAD;
    QLineEdit *lineEdit_DCID_delay;
    QPushButton *VIEW_ADC1_RANGE_5;
    QPushButton *VIEW_ADC0_RANGE_4;
    QLineEdit *lineEdit_trg_bunch_freq;
    QLabel *Trigg_freq_offset;
    QPushButton *WRITE_FEE_ID;
    QPushButton *WRITE_ADC1_OFFSET_3;
    QLineEdit *lineEdit_dat_freq_offset;
    QLineEdit *lineEdit_dat_bunch_freq;
    QLabel *Data_freq_offset;
    QLineEdit *lineEdit_trg_freq_offset;
    QPushButton *WRITE_ADC1_RANGE_3;
    QLineEdit *lineEdit_trigger_respond_mask;
    QLabel *MAx_RDH_payload;
    QLineEdit *lineEdit_CRU_trigger_compar_delay;
    QPushButton *VIEW_FEE_ID;
    QPushButton *WRITE_ADC_RANGE_4;
    QPushButton *WRITE_ADC1_RANGE_4;
    QPushButton *VIEW_CRU_trg;
    QLineEdit *lineEdit_Det_field;
    QLineEdit *lineEdit_data_bunch_pattern;
    QLineEdit *lineEdit_FEE_ID;
    QPushButton *VIEW_DET;
    QLineEdit *lineEdit_PAR;
    QPushButton *VIEW_ADC_ZERO_4;
    QPushButton *VIEW_MAX_RHD_PAYLOAD;
    QPushButton *WRITE_CRU_trg;
    QLabel *Trg_bunch_freq;
    QLabel *FEE_ID;
    QPushButton *WRITE_ADC_DELAY_3;
    QPushButton *WRITE_ADC1_RANGE_5;
    QLabel *Trigger_respond_mask;
    QLineEdit *lineEdit_trg_cont_pat_2;
    QPushButton *VIEW_ADC0_RANGE_3;
    QPushButton *WRITE_BCID_delay;
    QLineEdit *lineEdit_trg_cont_pat_1;
    QPushButton *VIEW_PAR;
    QLabel *DET_FIELD;
    QPushButton *WRITE_ADC_RANGE_2;
    QPushButton *VIEW_ADC_DELAY_3;
    QLabel *CRU_trg_comp_dal;
    QGroupBox *GBTstatusbits;
    QGridLayout *gridLayout_8;
    QLabel *label_48;
    QLabel *RX_phase_error;
    QLCDNumber *LCD_RX_PHASE_ERROR;
    QLCDNumber *lcdNumber_13;
    QLabel *label_45;
    QLabel *label_44;
    QLCDNumber *lcdNumber_16;
    QLCDNumber *lcdNumber_20;
    QLabel *label_47;
    QLCDNumber *lcdNumber_15;
    QLabel *label_46;
    QLCDNumber *lcdNumber_17;
    QLCDNumber *lcdNumber_14;
    QLCDNumber *lcdNumber_21;
    QLabel *label_40;
    QLabel *label_39;
    QLCDNumber *lcdNumber_19;
    QLabel *label_43;
    QLabel *label_42;
    QLCDNumber *lcdNumber_18;
    QGroupBox *Readoutstatus;
    QGridLayout *gridLayout_9;
    QLabel *label_54;
    QLCDNumber *lcdNumber_2;
    QLabel *label_52;
    QLCDNumber *lcdNumber_3;
    QLabel *BCID_sync_mode;
    QLCDNumber *LCD_BCiD_SYNC_MODE;
    QLabel *label_55;
    QLCDNumber *lcdNumber_9;
    QLabel *Selector_fifo_count;
    QLCDNumber *LCD_selector_fifo_count;
    QLabel *RAW_FIFO_count;
    QLCDNumber *LCD_Raw_fifo_count;
    QLabel *Selector_first;
    QLCDNumber *LCD_selector_first;
    QLabel *Selector_last;
    QLCDNumber *LCD_selector_last;
    QLabel *selector_hits;
    QLCDNumber *LCD_selector_hits;
    QLabel *Readout_rate;
    QLCDNumber *LCD_readout_rate;
    QLabel *RX_phase;
    QLCDNumber *LCD_RX_phase;
    QGroupBox *Datagenerator;
    QVBoxLayout *verticalLayout_4;
    QPushButton *No_gen_dat;
    QPushButton *main_gen;
    QPushButton *tx_gen;
    QGroupBox *PM_BOARD_STATUS;
    QGridLayout *gridLayout_10;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_11;
    QLabel *LOCK320;
    QLCDNumber *lcdNumber_8;
    QLabel *LOCK300_2;
    QLabel *LOCK300_1;
    QLCDNumber *lcdNumber_12;
    QLabel *GBTRXERR;
    QLabel *GBTRX_READY;
    QLCDNumber *lcdNumber;
    QLabel *BC_JUMP3;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_5;
    QLabel *BC_JUMP2;
    QLabel *BC_JUMP1;
    QLCDNumber *lcdNumber_4;
    QLabel *LOCK300_3;
    QPushButton *pushButton;
    QGroupBox *Current;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QLCDNumber *PM_Number;
    QLabel *label_16;
    QLCDNumber *Ch_Number;
    QGroupBox *Update_writeALL;
    QGridLayout *gridLayout;
    QPushButton *VIEW_ADC_ZERO_2;
    QPushButton *VIEW_ADC_ZERO_3;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *VIEW_ADC_ZERO_7;
    QPushButton *VIEW_ADC_ZERO_8;
    QPushButton *WRITE_ADC_ZERO_4;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *VIEW_ADC_ZERO_5;
    QPushButton *WRITE_ADC_ZERO_2;
    QPushButton *WRITE_ADC_ZERO_5;
    QLabel *label_6;
    QPushButton *VIEW_ADC_ZERO_6;
    QPushButton *TCM;
    QTableWidget *tableWidget;
    QPushButton *FTM;
    QPushButton *Refresh;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1133, 771);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1100, 720));
        MainWindow->setMaximumSize(QSize(1600, 1080));
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setIconSize(QSize(16, 16));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/skins/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/skins/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon1);
        actionLight_theme = new QAction(MainWindow);
        actionLight_theme->setObjectName(QStringLiteral("actionLight_theme"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/skins/light.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLight_theme->setIcon(icon2);
        actionDark_theme = new QAction(MainWindow);
        actionDark_theme->setObjectName(QStringLiteral("actionDark_theme"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/skins/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDark_theme->setIcon(icon3);
        actionClear_all = new QAction(MainWindow);
        actionClear_all->setObjectName(QStringLiteral("actionClear_all"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/skins/Clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_all->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_37 = new QLabel(centralWidget);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(1720, 670, 210, 50));
        label_37->setStyleSheet(QLatin1String("font: 75 13pt \"Century Schoolbook L\";\n"
"color: rgb(100, 150, 6);"));
        label_37->setFrameShape(QFrame::Box);
        label_41 = new QLabel(centralWidget);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(1720, 620, 210, 50));
        label_41->setStyleSheet(QLatin1String("font: 75 13pt \"Century Schoolbook L\";\n"
"color: rgb(100, 150, 6);"));
        label_41->setFrameShape(QFrame::NoFrame);
        PM_selection = new QGroupBox(centralWidget);
        PM_selection->setObjectName(QStringLiteral("PM_selection"));
        PM_selection->setGeometry(QRect(10, 10, 591, 64));
        PM_selection->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        horizontalLayout_2 = new QHBoxLayout(PM_selection);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        PM_selector_1 = new QPushButton(PM_selection);
        PM_selector_1->setObjectName(QStringLiteral("PM_selector_1"));
        PM_selector_1->setMinimumSize(QSize(30, 0));
        PM_selector_1->setMaximumSize(QSize(30, 30));
        QFont font;
        font.setFamily(QStringLiteral("Century Schoolbook L"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        PM_selector_1->setFont(font);
        PM_selector_1->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_1->setMouseTracking(true);
        PM_selector_1->setStyleSheet(QStringLiteral(""));
        PM_selector_1->setCheckable(true);
        PM_selector_1->setChecked(false);
        PM_selector_1->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_1);

        PM_selector_2 = new QPushButton(PM_selection);
        PM_selector_2->setObjectName(QStringLiteral("PM_selector_2"));
        PM_selector_2->setMinimumSize(QSize(30, 0));
        PM_selector_2->setMaximumSize(QSize(30, 30));
        PM_selector_2->setFont(font);
        PM_selector_2->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_2->setMouseTracking(true);
        PM_selector_2->setStyleSheet(QStringLiteral(""));
        PM_selector_2->setCheckable(true);
        PM_selector_2->setChecked(false);
        PM_selector_2->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_2);

        PM_selector_3 = new QPushButton(PM_selection);
        PM_selector_3->setObjectName(QStringLiteral("PM_selector_3"));
        PM_selector_3->setMinimumSize(QSize(30, 0));
        PM_selector_3->setMaximumSize(QSize(30, 30));
        PM_selector_3->setFont(font);
        PM_selector_3->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_3->setMouseTracking(true);
        PM_selector_3->setStyleSheet(QStringLiteral(""));
        PM_selector_3->setCheckable(true);
        PM_selector_3->setChecked(false);
        PM_selector_3->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_3);

        PM_selector_4 = new QPushButton(PM_selection);
        PM_selector_4->setObjectName(QStringLiteral("PM_selector_4"));
        PM_selector_4->setMinimumSize(QSize(30, 0));
        PM_selector_4->setMaximumSize(QSize(30, 30));
        PM_selector_4->setFont(font);
        PM_selector_4->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_4->setMouseTracking(true);
        PM_selector_4->setStyleSheet(QStringLiteral(""));
        PM_selector_4->setCheckable(true);
        PM_selector_4->setChecked(false);
        PM_selector_4->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_4);

        PM_selector_5 = new QPushButton(PM_selection);
        PM_selector_5->setObjectName(QStringLiteral("PM_selector_5"));
        PM_selector_5->setMinimumSize(QSize(30, 0));
        PM_selector_5->setMaximumSize(QSize(30, 30));
        PM_selector_5->setFont(font);
        PM_selector_5->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_5->setMouseTracking(true);
        PM_selector_5->setStyleSheet(QStringLiteral(""));
        PM_selector_5->setCheckable(true);
        PM_selector_5->setChecked(false);
        PM_selector_5->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_5);

        PM_selector_6 = new QPushButton(PM_selection);
        PM_selector_6->setObjectName(QStringLiteral("PM_selector_6"));
        PM_selector_6->setMinimumSize(QSize(30, 0));
        PM_selector_6->setMaximumSize(QSize(30, 30));
        PM_selector_6->setFont(font);
        PM_selector_6->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_6->setMouseTracking(true);
        PM_selector_6->setStyleSheet(QStringLiteral(""));
        PM_selector_6->setCheckable(true);
        PM_selector_6->setChecked(false);
        PM_selector_6->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_6);

        PM_selector_7 = new QPushButton(PM_selection);
        PM_selector_7->setObjectName(QStringLiteral("PM_selector_7"));
        PM_selector_7->setMinimumSize(QSize(30, 0));
        PM_selector_7->setMaximumSize(QSize(30, 30));
        PM_selector_7->setFont(font);
        PM_selector_7->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_7->setMouseTracking(true);
        PM_selector_7->setStyleSheet(QStringLiteral(""));
        PM_selector_7->setCheckable(true);
        PM_selector_7->setChecked(false);
        PM_selector_7->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_7);

        PM_selector_8 = new QPushButton(PM_selection);
        PM_selector_8->setObjectName(QStringLiteral("PM_selector_8"));
        PM_selector_8->setMinimumSize(QSize(30, 0));
        PM_selector_8->setMaximumSize(QSize(30, 30));
        PM_selector_8->setFont(font);
        PM_selector_8->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_8->setMouseTracking(true);
        PM_selector_8->setStyleSheet(QStringLiteral(""));
        PM_selector_8->setCheckable(true);
        PM_selector_8->setChecked(false);
        PM_selector_8->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_8);

        PM_selector_9 = new QPushButton(PM_selection);
        PM_selector_9->setObjectName(QStringLiteral("PM_selector_9"));
        PM_selector_9->setMinimumSize(QSize(30, 0));
        PM_selector_9->setMaximumSize(QSize(30, 30));
        PM_selector_9->setFont(font);
        PM_selector_9->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_9->setMouseTracking(true);
        PM_selector_9->setStyleSheet(QStringLiteral(""));
        PM_selector_9->setCheckable(true);
        PM_selector_9->setChecked(false);
        PM_selector_9->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_9);

        PM_selector_10 = new QPushButton(PM_selection);
        PM_selector_10->setObjectName(QStringLiteral("PM_selector_10"));
        PM_selector_10->setMinimumSize(QSize(30, 0));
        PM_selector_10->setMaximumSize(QSize(30, 30));
        PM_selector_10->setFont(font);
        PM_selector_10->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_10->setMouseTracking(true);
        PM_selector_10->setStyleSheet(QStringLiteral(""));
        PM_selector_10->setCheckable(true);
        PM_selector_10->setChecked(false);
        PM_selector_10->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_10);

        PM_selector_11 = new QPushButton(PM_selection);
        PM_selector_11->setObjectName(QStringLiteral("PM_selector_11"));
        PM_selector_11->setMinimumSize(QSize(30, 0));
        PM_selector_11->setMaximumSize(QSize(30, 30));
        PM_selector_11->setFont(font);
        PM_selector_11->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_11->setMouseTracking(true);
        PM_selector_11->setStyleSheet(QStringLiteral(""));
        PM_selector_11->setCheckable(true);
        PM_selector_11->setChecked(false);
        PM_selector_11->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_11);

        PM_selector_12 = new QPushButton(PM_selection);
        PM_selector_12->setObjectName(QStringLiteral("PM_selector_12"));
        PM_selector_12->setMinimumSize(QSize(30, 0));
        PM_selector_12->setMaximumSize(QSize(30, 30));
        PM_selector_12->setFont(font);
        PM_selector_12->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_12->setMouseTracking(true);
        PM_selector_12->setStyleSheet(QStringLiteral(""));
        PM_selector_12->setCheckable(true);
        PM_selector_12->setChecked(false);
        PM_selector_12->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_12);

        PM_selector_13 = new QPushButton(PM_selection);
        PM_selector_13->setObjectName(QStringLiteral("PM_selector_13"));
        PM_selector_13->setMinimumSize(QSize(30, 0));
        PM_selector_13->setMaximumSize(QSize(30, 30));
        PM_selector_13->setFont(font);
        PM_selector_13->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_13->setMouseTracking(true);
        PM_selector_13->setStyleSheet(QStringLiteral(""));
        PM_selector_13->setCheckable(true);
        PM_selector_13->setChecked(false);
        PM_selector_13->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_13);

        PM_selector_14 = new QPushButton(PM_selection);
        PM_selector_14->setObjectName(QStringLiteral("PM_selector_14"));
        PM_selector_14->setMinimumSize(QSize(30, 0));
        PM_selector_14->setMaximumSize(QSize(30, 30));
        PM_selector_14->setFont(font);
        PM_selector_14->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_14->setMouseTracking(true);
        PM_selector_14->setStyleSheet(QStringLiteral(""));
        PM_selector_14->setCheckable(true);
        PM_selector_14->setChecked(false);
        PM_selector_14->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_14);

        PM_selector_15 = new QPushButton(PM_selection);
        PM_selector_15->setObjectName(QStringLiteral("PM_selector_15"));
        PM_selector_15->setMinimumSize(QSize(30, 0));
        PM_selector_15->setMaximumSize(QSize(30, 30));
        PM_selector_15->setFont(font);
        PM_selector_15->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_15->setMouseTracking(true);
        PM_selector_15->setStyleSheet(QStringLiteral(""));
        PM_selector_15->setCheckable(true);
        PM_selector_15->setChecked(false);
        PM_selector_15->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_15);

        PM_selector_16 = new QPushButton(PM_selection);
        PM_selector_16->setObjectName(QStringLiteral("PM_selector_16"));
        PM_selector_16->setMinimumSize(QSize(30, 0));
        PM_selector_16->setMaximumSize(QSize(30, 30));
        PM_selector_16->setFont(font);
        PM_selector_16->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_16->setMouseTracking(true);
        PM_selector_16->setStyleSheet(QStringLiteral(""));
        PM_selector_16->setCheckable(true);
        PM_selector_16->setChecked(false);
        PM_selector_16->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_16);

        PM_selector_17 = new QPushButton(PM_selection);
        PM_selector_17->setObjectName(QStringLiteral("PM_selector_17"));
        PM_selector_17->setMinimumSize(QSize(30, 0));
        PM_selector_17->setMaximumSize(QSize(30, 30));
        PM_selector_17->setFont(font);
        PM_selector_17->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_17->setMouseTracking(true);
        PM_selector_17->setStyleSheet(QStringLiteral(""));
        PM_selector_17->setCheckable(true);
        PM_selector_17->setChecked(false);
        PM_selector_17->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_17);

        PM_selector_18 = new QPushButton(PM_selection);
        PM_selector_18->setObjectName(QStringLiteral("PM_selector_18"));
        PM_selector_18->setMinimumSize(QSize(30, 0));
        PM_selector_18->setMaximumSize(QSize(30, 30));
        PM_selector_18->setFont(font);
        PM_selector_18->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_18->setMouseTracking(true);
        PM_selector_18->setStyleSheet(QStringLiteral(""));
        PM_selector_18->setCheckable(true);
        PM_selector_18->setChecked(false);
        PM_selector_18->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_18);

        PM_selector_19 = new QPushButton(PM_selection);
        PM_selector_19->setObjectName(QStringLiteral("PM_selector_19"));
        PM_selector_19->setMinimumSize(QSize(30, 0));
        PM_selector_19->setMaximumSize(QSize(30, 30));
        PM_selector_19->setFont(font);
        PM_selector_19->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_19->setMouseTracking(true);
        PM_selector_19->setStyleSheet(QStringLiteral(""));
        PM_selector_19->setCheckable(true);
        PM_selector_19->setChecked(false);
        PM_selector_19->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_19);

        PM_selector_20 = new QPushButton(PM_selection);
        PM_selector_20->setObjectName(QStringLiteral("PM_selector_20"));
        PM_selector_20->setMinimumSize(QSize(30, 0));
        PM_selector_20->setMaximumSize(QSize(30, 30));
        PM_selector_20->setFont(font);
        PM_selector_20->setCursor(QCursor(Qt::PointingHandCursor));
        PM_selector_20->setMouseTracking(true);
        PM_selector_20->setStyleSheet(QStringLiteral(""));
        PM_selector_20->setCheckable(true);
        PM_selector_20->setChecked(false);
        PM_selector_20->setFlat(false);

        horizontalLayout_2->addWidget(PM_selector_20);

        Ch_selection = new QGroupBox(centralWidget);
        Ch_selection->setObjectName(QStringLiteral("Ch_selection"));
        Ch_selection->setGeometry(QRect(10, 90, 370, 64));
        Ch_selection->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        horizontalLayout_3 = new QHBoxLayout(Ch_selection);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        Channel_selector_1 = new QPushButton(Ch_selection);
        Channel_selector_1->setObjectName(QStringLiteral("Channel_selector_1"));
        Channel_selector_1->setMinimumSize(QSize(30, 30));
        Channel_selector_1->setMaximumSize(QSize(30, 30));
        Channel_selector_1->setFont(font);
        Channel_selector_1->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_1->setMouseTracking(true);
        Channel_selector_1->setStyleSheet(QStringLiteral(""));
        Channel_selector_1->setCheckable(true);
        Channel_selector_1->setChecked(false);
        Channel_selector_1->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_1);

        Channel_selector_2 = new QPushButton(Ch_selection);
        Channel_selector_2->setObjectName(QStringLiteral("Channel_selector_2"));
        Channel_selector_2->setMinimumSize(QSize(30, 30));
        Channel_selector_2->setMaximumSize(QSize(30, 30));
        Channel_selector_2->setFont(font);
        Channel_selector_2->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_2->setMouseTracking(true);
        Channel_selector_2->setStyleSheet(QStringLiteral(""));
        Channel_selector_2->setCheckable(true);
        Channel_selector_2->setChecked(false);
        Channel_selector_2->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_2);

        Channel_selector_3 = new QPushButton(Ch_selection);
        Channel_selector_3->setObjectName(QStringLiteral("Channel_selector_3"));
        Channel_selector_3->setMinimumSize(QSize(30, 30));
        Channel_selector_3->setMaximumSize(QSize(30, 30));
        Channel_selector_3->setFont(font);
        Channel_selector_3->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_3->setMouseTracking(true);
        Channel_selector_3->setStyleSheet(QStringLiteral(""));
        Channel_selector_3->setCheckable(true);
        Channel_selector_3->setChecked(false);
        Channel_selector_3->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_3);

        Channel_selector_4 = new QPushButton(Ch_selection);
        Channel_selector_4->setObjectName(QStringLiteral("Channel_selector_4"));
        Channel_selector_4->setMinimumSize(QSize(30, 30));
        Channel_selector_4->setMaximumSize(QSize(30, 30));
        Channel_selector_4->setFont(font);
        Channel_selector_4->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_4->setMouseTracking(true);
        Channel_selector_4->setStyleSheet(QStringLiteral(""));
        Channel_selector_4->setCheckable(true);
        Channel_selector_4->setChecked(false);
        Channel_selector_4->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_4);

        Channel_selector_5 = new QPushButton(Ch_selection);
        Channel_selector_5->setObjectName(QStringLiteral("Channel_selector_5"));
        Channel_selector_5->setMinimumSize(QSize(30, 30));
        Channel_selector_5->setMaximumSize(QSize(30, 30));
        Channel_selector_5->setFont(font);
        Channel_selector_5->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_5->setMouseTracking(true);
        Channel_selector_5->setStyleSheet(QStringLiteral(""));
        Channel_selector_5->setCheckable(true);
        Channel_selector_5->setChecked(false);
        Channel_selector_5->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_5);

        Channel_selector_6 = new QPushButton(Ch_selection);
        Channel_selector_6->setObjectName(QStringLiteral("Channel_selector_6"));
        Channel_selector_6->setMinimumSize(QSize(30, 30));
        Channel_selector_6->setMaximumSize(QSize(30, 30));
        Channel_selector_6->setFont(font);
        Channel_selector_6->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_6->setMouseTracking(true);
        Channel_selector_6->setStyleSheet(QStringLiteral(""));
        Channel_selector_6->setCheckable(true);
        Channel_selector_6->setChecked(false);
        Channel_selector_6->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_6);

        Channel_selector_7 = new QPushButton(Ch_selection);
        Channel_selector_7->setObjectName(QStringLiteral("Channel_selector_7"));
        Channel_selector_7->setMinimumSize(QSize(30, 30));
        Channel_selector_7->setMaximumSize(QSize(30, 30));
        Channel_selector_7->setFont(font);
        Channel_selector_7->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_7->setMouseTracking(true);
        Channel_selector_7->setStyleSheet(QStringLiteral(""));
        Channel_selector_7->setCheckable(true);
        Channel_selector_7->setChecked(false);
        Channel_selector_7->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_7);

        Channel_selector_8 = new QPushButton(Ch_selection);
        Channel_selector_8->setObjectName(QStringLiteral("Channel_selector_8"));
        Channel_selector_8->setMinimumSize(QSize(30, 30));
        Channel_selector_8->setMaximumSize(QSize(30, 30));
        Channel_selector_8->setFont(font);
        Channel_selector_8->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_8->setMouseTracking(true);
        Channel_selector_8->setStyleSheet(QStringLiteral(""));
        Channel_selector_8->setCheckable(true);
        Channel_selector_8->setChecked(false);
        Channel_selector_8->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_8);

        Channel_selector_9 = new QPushButton(Ch_selection);
        Channel_selector_9->setObjectName(QStringLiteral("Channel_selector_9"));
        Channel_selector_9->setMinimumSize(QSize(30, 30));
        Channel_selector_9->setMaximumSize(QSize(30, 30));
        Channel_selector_9->setFont(font);
        Channel_selector_9->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_9->setMouseTracking(true);
        Channel_selector_9->setStyleSheet(QStringLiteral(""));
        Channel_selector_9->setCheckable(true);
        Channel_selector_9->setChecked(false);
        Channel_selector_9->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_9);

        Channel_selector_10 = new QPushButton(Ch_selection);
        Channel_selector_10->setObjectName(QStringLiteral("Channel_selector_10"));
        Channel_selector_10->setMinimumSize(QSize(30, 30));
        Channel_selector_10->setMaximumSize(QSize(30, 30));
        Channel_selector_10->setFont(font);
        Channel_selector_10->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_10->setMouseTracking(true);
        Channel_selector_10->setStyleSheet(QStringLiteral(""));
        Channel_selector_10->setCheckable(true);
        Channel_selector_10->setChecked(false);
        Channel_selector_10->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_10);

        Channel_selector_11 = new QPushButton(Ch_selection);
        Channel_selector_11->setObjectName(QStringLiteral("Channel_selector_11"));
        Channel_selector_11->setMinimumSize(QSize(30, 30));
        Channel_selector_11->setMaximumSize(QSize(30, 30));
        Channel_selector_11->setFont(font);
        Channel_selector_11->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_11->setMouseTracking(true);
        Channel_selector_11->setStyleSheet(QStringLiteral(""));
        Channel_selector_11->setCheckable(true);
        Channel_selector_11->setChecked(false);
        Channel_selector_11->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_11);

        Channel_selector_12 = new QPushButton(Ch_selection);
        Channel_selector_12->setObjectName(QStringLiteral("Channel_selector_12"));
        Channel_selector_12->setMinimumSize(QSize(30, 30));
        Channel_selector_12->setMaximumSize(QSize(30, 30));
        Channel_selector_12->setFont(font);
        Channel_selector_12->setCursor(QCursor(Qt::PointingHandCursor));
        Channel_selector_12->setMouseTracking(true);
        Channel_selector_12->setStyleSheet(QStringLiteral(""));
        Channel_selector_12->setCheckable(true);
        Channel_selector_12->setChecked(false);
        Channel_selector_12->setFlat(false);

        horizontalLayout_3->addWidget(Channel_selector_12);

        Resetcontrol = new QGroupBox(centralWidget);
        Resetcontrol->setObjectName(QStringLiteral("Resetcontrol"));
        Resetcontrol->setGeometry(QRect(10, 220, 161, 201));
        Resetcontrol->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        Resetcontrol->setCheckable(false);
        verticalLayout = new QVBoxLayout(Resetcontrol);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Reset_dropping = new QPushButton(Resetcontrol);
        Reset_dropping->setObjectName(QStringLiteral("Reset_dropping"));
        Reset_dropping->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(Reset_dropping);

        Res_dat = new QPushButton(Resetcontrol);
        Res_dat->setObjectName(QStringLiteral("Res_dat"));
        Res_dat->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(Res_dat);

        Res_gbt_err = new QPushButton(Resetcontrol);
        Res_gbt_err->setObjectName(QStringLiteral("Res_gbt_err"));
        Res_gbt_err->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(Res_gbt_err);

        res_gbt = new QPushButton(Resetcontrol);
        res_gbt->setObjectName(QStringLiteral("res_gbt"));
        res_gbt->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(res_gbt);

        Reset_orbit_sync = new QPushButton(Resetcontrol);
        Reset_orbit_sync->setObjectName(QStringLiteral("Reset_orbit_sync"));
        Reset_orbit_sync->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(Reset_orbit_sync);

        res_rx = new QPushButton(Resetcontrol);
        res_rx->setObjectName(QStringLiteral("res_rx"));
        res_rx->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(res_rx);

        Readoutcommand = new QGroupBox(centralWidget);
        Readoutcommand->setObjectName(QStringLiteral("Readoutcommand"));
        Readoutcommand->setGeometry(QRect(10, 640, 160, 80));
        Readoutcommand->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(Readoutcommand);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        soc = new QPushButton(Readoutcommand);
        soc->setObjectName(QStringLiteral("soc"));
        soc->setCursor(QCursor(Qt::PointingHandCursor));
        soc->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(soc, 0, 0, 1, 1);

        eoc = new QPushButton(Readoutcommand);
        eoc->setObjectName(QStringLiteral("eoc"));
        eoc->setCursor(QCursor(Qt::PointingHandCursor));
        eoc->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(eoc, 0, 1, 1, 1);

        sot = new QPushButton(Readoutcommand);
        sot->setObjectName(QStringLiteral("sot"));
        sot->setCursor(QCursor(Qt::PointingHandCursor));
        sot->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(sot, 1, 0, 1, 1);

        eot = new QPushButton(Readoutcommand);
        eot->setObjectName(QStringLiteral("eot"));
        eot->setCursor(QCursor(Qt::PointingHandCursor));
        eot->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(eot, 1, 1, 1, 1);

        Triggergenerator = new QGroupBox(centralWidget);
        Triggergenerator->setObjectName(QStringLiteral("Triggergenerator"));
        Triggergenerator->setGeometry(QRect(10, 550, 160, 81));
        Triggergenerator->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(Triggergenerator);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        No_get_trg = new QPushButton(Triggergenerator);
        No_get_trg->setObjectName(QStringLiteral("No_get_trg"));
        No_get_trg->setCursor(QCursor(Qt::PointingHandCursor));
        No_get_trg->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(No_get_trg);

        continuous = new QPushButton(Triggergenerator);
        continuous->setObjectName(QStringLiteral("continuous"));
        continuous->setCursor(QCursor(Qt::PointingHandCursor));
        continuous->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(continuous);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 150, 191, 101));
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        LE_trg_single_val = new QLineEdit(groupBox);
        LE_trg_single_val->setObjectName(QStringLiteral("LE_trg_single_val"));
        LE_trg_single_val->setMinimumSize(QSize(0, 25));
        LE_trg_single_val->setMaximumSize(QSize(16777215, 25));
        LE_trg_single_val->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(LE_trg_single_val);

        TRG_single_val_cmd = new QPushButton(groupBox);
        TRG_single_val_cmd->setObjectName(QStringLiteral("TRG_single_val_cmd"));
        TRG_single_val_cmd->setMinimumSize(QSize(25, 25));
        TRG_single_val_cmd->setMaximumSize(QSize(25, 25));
        TRG_single_val_cmd->setCursor(QCursor(Qt::PointingHandCursor));
        TRG_single_val_cmd->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/skins/img_235563.png"), QSize(), QIcon::Normal, QIcon::Off);
        TRG_single_val_cmd->setIcon(icon5);
        TRG_single_val_cmd->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(TRG_single_val_cmd);

        PMcontrol = new QGroupBox(centralWidget);
        PMcontrol->setObjectName(QStringLiteral("PMcontrol"));
        PMcontrol->setEnabled(true);
        PMcontrol->setGeometry(QRect(410, 90, 210, 251));
        PMcontrol->setStyleSheet(QStringLiteral(""));
        PMcontrol->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        PMcontrol->setCheckable(true);
        gridLayout_4 = new QGridLayout(PMcontrol);
        gridLayout_4->setSpacing(1);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        CFD_TRESHOLD = new QLabel(PMcontrol);
        CFD_TRESHOLD->setObjectName(QStringLiteral("CFD_TRESHOLD"));

        gridLayout_4->addWidget(CFD_TRESHOLD, 7, 0, 1, 1);

        ADC_ZERO = new QLabel(PMcontrol);
        ADC_ZERO->setObjectName(QStringLiteral("ADC_ZERO"));
        ADC_ZERO->setMaximumSize(QSize(16777215, 20));
        ADC_ZERO->setSizeIncrement(QSize(0, 20));
        ADC_ZERO->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(ADC_ZERO, 0, 0, 1, 1);

        ADC1_OFFSET = new QLabel(PMcontrol);
        ADC1_OFFSET->setObjectName(QStringLiteral("ADC1_OFFSET"));
        ADC1_OFFSET->setMaximumSize(QSize(16777215, 20));
        ADC1_OFFSET->setSizeIncrement(QSize(0, 20));
        ADC1_OFFSET->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(ADC1_OFFSET, 3, 0, 1, 1);

        ADC0_RANGE = new QLabel(PMcontrol);
        ADC0_RANGE->setObjectName(QStringLiteral("ADC0_RANGE"));
        ADC0_RANGE->setMaximumSize(QSize(16777215, 20));
        ADC0_RANGE->setSizeIncrement(QSize(0, 20));
        ADC0_RANGE->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(ADC0_RANGE, 4, 0, 1, 1);

        TIME_ALIN = new QLabel(PMcontrol);
        TIME_ALIN->setObjectName(QStringLiteral("TIME_ALIN"));
        TIME_ALIN->setMaximumSize(QSize(16777215, 20));
        TIME_ALIN->setSizeIncrement(QSize(0, 20));
        TIME_ALIN->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(TIME_ALIN, 6, 0, 1, 1);

        WRITE_TIME_ALIN = new QPushButton(PMcontrol);
        WRITE_TIME_ALIN->setObjectName(QStringLiteral("WRITE_TIME_ALIN"));
        sizePolicy.setHeightForWidth(WRITE_TIME_ALIN->sizePolicy().hasHeightForWidth());
        WRITE_TIME_ALIN->setSizePolicy(sizePolicy);
        WRITE_TIME_ALIN->setMinimumSize(QSize(25, 25));
        WRITE_TIME_ALIN->setMaximumSize(QSize(25, 25));
        WRITE_TIME_ALIN->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_TIME_ALIN->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/skins/Write.png"), QSize(), QIcon::Normal, QIcon::Off);
        WRITE_TIME_ALIN->setIcon(icon6);
        WRITE_TIME_ALIN->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_TIME_ALIN, 6, 3, 1, 1);

        ADC_DELAY = new QLabel(PMcontrol);
        ADC_DELAY->setObjectName(QStringLiteral("ADC_DELAY"));
        ADC_DELAY->setMaximumSize(QSize(16777215, 20));
        ADC_DELAY->setSizeIncrement(QSize(0, 20));
        ADC_DELAY->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(ADC_DELAY, 1, 0, 1, 1);

        VIEW_ADC1_OFFSET = new QPushButton(PMcontrol);
        VIEW_ADC1_OFFSET->setObjectName(QStringLiteral("VIEW_ADC1_OFFSET"));
        VIEW_ADC1_OFFSET->setEnabled(true);
        sizePolicy.setHeightForWidth(VIEW_ADC1_OFFSET->sizePolicy().hasHeightForWidth());
        VIEW_ADC1_OFFSET->setSizePolicy(sizePolicy);
        VIEW_ADC1_OFFSET->setMinimumSize(QSize(25, 25));
        VIEW_ADC1_OFFSET->setMaximumSize(QSize(25, 25));
        VIEW_ADC1_OFFSET->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC1_OFFSET->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/skins/eyeball-icon-png-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        VIEW_ADC1_OFFSET->setIcon(icon7);
        VIEW_ADC1_OFFSET->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_ADC1_OFFSET, 3, 2, 1, 1);

        WRITE_ADC0_OFFSET = new QPushButton(PMcontrol);
        WRITE_ADC0_OFFSET->setObjectName(QStringLiteral("WRITE_ADC0_OFFSET"));
        sizePolicy.setHeightForWidth(WRITE_ADC0_OFFSET->sizePolicy().hasHeightForWidth());
        WRITE_ADC0_OFFSET->setSizePolicy(sizePolicy);
        WRITE_ADC0_OFFSET->setMinimumSize(QSize(25, 25));
        WRITE_ADC0_OFFSET->setMaximumSize(QSize(25, 25));
        WRITE_ADC0_OFFSET->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC0_OFFSET->setStyleSheet(QStringLiteral(""));
        WRITE_ADC0_OFFSET->setIcon(icon6);
        WRITE_ADC0_OFFSET->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_ADC0_OFFSET, 2, 3, 1, 1);

        VIEW_ADC1_RANGE = new QPushButton(PMcontrol);
        VIEW_ADC1_RANGE->setObjectName(QStringLiteral("VIEW_ADC1_RANGE"));
        sizePolicy.setHeightForWidth(VIEW_ADC1_RANGE->sizePolicy().hasHeightForWidth());
        VIEW_ADC1_RANGE->setSizePolicy(sizePolicy);
        VIEW_ADC1_RANGE->setMinimumSize(QSize(25, 25));
        VIEW_ADC1_RANGE->setMaximumSize(QSize(25, 25));
        VIEW_ADC1_RANGE->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC1_RANGE->setStyleSheet(QStringLiteral(""));
        VIEW_ADC1_RANGE->setIcon(icon7);
        VIEW_ADC1_RANGE->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_ADC1_RANGE, 5, 2, 1, 1);

        VIEW_TIME_ALIN = new QPushButton(PMcontrol);
        VIEW_TIME_ALIN->setObjectName(QStringLiteral("VIEW_TIME_ALIN"));
        sizePolicy.setHeightForWidth(VIEW_TIME_ALIN->sizePolicy().hasHeightForWidth());
        VIEW_TIME_ALIN->setSizePolicy(sizePolicy);
        VIEW_TIME_ALIN->setMinimumSize(QSize(25, 25));
        VIEW_TIME_ALIN->setMaximumSize(QSize(25, 25));
        VIEW_TIME_ALIN->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_TIME_ALIN->setStyleSheet(QStringLiteral(""));
        VIEW_TIME_ALIN->setIcon(icon7);
        VIEW_TIME_ALIN->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_TIME_ALIN, 6, 2, 1, 1);

        ADC1_RANGE = new QLabel(PMcontrol);
        ADC1_RANGE->setObjectName(QStringLiteral("ADC1_RANGE"));
        ADC1_RANGE->setMaximumSize(QSize(16777215, 20));
        ADC1_RANGE->setSizeIncrement(QSize(0, 20));
        ADC1_RANGE->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(ADC1_RANGE, 5, 0, 1, 1);

        WRITE_ADC1_OFFSET = new QPushButton(PMcontrol);
        WRITE_ADC1_OFFSET->setObjectName(QStringLiteral("WRITE_ADC1_OFFSET"));
        sizePolicy.setHeightForWidth(WRITE_ADC1_OFFSET->sizePolicy().hasHeightForWidth());
        WRITE_ADC1_OFFSET->setSizePolicy(sizePolicy);
        WRITE_ADC1_OFFSET->setMinimumSize(QSize(25, 25));
        WRITE_ADC1_OFFSET->setMaximumSize(QSize(25, 25));
        WRITE_ADC1_OFFSET->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC1_OFFSET->setStyleSheet(QStringLiteral(""));
        WRITE_ADC1_OFFSET->setIcon(icon6);
        WRITE_ADC1_OFFSET->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_ADC1_OFFSET, 3, 3, 1, 1);

        VIEW_ADC0_OFFSET = new QPushButton(PMcontrol);
        VIEW_ADC0_OFFSET->setObjectName(QStringLiteral("VIEW_ADC0_OFFSET"));
        sizePolicy.setHeightForWidth(VIEW_ADC0_OFFSET->sizePolicy().hasHeightForWidth());
        VIEW_ADC0_OFFSET->setSizePolicy(sizePolicy);
        VIEW_ADC0_OFFSET->setMinimumSize(QSize(25, 25));
        VIEW_ADC0_OFFSET->setMaximumSize(QSize(25, 25));
        VIEW_ADC0_OFFSET->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC0_OFFSET->setStyleSheet(QStringLiteral(""));
        VIEW_ADC0_OFFSET->setIcon(icon7);
        VIEW_ADC0_OFFSET->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_ADC0_OFFSET, 2, 2, 1, 1);

        WRITE_ADC_DELAY = new QPushButton(PMcontrol);
        WRITE_ADC_DELAY->setObjectName(QStringLiteral("WRITE_ADC_DELAY"));
        sizePolicy.setHeightForWidth(WRITE_ADC_DELAY->sizePolicy().hasHeightForWidth());
        WRITE_ADC_DELAY->setSizePolicy(sizePolicy);
        WRITE_ADC_DELAY->setMinimumSize(QSize(25, 25));
        WRITE_ADC_DELAY->setMaximumSize(QSize(25, 25));
        WRITE_ADC_DELAY->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_DELAY->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_DELAY->setIcon(icon6);
        WRITE_ADC_DELAY->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_ADC_DELAY, 1, 3, 1, 1);

        WRITE_ADC1_RANGE_2 = new QPushButton(PMcontrol);
        WRITE_ADC1_RANGE_2->setObjectName(QStringLiteral("WRITE_ADC1_RANGE_2"));
        sizePolicy.setHeightForWidth(WRITE_ADC1_RANGE_2->sizePolicy().hasHeightForWidth());
        WRITE_ADC1_RANGE_2->setSizePolicy(sizePolicy);
        WRITE_ADC1_RANGE_2->setMinimumSize(QSize(25, 25));
        WRITE_ADC1_RANGE_2->setMaximumSize(QSize(25, 25));
        WRITE_ADC1_RANGE_2->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC1_RANGE_2->setStyleSheet(QStringLiteral(""));
        WRITE_ADC1_RANGE_2->setIcon(icon6);
        WRITE_ADC1_RANGE_2->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_ADC1_RANGE_2, 5, 3, 1, 1);

        WRITE_ADC_RANGE = new QPushButton(PMcontrol);
        WRITE_ADC_RANGE->setObjectName(QStringLiteral("WRITE_ADC_RANGE"));
        sizePolicy.setHeightForWidth(WRITE_ADC_RANGE->sizePolicy().hasHeightForWidth());
        WRITE_ADC_RANGE->setSizePolicy(sizePolicy);
        WRITE_ADC_RANGE->setMinimumSize(QSize(25, 25));
        WRITE_ADC_RANGE->setMaximumSize(QSize(25, 25));
        WRITE_ADC_RANGE->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_RANGE->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_RANGE->setIcon(icon6);
        WRITE_ADC_RANGE->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_ADC_RANGE, 4, 3, 1, 1);

        VIEW_ADC0_RANGE = new QPushButton(PMcontrol);
        VIEW_ADC0_RANGE->setObjectName(QStringLiteral("VIEW_ADC0_RANGE"));
        sizePolicy.setHeightForWidth(VIEW_ADC0_RANGE->sizePolicy().hasHeightForWidth());
        VIEW_ADC0_RANGE->setSizePolicy(sizePolicy);
        VIEW_ADC0_RANGE->setMinimumSize(QSize(25, 25));
        VIEW_ADC0_RANGE->setMaximumSize(QSize(25, 25));
        VIEW_ADC0_RANGE->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC0_RANGE->setStyleSheet(QStringLiteral(""));
        VIEW_ADC0_RANGE->setIcon(icon7);
        VIEW_ADC0_RANGE->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_ADC0_RANGE, 4, 2, 1, 1);

        VIEW_ADC_DELAY = new QPushButton(PMcontrol);
        VIEW_ADC_DELAY->setObjectName(QStringLiteral("VIEW_ADC_DELAY"));
        sizePolicy.setHeightForWidth(VIEW_ADC_DELAY->sizePolicy().hasHeightForWidth());
        VIEW_ADC_DELAY->setSizePolicy(sizePolicy);
        VIEW_ADC_DELAY->setMinimumSize(QSize(25, 25));
        VIEW_ADC_DELAY->setMaximumSize(QSize(25, 25));
        VIEW_ADC_DELAY->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_DELAY->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_DELAY->setIcon(icon7);
        VIEW_ADC_DELAY->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_ADC_DELAY, 1, 2, 1, 1);

        ADC0_OFFSET = new QLabel(PMcontrol);
        ADC0_OFFSET->setObjectName(QStringLiteral("ADC0_OFFSET"));
        ADC0_OFFSET->setMaximumSize(QSize(16777215, 20));
        ADC0_OFFSET->setSizeIncrement(QSize(0, 20));
        ADC0_OFFSET->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(ADC0_OFFSET, 2, 0, 1, 1);

        lineEdit_ADC_DELAY = new QLineEdit(PMcontrol);
        lineEdit_ADC_DELAY->setObjectName(QStringLiteral("lineEdit_ADC_DELAY"));
        lineEdit_ADC_DELAY->setMinimumSize(QSize(0, 25));
        lineEdit_ADC_DELAY->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC_DELAY->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC_DELAY->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_ADC_DELAY, 1, 1, 1, 1);

        lineEdit_ADC_OFFSET = new QLineEdit(PMcontrol);
        lineEdit_ADC_OFFSET->setObjectName(QStringLiteral("lineEdit_ADC_OFFSET"));
        lineEdit_ADC_OFFSET->setMinimumSize(QSize(0, 25));
        lineEdit_ADC_OFFSET->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC_OFFSET->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC_OFFSET->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_ADC_OFFSET, 2, 1, 1, 1);

        lineEdit_ADC_OFFSET_2 = new QLineEdit(PMcontrol);
        lineEdit_ADC_OFFSET_2->setObjectName(QStringLiteral("lineEdit_ADC_OFFSET_2"));
        lineEdit_ADC_OFFSET_2->setMinimumSize(QSize(0, 25));
        lineEdit_ADC_OFFSET_2->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC_OFFSET_2->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC_OFFSET_2->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_ADC_OFFSET_2, 3, 1, 1, 1);

        lineEdit_ADC_RANGE = new QLineEdit(PMcontrol);
        lineEdit_ADC_RANGE->setObjectName(QStringLiteral("lineEdit_ADC_RANGE"));
        lineEdit_ADC_RANGE->setMinimumSize(QSize(0, 25));
        lineEdit_ADC_RANGE->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC_RANGE->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC_RANGE->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_ADC_RANGE, 4, 1, 1, 1);

        lineEdit_ADC_RANGE_2 = new QLineEdit(PMcontrol);
        lineEdit_ADC_RANGE_2->setObjectName(QStringLiteral("lineEdit_ADC_RANGE_2"));
        lineEdit_ADC_RANGE_2->setMinimumSize(QSize(0, 25));
        lineEdit_ADC_RANGE_2->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC_RANGE_2->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC_RANGE_2->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_ADC_RANGE_2, 5, 1, 1, 1);

        lineEdit_TIME_ALIN = new QLineEdit(PMcontrol);
        lineEdit_TIME_ALIN->setObjectName(QStringLiteral("lineEdit_TIME_ALIN"));
        lineEdit_TIME_ALIN->setMinimumSize(QSize(0, 25));
        lineEdit_TIME_ALIN->setMaximumSize(QSize(16777215, 25));
        lineEdit_TIME_ALIN->setStyleSheet(QStringLiteral(""));
        lineEdit_TIME_ALIN->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_TIME_ALIN, 6, 1, 1, 1);

        VIEW_ADC_ZERO = new QPushButton(PMcontrol);
        VIEW_ADC_ZERO->setObjectName(QStringLiteral("VIEW_ADC_ZERO"));
        sizePolicy.setHeightForWidth(VIEW_ADC_ZERO->sizePolicy().hasHeightForWidth());
        VIEW_ADC_ZERO->setSizePolicy(sizePolicy);
        VIEW_ADC_ZERO->setMinimumSize(QSize(25, 25));
        VIEW_ADC_ZERO->setMaximumSize(QSize(25, 25));
        VIEW_ADC_ZERO->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_ZERO->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_ZERO->setIcon(icon7);
        VIEW_ADC_ZERO->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_ADC_ZERO, 0, 2, 1, 1);

        WRITE_ADC_ZERO = new QPushButton(PMcontrol);
        WRITE_ADC_ZERO->setObjectName(QStringLiteral("WRITE_ADC_ZERO"));
        sizePolicy.setHeightForWidth(WRITE_ADC_ZERO->sizePolicy().hasHeightForWidth());
        WRITE_ADC_ZERO->setSizePolicy(sizePolicy);
        WRITE_ADC_ZERO->setMinimumSize(QSize(25, 25));
        WRITE_ADC_ZERO->setMaximumSize(QSize(25, 25));
        WRITE_ADC_ZERO->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_ZERO->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_ZERO->setIcon(icon6);
        WRITE_ADC_ZERO->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_ADC_ZERO, 0, 3, 1, 1);

        lineEdit_ADC_Zero = new QLineEdit(PMcontrol);
        lineEdit_ADC_Zero->setObjectName(QStringLiteral("lineEdit_ADC_Zero"));
        lineEdit_ADC_Zero->setMinimumSize(QSize(0, 25));
        lineEdit_ADC_Zero->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC_Zero->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC_Zero->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_ADC_Zero, 0, 1, 1, 1);

        CFD_ZERO = new QLabel(PMcontrol);
        CFD_ZERO->setObjectName(QStringLiteral("CFD_ZERO"));

        gridLayout_4->addWidget(CFD_ZERO, 8, 0, 1, 1);

        lineEdit_CFD_TRESHOLD = new QLineEdit(PMcontrol);
        lineEdit_CFD_TRESHOLD->setObjectName(QStringLiteral("lineEdit_CFD_TRESHOLD"));
        lineEdit_CFD_TRESHOLD->setMinimumSize(QSize(0, 25));
        lineEdit_CFD_TRESHOLD->setMaximumSize(QSize(16777215, 25));
        lineEdit_CFD_TRESHOLD->setStyleSheet(QStringLiteral(""));
        lineEdit_CFD_TRESHOLD->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_CFD_TRESHOLD, 7, 1, 1, 1);

        lineEdit_CFD_ZERO = new QLineEdit(PMcontrol);
        lineEdit_CFD_ZERO->setObjectName(QStringLiteral("lineEdit_CFD_ZERO"));
        lineEdit_CFD_ZERO->setMinimumSize(QSize(0, 25));
        lineEdit_CFD_ZERO->setMaximumSize(QSize(16777215, 25));
        lineEdit_CFD_ZERO->setStyleSheet(QStringLiteral(""));
        lineEdit_CFD_ZERO->setClearButtonEnabled(true);

        gridLayout_4->addWidget(lineEdit_CFD_ZERO, 8, 1, 1, 1);

        VIEW_CFD_TRESHOLD = new QPushButton(PMcontrol);
        VIEW_CFD_TRESHOLD->setObjectName(QStringLiteral("VIEW_CFD_TRESHOLD"));
        sizePolicy.setHeightForWidth(VIEW_CFD_TRESHOLD->sizePolicy().hasHeightForWidth());
        VIEW_CFD_TRESHOLD->setSizePolicy(sizePolicy);
        VIEW_CFD_TRESHOLD->setMinimumSize(QSize(25, 25));
        VIEW_CFD_TRESHOLD->setMaximumSize(QSize(25, 25));
        VIEW_CFD_TRESHOLD->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_CFD_TRESHOLD->setStyleSheet(QStringLiteral(""));
        VIEW_CFD_TRESHOLD->setIcon(icon7);
        VIEW_CFD_TRESHOLD->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_CFD_TRESHOLD, 7, 2, 1, 1);

        VIEW_CFD_ZERO = new QPushButton(PMcontrol);
        VIEW_CFD_ZERO->setObjectName(QStringLiteral("VIEW_CFD_ZERO"));
        sizePolicy.setHeightForWidth(VIEW_CFD_ZERO->sizePolicy().hasHeightForWidth());
        VIEW_CFD_ZERO->setSizePolicy(sizePolicy);
        VIEW_CFD_ZERO->setMinimumSize(QSize(25, 25));
        VIEW_CFD_ZERO->setMaximumSize(QSize(25, 25));
        VIEW_CFD_ZERO->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_CFD_ZERO->setStyleSheet(QStringLiteral(""));
        VIEW_CFD_ZERO->setIcon(icon7);
        VIEW_CFD_ZERO->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(VIEW_CFD_ZERO, 8, 2, 1, 1);

        WRITE_CFD_TRESHOLD = new QPushButton(PMcontrol);
        WRITE_CFD_TRESHOLD->setObjectName(QStringLiteral("WRITE_CFD_TRESHOLD"));
        sizePolicy.setHeightForWidth(WRITE_CFD_TRESHOLD->sizePolicy().hasHeightForWidth());
        WRITE_CFD_TRESHOLD->setSizePolicy(sizePolicy);
        WRITE_CFD_TRESHOLD->setMinimumSize(QSize(25, 25));
        WRITE_CFD_TRESHOLD->setMaximumSize(QSize(25, 25));
        WRITE_CFD_TRESHOLD->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_CFD_TRESHOLD->setStyleSheet(QStringLiteral(""));
        WRITE_CFD_TRESHOLD->setIcon(icon6);
        WRITE_CFD_TRESHOLD->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_CFD_TRESHOLD, 7, 3, 1, 1);

        WRITE_CFD_ZERO = new QPushButton(PMcontrol);
        WRITE_CFD_ZERO->setObjectName(QStringLiteral("WRITE_CFD_ZERO"));
        sizePolicy.setHeightForWidth(WRITE_CFD_ZERO->sizePolicy().hasHeightForWidth());
        WRITE_CFD_ZERO->setSizePolicy(sizePolicy);
        WRITE_CFD_ZERO->setMinimumSize(QSize(25, 25));
        WRITE_CFD_ZERO->setMaximumSize(QSize(25, 25));
        WRITE_CFD_ZERO->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_CFD_ZERO->setStyleSheet(QStringLiteral(""));
        WRITE_CFD_ZERO->setIcon(icon6);
        WRITE_CFD_ZERO->setIconSize(QSize(21, 21));

        gridLayout_4->addWidget(WRITE_CFD_ZERO, 8, 3, 1, 1);

        PMstatus = new QGroupBox(centralWidget);
        PMstatus->setObjectName(QStringLiteral("PMstatus"));
        PMstatus->setGeometry(QRect(410, 350, 211, 211));
        PMstatus->setStyleSheet(QStringLiteral(""));
        gridLayout_5 = new QGridLayout(PMstatus);
        gridLayout_5->setSpacing(1);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        ADC0_MEANAMPL = new QLabel(PMstatus);
        ADC0_MEANAMPL->setObjectName(QStringLiteral("ADC0_MEANAMPL"));
        ADC0_MEANAMPL->setMinimumSize(QSize(0, 25));
        ADC0_MEANAMPL->setMaximumSize(QSize(16777215, 25));
        ADC0_MEANAMPL->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(ADC0_MEANAMPL, 0, 0, 1, 1);

        lineEdit_ADC0_MEANAMPL = new QLineEdit(PMstatus);
        lineEdit_ADC0_MEANAMPL->setObjectName(QStringLiteral("lineEdit_ADC0_MEANAMPL"));
        lineEdit_ADC0_MEANAMPL->setMinimumSize(QSize(0, 25));
        lineEdit_ADC0_MEANAMPL->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC0_MEANAMPL->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC0_MEANAMPL->setReadOnly(true);
        lineEdit_ADC0_MEANAMPL->setClearButtonEnabled(true);

        gridLayout_5->addWidget(lineEdit_ADC0_MEANAMPL, 0, 1, 1, 1);

        VIEW_ADC0_Meanampl = new QPushButton(PMstatus);
        VIEW_ADC0_Meanampl->setObjectName(QStringLiteral("VIEW_ADC0_Meanampl"));
        VIEW_ADC0_Meanampl->setMinimumSize(QSize(25, 25));
        VIEW_ADC0_Meanampl->setMaximumSize(QSize(25, 25));
        VIEW_ADC0_Meanampl->setSizeIncrement(QSize(25, 25));
        VIEW_ADC0_Meanampl->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC0_Meanampl->setStyleSheet(QStringLiteral(""));
        VIEW_ADC0_Meanampl->setIcon(icon7);
        VIEW_ADC0_Meanampl->setIconSize(QSize(21, 21));

        gridLayout_5->addWidget(VIEW_ADC0_Meanampl, 0, 2, 1, 1);

        ADC1_MEANAMPL = new QLabel(PMstatus);
        ADC1_MEANAMPL->setObjectName(QStringLiteral("ADC1_MEANAMPL"));
        ADC1_MEANAMPL->setMinimumSize(QSize(0, 25));
        ADC1_MEANAMPL->setMaximumSize(QSize(16777215, 25));
        ADC1_MEANAMPL->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(ADC1_MEANAMPL, 1, 0, 1, 1);

        lineEdit_ADC1_MEANAMPL = new QLineEdit(PMstatus);
        lineEdit_ADC1_MEANAMPL->setObjectName(QStringLiteral("lineEdit_ADC1_MEANAMPL"));
        lineEdit_ADC1_MEANAMPL->setMinimumSize(QSize(0, 25));
        lineEdit_ADC1_MEANAMPL->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC1_MEANAMPL->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC1_MEANAMPL->setReadOnly(true);
        lineEdit_ADC1_MEANAMPL->setClearButtonEnabled(true);

        gridLayout_5->addWidget(lineEdit_ADC1_MEANAMPL, 1, 1, 1, 1);

        VIEW_ADC1_Mean = new QPushButton(PMstatus);
        VIEW_ADC1_Mean->setObjectName(QStringLiteral("VIEW_ADC1_Mean"));
        VIEW_ADC1_Mean->setMinimumSize(QSize(25, 25));
        VIEW_ADC1_Mean->setMaximumSize(QSize(25, 25));
        VIEW_ADC1_Mean->setSizeIncrement(QSize(25, 25));
        VIEW_ADC1_Mean->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC1_Mean->setStyleSheet(QStringLiteral(""));
        VIEW_ADC1_Mean->setIcon(icon7);
        VIEW_ADC1_Mean->setIconSize(QSize(21, 21));

        gridLayout_5->addWidget(VIEW_ADC1_Mean, 1, 2, 1, 1);

        ADC0_ZERO_LVL = new QLabel(PMstatus);
        ADC0_ZERO_LVL->setObjectName(QStringLiteral("ADC0_ZERO_LVL"));
        ADC0_ZERO_LVL->setMinimumSize(QSize(0, 25));
        ADC0_ZERO_LVL->setMaximumSize(QSize(16777215, 25));
        ADC0_ZERO_LVL->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(ADC0_ZERO_LVL, 2, 0, 1, 1);

        lineEdit_ADC_ZERO_LVL = new QLineEdit(PMstatus);
        lineEdit_ADC_ZERO_LVL->setObjectName(QStringLiteral("lineEdit_ADC_ZERO_LVL"));
        lineEdit_ADC_ZERO_LVL->setMinimumSize(QSize(0, 25));
        lineEdit_ADC_ZERO_LVL->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC_ZERO_LVL->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC_ZERO_LVL->setReadOnly(true);
        lineEdit_ADC_ZERO_LVL->setClearButtonEnabled(true);

        gridLayout_5->addWidget(lineEdit_ADC_ZERO_LVL, 2, 1, 1, 1);

        VIEW_ADC0_Zerolvl = new QPushButton(PMstatus);
        VIEW_ADC0_Zerolvl->setObjectName(QStringLiteral("VIEW_ADC0_Zerolvl"));
        VIEW_ADC0_Zerolvl->setMinimumSize(QSize(25, 25));
        VIEW_ADC0_Zerolvl->setMaximumSize(QSize(25, 25));
        VIEW_ADC0_Zerolvl->setSizeIncrement(QSize(25, 25));
        VIEW_ADC0_Zerolvl->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC0_Zerolvl->setStyleSheet(QStringLiteral(""));
        VIEW_ADC0_Zerolvl->setIcon(icon7);
        VIEW_ADC0_Zerolvl->setIconSize(QSize(21, 21));

        gridLayout_5->addWidget(VIEW_ADC0_Zerolvl, 2, 2, 1, 1);

        ADC1_ZERO_LVL = new QLabel(PMstatus);
        ADC1_ZERO_LVL->setObjectName(QStringLiteral("ADC1_ZERO_LVL"));
        ADC1_ZERO_LVL->setMinimumSize(QSize(0, 25));
        ADC1_ZERO_LVL->setMaximumSize(QSize(16777215, 25));
        ADC1_ZERO_LVL->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(ADC1_ZERO_LVL, 3, 0, 1, 1);

        lineEdit_ADC1_ZERO_LVL = new QLineEdit(PMstatus);
        lineEdit_ADC1_ZERO_LVL->setObjectName(QStringLiteral("lineEdit_ADC1_ZERO_LVL"));
        lineEdit_ADC1_ZERO_LVL->setMinimumSize(QSize(0, 25));
        lineEdit_ADC1_ZERO_LVL->setMaximumSize(QSize(16777215, 25));
        lineEdit_ADC1_ZERO_LVL->setStyleSheet(QStringLiteral(""));
        lineEdit_ADC1_ZERO_LVL->setReadOnly(true);
        lineEdit_ADC1_ZERO_LVL->setClearButtonEnabled(true);

        gridLayout_5->addWidget(lineEdit_ADC1_ZERO_LVL, 3, 1, 1, 1);

        VIEW_ADC1_zerolvl = new QPushButton(PMstatus);
        VIEW_ADC1_zerolvl->setObjectName(QStringLiteral("VIEW_ADC1_zerolvl"));
        VIEW_ADC1_zerolvl->setEnabled(true);
        VIEW_ADC1_zerolvl->setMinimumSize(QSize(25, 25));
        VIEW_ADC1_zerolvl->setMaximumSize(QSize(25, 25));
        VIEW_ADC1_zerolvl->setSizeIncrement(QSize(25, 25));
        VIEW_ADC1_zerolvl->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC1_zerolvl->setStyleSheet(QStringLiteral(""));
        VIEW_ADC1_zerolvl->setIcon(icon7);
        VIEW_ADC1_zerolvl->setIconSize(QSize(21, 21));

        gridLayout_5->addWidget(VIEW_ADC1_zerolvl, 3, 2, 1, 1);

        CFD_CNT = new QLabel(PMstatus);
        CFD_CNT->setObjectName(QStringLiteral("CFD_CNT"));
        CFD_CNT->setMinimumSize(QSize(0, 25));
        CFD_CNT->setMaximumSize(QSize(16777215, 25));
        CFD_CNT->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(CFD_CNT, 4, 0, 1, 1);

        lineEdit_CFD_CNT = new QLineEdit(PMstatus);
        lineEdit_CFD_CNT->setObjectName(QStringLiteral("lineEdit_CFD_CNT"));
        lineEdit_CFD_CNT->setMinimumSize(QSize(0, 25));
        lineEdit_CFD_CNT->setMaximumSize(QSize(16777215, 25));
        lineEdit_CFD_CNT->setStyleSheet(QStringLiteral(""));
        lineEdit_CFD_CNT->setReadOnly(true);
        lineEdit_CFD_CNT->setClearButtonEnabled(true);

        gridLayout_5->addWidget(lineEdit_CFD_CNT, 4, 1, 1, 1);

        VIEW_cfd_cnt = new QPushButton(PMstatus);
        VIEW_cfd_cnt->setObjectName(QStringLiteral("VIEW_cfd_cnt"));
        VIEW_cfd_cnt->setMinimumSize(QSize(25, 25));
        VIEW_cfd_cnt->setMaximumSize(QSize(25, 25));
        VIEW_cfd_cnt->setSizeIncrement(QSize(25, 25));
        VIEW_cfd_cnt->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_cfd_cnt->setStyleSheet(QStringLiteral(""));
        VIEW_cfd_cnt->setIcon(icon7);
        VIEW_cfd_cnt->setIconSize(QSize(21, 21));

        gridLayout_5->addWidget(VIEW_cfd_cnt, 4, 2, 1, 1);

        STROBE_CNT = new QLabel(PMstatus);
        STROBE_CNT->setObjectName(QStringLiteral("STROBE_CNT"));
        STROBE_CNT->setMinimumSize(QSize(0, 25));
        STROBE_CNT->setMaximumSize(QSize(16777215, 25));
        STROBE_CNT->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(STROBE_CNT, 5, 0, 1, 1);

        lineEdit_STROBE_CNT = new QLineEdit(PMstatus);
        lineEdit_STROBE_CNT->setObjectName(QStringLiteral("lineEdit_STROBE_CNT"));
        lineEdit_STROBE_CNT->setMinimumSize(QSize(0, 25));
        lineEdit_STROBE_CNT->setMaximumSize(QSize(16777215, 25));
        lineEdit_STROBE_CNT->setStyleSheet(QStringLiteral(""));
        lineEdit_STROBE_CNT->setReadOnly(true);
        lineEdit_STROBE_CNT->setClearButtonEnabled(true);

        gridLayout_5->addWidget(lineEdit_STROBE_CNT, 5, 1, 1, 1);

        VIEW_Strobe_cnt = new QPushButton(PMstatus);
        VIEW_Strobe_cnt->setObjectName(QStringLiteral("VIEW_Strobe_cnt"));
        VIEW_Strobe_cnt->setMinimumSize(QSize(25, 25));
        VIEW_Strobe_cnt->setMaximumSize(QSize(25, 25));
        VIEW_Strobe_cnt->setSizeIncrement(QSize(25, 25));
        VIEW_Strobe_cnt->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_Strobe_cnt->setStyleSheet(QStringLiteral(""));
        VIEW_Strobe_cnt->setIcon(icon7);
        VIEW_Strobe_cnt->setIconSize(QSize(21, 21));

        gridLayout_5->addWidget(VIEW_Strobe_cnt, 5, 2, 1, 1);

        lineEdit_MEAN_TIME = new QLineEdit(PMstatus);
        lineEdit_MEAN_TIME->setObjectName(QStringLiteral("lineEdit_MEAN_TIME"));
        lineEdit_MEAN_TIME->setMinimumSize(QSize(0, 25));
        lineEdit_MEAN_TIME->setMaximumSize(QSize(16777215, 25));
        lineEdit_MEAN_TIME->setStyleSheet(QStringLiteral(""));
        lineEdit_MEAN_TIME->setReadOnly(true);
        lineEdit_MEAN_TIME->setClearButtonEnabled(true);

        gridLayout_5->addWidget(lineEdit_MEAN_TIME, 6, 1, 1, 1);

        MEAN_TIME = new QLabel(PMstatus);
        MEAN_TIME->setObjectName(QStringLiteral("MEAN_TIME"));
        MEAN_TIME->setMinimumSize(QSize(0, 25));
        MEAN_TIME->setMaximumSize(QSize(16777215, 25));
        MEAN_TIME->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(MEAN_TIME, 6, 0, 1, 1);

        VIEW_mean_time = new QPushButton(PMstatus);
        VIEW_mean_time->setObjectName(QStringLiteral("VIEW_mean_time"));
        VIEW_mean_time->setMinimumSize(QSize(25, 25));
        VIEW_mean_time->setMaximumSize(QSize(25, 25));
        VIEW_mean_time->setSizeIncrement(QSize(25, 25));
        VIEW_mean_time->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_mean_time->setStyleSheet(QStringLiteral(""));
        VIEW_mean_time->setIcon(icon7);
        VIEW_mean_time->setIconSize(QSize(21, 21));

        gridLayout_5->addWidget(VIEW_mean_time, 6, 2, 1, 1);

        commandPar = new QGroupBox(centralWidget);
        commandPar->setObjectName(QStringLiteral("commandPar"));
        commandPar->setGeometry(QRect(410, 580, 210, 141));
        commandPar->setStyleSheet(QStringLiteral(""));
        commandPar->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        commandPar->setCheckable(true);
        gridLayout_6 = new QGridLayout(commandPar);
        gridLayout_6->setSpacing(1);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_CFD_SATR = new QLineEdit(commandPar);
        lineEdit_CFD_SATR->setObjectName(QStringLiteral("lineEdit_CFD_SATR"));
        lineEdit_CFD_SATR->setMinimumSize(QSize(0, 25));
        lineEdit_CFD_SATR->setMaximumSize(QSize(16777215, 25));
        lineEdit_CFD_SATR->setStyleSheet(QStringLiteral(""));
        lineEdit_CFD_SATR->setClearButtonEnabled(true);

        gridLayout_6->addWidget(lineEdit_CFD_SATR, 2, 1, 1, 1);

        VIEW_CFD_SATR = new QPushButton(commandPar);
        VIEW_CFD_SATR->setObjectName(QStringLiteral("VIEW_CFD_SATR"));
        VIEW_CFD_SATR->setMinimumSize(QSize(25, 25));
        VIEW_CFD_SATR->setMaximumSize(QSize(25, 25));
        VIEW_CFD_SATR->setSizeIncrement(QSize(0, 0));
        VIEW_CFD_SATR->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_CFD_SATR->setStyleSheet(QStringLiteral(""));
        VIEW_CFD_SATR->setIcon(icon7);
        VIEW_CFD_SATR->setIconSize(QSize(21, 21));

        gridLayout_6->addWidget(VIEW_CFD_SATR, 2, 2, 1, 1);

        WRITE_Chmask = new QPushButton(commandPar);
        WRITE_Chmask->setObjectName(QStringLiteral("WRITE_Chmask"));
        WRITE_Chmask->setMinimumSize(QSize(25, 25));
        WRITE_Chmask->setMaximumSize(QSize(25, 25));
        WRITE_Chmask->setSizeIncrement(QSize(0, 0));
        WRITE_Chmask->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_Chmask->setStyleSheet(QStringLiteral(""));
        WRITE_Chmask->setIcon(icon6);
        WRITE_Chmask->setIconSize(QSize(21, 21));

        gridLayout_6->addWidget(WRITE_Chmask, 1, 3, 1, 1);

        CFD_SATR = new QLabel(commandPar);
        CFD_SATR->setObjectName(QStringLiteral("CFD_SATR"));
        CFD_SATR->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(CFD_SATR, 2, 0, 1, 1);

        lineEdit_OR_GATE = new QLineEdit(commandPar);
        lineEdit_OR_GATE->setObjectName(QStringLiteral("lineEdit_OR_GATE"));
        lineEdit_OR_GATE->setMinimumSize(QSize(0, 25));
        lineEdit_OR_GATE->setMaximumSize(QSize(16777215, 25));
        lineEdit_OR_GATE->setStyleSheet(QStringLiteral(""));
        lineEdit_OR_GATE->setClearButtonEnabled(true);

        gridLayout_6->addWidget(lineEdit_OR_GATE, 0, 1, 1, 1);

        WRITE_OR_GATE = new QPushButton(commandPar);
        WRITE_OR_GATE->setObjectName(QStringLiteral("WRITE_OR_GATE"));
        WRITE_OR_GATE->setMinimumSize(QSize(25, 25));
        WRITE_OR_GATE->setMaximumSize(QSize(25, 25));
        WRITE_OR_GATE->setSizeIncrement(QSize(0, 0));
        WRITE_OR_GATE->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_OR_GATE->setStyleSheet(QStringLiteral(""));
        WRITE_OR_GATE->setIcon(icon6);
        WRITE_OR_GATE->setIconSize(QSize(21, 21));

        gridLayout_6->addWidget(WRITE_OR_GATE, 0, 3, 1, 1);

        WRITE_BOARD_STATUS = new QPushButton(commandPar);
        WRITE_BOARD_STATUS->setObjectName(QStringLiteral("WRITE_BOARD_STATUS"));
        WRITE_BOARD_STATUS->setMinimumSize(QSize(25, 25));
        WRITE_BOARD_STATUS->setMaximumSize(QSize(25, 25));
        WRITE_BOARD_STATUS->setSizeIncrement(QSize(0, 0));
        WRITE_BOARD_STATUS->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_BOARD_STATUS->setStyleSheet(QStringLiteral(""));
        WRITE_BOARD_STATUS->setIcon(icon6);
        WRITE_BOARD_STATUS->setIconSize(QSize(21, 21));

        gridLayout_6->addWidget(WRITE_BOARD_STATUS, 3, 3, 1, 1);

        VIEW_BOARD_STATUS = new QPushButton(commandPar);
        VIEW_BOARD_STATUS->setObjectName(QStringLiteral("VIEW_BOARD_STATUS"));
        VIEW_BOARD_STATUS->setEnabled(true);
        VIEW_BOARD_STATUS->setMinimumSize(QSize(25, 25));
        VIEW_BOARD_STATUS->setMaximumSize(QSize(25, 25));
        VIEW_BOARD_STATUS->setSizeIncrement(QSize(0, 0));
        VIEW_BOARD_STATUS->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_BOARD_STATUS->setStyleSheet(QStringLiteral(""));
        VIEW_BOARD_STATUS->setIcon(icon7);
        VIEW_BOARD_STATUS->setIconSize(QSize(21, 21));

        gridLayout_6->addWidget(VIEW_BOARD_STATUS, 3, 2, 1, 1);

        BOARD_STATUS = new QLabel(commandPar);
        BOARD_STATUS->setObjectName(QStringLiteral("BOARD_STATUS"));
        BOARD_STATUS->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(BOARD_STATUS, 3, 0, 1, 1);

        CH_MASK = new QLabel(commandPar);
        CH_MASK->setObjectName(QStringLiteral("CH_MASK"));
        CH_MASK->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(CH_MASK, 1, 0, 1, 1);

        OR_GATE = new QLabel(commandPar);
        OR_GATE->setObjectName(QStringLiteral("OR_GATE"));
        OR_GATE->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(OR_GATE, 0, 0, 1, 1);

        lineEdit_CH_MASK = new QLineEdit(commandPar);
        lineEdit_CH_MASK->setObjectName(QStringLiteral("lineEdit_CH_MASK"));
        lineEdit_CH_MASK->setMinimumSize(QSize(0, 25));
        lineEdit_CH_MASK->setMaximumSize(QSize(16777215, 25));
        lineEdit_CH_MASK->setStyleSheet(QStringLiteral(""));
        lineEdit_CH_MASK->setClearButtonEnabled(true);

        gridLayout_6->addWidget(lineEdit_CH_MASK, 1, 1, 1, 1);

        WRITE_CFD_SATR = new QPushButton(commandPar);
        WRITE_CFD_SATR->setObjectName(QStringLiteral("WRITE_CFD_SATR"));
        WRITE_CFD_SATR->setMinimumSize(QSize(25, 25));
        WRITE_CFD_SATR->setMaximumSize(QSize(25, 25));
        WRITE_CFD_SATR->setSizeIncrement(QSize(0, 0));
        WRITE_CFD_SATR->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_CFD_SATR->setStyleSheet(QStringLiteral(""));
        WRITE_CFD_SATR->setIcon(icon6);
        WRITE_CFD_SATR->setIconSize(QSize(21, 21));

        gridLayout_6->addWidget(WRITE_CFD_SATR, 2, 3, 1, 1);

        lineEdit_BOARD_STATUS = new QLineEdit(commandPar);
        lineEdit_BOARD_STATUS->setObjectName(QStringLiteral("lineEdit_BOARD_STATUS"));
        lineEdit_BOARD_STATUS->setMinimumSize(QSize(0, 25));
        lineEdit_BOARD_STATUS->setMaximumSize(QSize(16777215, 25));
        lineEdit_BOARD_STATUS->setStyleSheet(QStringLiteral(""));
        lineEdit_BOARD_STATUS->setClearButtonEnabled(true);

        gridLayout_6->addWidget(lineEdit_BOARD_STATUS, 3, 1, 1, 1);

        VIEW_OR_GATE = new QPushButton(commandPar);
        VIEW_OR_GATE->setObjectName(QStringLiteral("VIEW_OR_GATE"));
        VIEW_OR_GATE->setMinimumSize(QSize(25, 25));
        VIEW_OR_GATE->setMaximumSize(QSize(25, 25));
        VIEW_OR_GATE->setSizeIncrement(QSize(0, 0));
        VIEW_OR_GATE->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_OR_GATE->setStyleSheet(QStringLiteral(""));
        VIEW_OR_GATE->setIcon(icon7);
        VIEW_OR_GATE->setIconSize(QSize(21, 21));

        gridLayout_6->addWidget(VIEW_OR_GATE, 0, 2, 1, 1);

        VIEW_CH_MASK = new QPushButton(commandPar);
        VIEW_CH_MASK->setObjectName(QStringLiteral("VIEW_CH_MASK"));
        VIEW_CH_MASK->setMinimumSize(QSize(25, 25));
        VIEW_CH_MASK->setMaximumSize(QSize(25, 25));
        VIEW_CH_MASK->setSizeIncrement(QSize(0, 0));
        VIEW_CH_MASK->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_CH_MASK->setStyleSheet(QStringLiteral(""));
        VIEW_CH_MASK->setIcon(icon7);
        VIEW_CH_MASK->setIconSize(QSize(21, 21));

        gridLayout_6->addWidget(VIEW_CH_MASK, 1, 2, 1, 1);

        Radoutcontrol = new QGroupBox(centralWidget);
        Radoutcontrol->setObjectName(QStringLiteral("Radoutcontrol"));
        Radoutcontrol->setGeometry(QRect(630, 90, 281, 441));
        Radoutcontrol->setCheckable(true);
        gridLayout_7 = new QGridLayout(Radoutcontrol);
        gridLayout_7->setSpacing(1);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        VIEW_ADC1_OFFSET_3 = new QPushButton(Radoutcontrol);
        VIEW_ADC1_OFFSET_3->setObjectName(QStringLiteral("VIEW_ADC1_OFFSET_3"));
        VIEW_ADC1_OFFSET_3->setEnabled(true);
        VIEW_ADC1_OFFSET_3->setMinimumSize(QSize(25, 25));
        VIEW_ADC1_OFFSET_3->setMaximumSize(QSize(25, 25));
        VIEW_ADC1_OFFSET_3->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC1_OFFSET_3->setStyleSheet(QStringLiteral(""));
        VIEW_ADC1_OFFSET_3->setIcon(icon7);
        VIEW_ADC1_OFFSET_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC1_OFFSET_3, 2, 2, 1, 1);

        Data_bunc_freq = new QLabel(Radoutcontrol);
        Data_bunc_freq->setObjectName(QStringLiteral("Data_bunc_freq"));
        Data_bunc_freq->setMinimumSize(QSize(0, 25));
        Data_bunc_freq->setMaximumSize(QSize(16777215, 25));
        Data_bunc_freq->setStyleSheet(QStringLiteral("color: rgb(221, 59, 10);"));

        gridLayout_7->addWidget(Data_bunc_freq, 7, 0, 1, 1);

        Data_bunch_pat = new QLabel(Radoutcontrol);
        Data_bunch_pat->setObjectName(QStringLiteral("Data_bunch_pat"));
        Data_bunch_pat->setMinimumSize(QSize(0, 25));
        Data_bunch_pat->setMaximumSize(QSize(16777215, 25));
        Data_bunch_pat->setStyleSheet(QStringLiteral("color: rgb(221, 59, 10);"));

        gridLayout_7->addWidget(Data_bunch_pat, 1, 0, 1, 1);

        WRITE_ADC_RANGE_3 = new QPushButton(Radoutcontrol);
        WRITE_ADC_RANGE_3->setObjectName(QStringLiteral("WRITE_ADC_RANGE_3"));
        WRITE_ADC_RANGE_3->setMinimumSize(QSize(25, 25));
        WRITE_ADC_RANGE_3->setMaximumSize(QSize(25, 25));
        WRITE_ADC_RANGE_3->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_RANGE_3->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_RANGE_3->setIcon(icon6);
        WRITE_ADC_RANGE_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC_RANGE_3, 5, 3, 1, 1);

        lineEdit_trg_cont_val = new QLineEdit(Radoutcontrol);
        lineEdit_trg_cont_val->setObjectName(QStringLiteral("lineEdit_trg_cont_val"));
        lineEdit_trg_cont_val->setMinimumSize(QSize(0, 25));
        lineEdit_trg_cont_val->setMaximumSize(QSize(16777215, 25));
        lineEdit_trg_cont_val->setStyleSheet(QStringLiteral(""));
        lineEdit_trg_cont_val->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_trg_cont_val, 2, 1, 1, 1);

        VIEW_BCID_delay = new QPushButton(Radoutcontrol);
        VIEW_BCID_delay->setObjectName(QStringLiteral("VIEW_BCID_delay"));
        VIEW_BCID_delay->setMinimumSize(QSize(25, 25));
        VIEW_BCID_delay->setMaximumSize(QSize(25, 25));
        VIEW_BCID_delay->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_BCID_delay->setStyleSheet(QStringLiteral(""));
        VIEW_BCID_delay->setIcon(icon7);
        VIEW_BCID_delay->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_BCID_delay, 14, 2, 1, 1);

        WRITE_PAR = new QPushButton(Radoutcontrol);
        WRITE_PAR->setObjectName(QStringLiteral("WRITE_PAR"));
        WRITE_PAR->setMinimumSize(QSize(25, 25));
        WRITE_PAR->setMaximumSize(QSize(25, 25));
        WRITE_PAR->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_PAR->setStyleSheet(QStringLiteral(""));
        WRITE_PAR->setIcon(icon6);
        WRITE_PAR->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_PAR, 12, 3, 1, 1);

        trg_cont_pat_2 = new QLabel(Radoutcontrol);
        trg_cont_pat_2->setObjectName(QStringLiteral("trg_cont_pat_2"));
        trg_cont_pat_2->setMinimumSize(QSize(0, 25));
        trg_cont_pat_2->setMaximumSize(QSize(16777215, 25));
        trg_cont_pat_2->setStyleSheet(QStringLiteral("color: rgb(23, 180, 49);"));

        gridLayout_7->addWidget(trg_cont_pat_2, 4, 0, 1, 1);

        VIEW_ADC1_RANGE_3 = new QPushButton(Radoutcontrol);
        VIEW_ADC1_RANGE_3->setObjectName(QStringLiteral("VIEW_ADC1_RANGE_3"));
        VIEW_ADC1_RANGE_3->setMinimumSize(QSize(25, 25));
        VIEW_ADC1_RANGE_3->setMaximumSize(QSize(25, 25));
        VIEW_ADC1_RANGE_3->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC1_RANGE_3->setStyleSheet(QStringLiteral(""));
        VIEW_ADC1_RANGE_3->setIcon(icon7);
        VIEW_ADC1_RANGE_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC1_RANGE_3, 4, 2, 1, 1);

        VIEW_ADC1_RANGE_4 = new QPushButton(Radoutcontrol);
        VIEW_ADC1_RANGE_4->setObjectName(QStringLiteral("VIEW_ADC1_RANGE_4"));
        VIEW_ADC1_RANGE_4->setMinimumSize(QSize(25, 25));
        VIEW_ADC1_RANGE_4->setMaximumSize(QSize(25, 25));
        VIEW_ADC1_RANGE_4->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC1_RANGE_4->setStyleSheet(QStringLiteral(""));
        VIEW_ADC1_RANGE_4->setIcon(icon7);
        VIEW_ADC1_RANGE_4->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC1_RANGE_4, 6, 2, 1, 1);

        WRITE_DET = new QPushButton(Radoutcontrol);
        WRITE_DET->setObjectName(QStringLiteral("WRITE_DET"));
        WRITE_DET->setMinimumSize(QSize(25, 25));
        WRITE_DET->setMaximumSize(QSize(25, 25));
        WRITE_DET->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_DET->setStyleSheet(QStringLiteral(""));
        WRITE_DET->setIcon(icon6);
        WRITE_DET->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_DET, 13, 3, 1, 1);

        trg_cont_value = new QLabel(Radoutcontrol);
        trg_cont_value->setObjectName(QStringLiteral("trg_cont_value"));
        trg_cont_value->setMinimumSize(QSize(0, 25));
        trg_cont_value->setMaximumSize(QSize(16777215, 25));
        trg_cont_value->setStyleSheet(QStringLiteral("color: rgb(23, 180, 49);"));

        gridLayout_7->addWidget(trg_cont_value, 2, 0, 1, 1);

        lineEdit_max_RHD_pqyload = new QLineEdit(Radoutcontrol);
        lineEdit_max_RHD_pqyload->setObjectName(QStringLiteral("lineEdit_max_RHD_pqyload"));
        lineEdit_max_RHD_pqyload->setMinimumSize(QSize(0, 25));
        lineEdit_max_RHD_pqyload->setMaximumSize(QSize(16777215, 25));
        lineEdit_max_RHD_pqyload->setStyleSheet(QStringLiteral(""));
        lineEdit_max_RHD_pqyload->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_max_RHD_pqyload, 10, 1, 1, 1);

        WRITE_ADC_ZERO_3 = new QPushButton(Radoutcontrol);
        WRITE_ADC_ZERO_3->setObjectName(QStringLiteral("WRITE_ADC_ZERO_3"));
        WRITE_ADC_ZERO_3->setMinimumSize(QSize(25, 25));
        WRITE_ADC_ZERO_3->setMaximumSize(QSize(25, 25));
        WRITE_ADC_ZERO_3->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_ZERO_3->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_ZERO_3->setIcon(icon6);
        WRITE_ADC_ZERO_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC_ZERO_3, 0, 3, 1, 1);

        Trg_cont_pat_1 = new QLabel(Radoutcontrol);
        Trg_cont_pat_1->setObjectName(QStringLiteral("Trg_cont_pat_1"));
        Trg_cont_pat_1->setMinimumSize(QSize(0, 25));
        Trg_cont_pat_1->setMaximumSize(QSize(16777215, 25));
        Trg_cont_pat_1->setStyleSheet(QStringLiteral("color: rgb(23, 180, 49);"));

        gridLayout_7->addWidget(Trg_cont_pat_1, 3, 0, 1, 1);

        BCIDdelay = new QLabel(Radoutcontrol);
        BCIDdelay->setObjectName(QStringLiteral("BCIDdelay"));
        BCIDdelay->setMinimumSize(QSize(0, 25));
        BCIDdelay->setMaximumSize(QSize(16777215, 25));
        BCIDdelay->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(BCIDdelay, 14, 0, 1, 1);

        PAR = new QLabel(Radoutcontrol);
        PAR->setObjectName(QStringLiteral("PAR"));
        PAR->setMinimumSize(QSize(0, 25));
        PAR->setMaximumSize(QSize(16777215, 25));
        PAR->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(PAR, 12, 0, 1, 1);

        VIEW_ADC0_RANGE_5 = new QPushButton(Radoutcontrol);
        VIEW_ADC0_RANGE_5->setObjectName(QStringLiteral("VIEW_ADC0_RANGE_5"));
        VIEW_ADC0_RANGE_5->setMinimumSize(QSize(25, 25));
        VIEW_ADC0_RANGE_5->setMaximumSize(QSize(25, 25));
        VIEW_ADC0_RANGE_5->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC0_RANGE_5->setStyleSheet(QStringLiteral(""));
        VIEW_ADC0_RANGE_5->setIcon(icon7);
        VIEW_ADC0_RANGE_5->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC0_RANGE_5, 7, 2, 1, 1);

        WRITE_MAX_RHD_PAYLOAD = new QPushButton(Radoutcontrol);
        WRITE_MAX_RHD_PAYLOAD->setObjectName(QStringLiteral("WRITE_MAX_RHD_PAYLOAD"));
        WRITE_MAX_RHD_PAYLOAD->setMinimumSize(QSize(25, 25));
        WRITE_MAX_RHD_PAYLOAD->setMaximumSize(QSize(25, 25));
        WRITE_MAX_RHD_PAYLOAD->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_MAX_RHD_PAYLOAD->setStyleSheet(QStringLiteral(""));
        WRITE_MAX_RHD_PAYLOAD->setIcon(icon6);
        WRITE_MAX_RHD_PAYLOAD->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_MAX_RHD_PAYLOAD, 10, 3, 1, 1);

        lineEdit_DCID_delay = new QLineEdit(Radoutcontrol);
        lineEdit_DCID_delay->setObjectName(QStringLiteral("lineEdit_DCID_delay"));
        lineEdit_DCID_delay->setMinimumSize(QSize(0, 25));
        lineEdit_DCID_delay->setMaximumSize(QSize(16777215, 25));
        lineEdit_DCID_delay->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_DCID_delay->setStyleSheet(QStringLiteral(""));
        lineEdit_DCID_delay->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_DCID_delay, 14, 1, 1, 1);

        VIEW_ADC1_RANGE_5 = new QPushButton(Radoutcontrol);
        VIEW_ADC1_RANGE_5->setObjectName(QStringLiteral("VIEW_ADC1_RANGE_5"));
        VIEW_ADC1_RANGE_5->setMinimumSize(QSize(25, 25));
        VIEW_ADC1_RANGE_5->setMaximumSize(QSize(25, 25));
        VIEW_ADC1_RANGE_5->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC1_RANGE_5->setStyleSheet(QStringLiteral(""));
        VIEW_ADC1_RANGE_5->setIcon(icon7);
        VIEW_ADC1_RANGE_5->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC1_RANGE_5, 8, 2, 1, 1);

        VIEW_ADC0_RANGE_4 = new QPushButton(Radoutcontrol);
        VIEW_ADC0_RANGE_4->setObjectName(QStringLiteral("VIEW_ADC0_RANGE_4"));
        VIEW_ADC0_RANGE_4->setMinimumSize(QSize(25, 25));
        VIEW_ADC0_RANGE_4->setMaximumSize(QSize(25, 25));
        VIEW_ADC0_RANGE_4->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC0_RANGE_4->setStyleSheet(QStringLiteral(""));
        VIEW_ADC0_RANGE_4->setIcon(icon7);
        VIEW_ADC0_RANGE_4->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC0_RANGE_4, 5, 2, 1, 1);

        lineEdit_trg_bunch_freq = new QLineEdit(Radoutcontrol);
        lineEdit_trg_bunch_freq->setObjectName(QStringLiteral("lineEdit_trg_bunch_freq"));
        lineEdit_trg_bunch_freq->setMinimumSize(QSize(0, 25));
        lineEdit_trg_bunch_freq->setMaximumSize(QSize(16777215, 25));
        lineEdit_trg_bunch_freq->setStyleSheet(QStringLiteral(""));
        lineEdit_trg_bunch_freq->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_trg_bunch_freq, 5, 1, 1, 1);

        Trigg_freq_offset = new QLabel(Radoutcontrol);
        Trigg_freq_offset->setObjectName(QStringLiteral("Trigg_freq_offset"));
        Trigg_freq_offset->setMinimumSize(QSize(0, 25));
        Trigg_freq_offset->setMaximumSize(QSize(16777215, 25));
        Trigg_freq_offset->setStyleSheet(QStringLiteral("color: rgb(23, 180, 49);"));

        gridLayout_7->addWidget(Trigg_freq_offset, 6, 0, 1, 1);

        WRITE_FEE_ID = new QPushButton(Radoutcontrol);
        WRITE_FEE_ID->setObjectName(QStringLiteral("WRITE_FEE_ID"));
        WRITE_FEE_ID->setMinimumSize(QSize(25, 25));
        WRITE_FEE_ID->setMaximumSize(QSize(25, 25));
        WRITE_FEE_ID->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_FEE_ID->setStyleSheet(QStringLiteral(""));
        WRITE_FEE_ID->setIcon(icon6);
        WRITE_FEE_ID->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_FEE_ID, 9, 3, 1, 1);

        WRITE_ADC1_OFFSET_3 = new QPushButton(Radoutcontrol);
        WRITE_ADC1_OFFSET_3->setObjectName(QStringLiteral("WRITE_ADC1_OFFSET_3"));
        WRITE_ADC1_OFFSET_3->setMinimumSize(QSize(25, 25));
        WRITE_ADC1_OFFSET_3->setMaximumSize(QSize(25, 25));
        WRITE_ADC1_OFFSET_3->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC1_OFFSET_3->setStyleSheet(QStringLiteral(""));
        WRITE_ADC1_OFFSET_3->setIcon(icon6);
        WRITE_ADC1_OFFSET_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC1_OFFSET_3, 2, 3, 1, 1);

        lineEdit_dat_freq_offset = new QLineEdit(Radoutcontrol);
        lineEdit_dat_freq_offset->setObjectName(QStringLiteral("lineEdit_dat_freq_offset"));
        lineEdit_dat_freq_offset->setMinimumSize(QSize(0, 25));
        lineEdit_dat_freq_offset->setMaximumSize(QSize(16777215, 25));
        lineEdit_dat_freq_offset->setStyleSheet(QStringLiteral(""));
        lineEdit_dat_freq_offset->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_dat_freq_offset, 8, 1, 1, 1);

        lineEdit_dat_bunch_freq = new QLineEdit(Radoutcontrol);
        lineEdit_dat_bunch_freq->setObjectName(QStringLiteral("lineEdit_dat_bunch_freq"));
        lineEdit_dat_bunch_freq->setMinimumSize(QSize(0, 25));
        lineEdit_dat_bunch_freq->setMaximumSize(QSize(16777215, 25));
        lineEdit_dat_bunch_freq->setStyleSheet(QStringLiteral(""));
        lineEdit_dat_bunch_freq->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_dat_bunch_freq, 7, 1, 1, 1);

        Data_freq_offset = new QLabel(Radoutcontrol);
        Data_freq_offset->setObjectName(QStringLiteral("Data_freq_offset"));
        Data_freq_offset->setMinimumSize(QSize(0, 25));
        Data_freq_offset->setMaximumSize(QSize(16777215, 25));
        Data_freq_offset->setStyleSheet(QStringLiteral("color: rgb(221, 59, 10);"));

        gridLayout_7->addWidget(Data_freq_offset, 8, 0, 1, 1);

        lineEdit_trg_freq_offset = new QLineEdit(Radoutcontrol);
        lineEdit_trg_freq_offset->setObjectName(QStringLiteral("lineEdit_trg_freq_offset"));
        lineEdit_trg_freq_offset->setMinimumSize(QSize(0, 25));
        lineEdit_trg_freq_offset->setMaximumSize(QSize(16777215, 25));
        lineEdit_trg_freq_offset->setStyleSheet(QStringLiteral(""));
        lineEdit_trg_freq_offset->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_trg_freq_offset, 6, 1, 1, 1);

        WRITE_ADC1_RANGE_3 = new QPushButton(Radoutcontrol);
        WRITE_ADC1_RANGE_3->setObjectName(QStringLiteral("WRITE_ADC1_RANGE_3"));
        WRITE_ADC1_RANGE_3->setMinimumSize(QSize(25, 25));
        WRITE_ADC1_RANGE_3->setMaximumSize(QSize(25, 25));
        WRITE_ADC1_RANGE_3->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC1_RANGE_3->setStyleSheet(QStringLiteral(""));
        WRITE_ADC1_RANGE_3->setIcon(icon6);
        WRITE_ADC1_RANGE_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC1_RANGE_3, 4, 3, 1, 1);

        lineEdit_trigger_respond_mask = new QLineEdit(Radoutcontrol);
        lineEdit_trigger_respond_mask->setObjectName(QStringLiteral("lineEdit_trigger_respond_mask"));
        lineEdit_trigger_respond_mask->setMinimumSize(QSize(0, 25));
        lineEdit_trigger_respond_mask->setMaximumSize(QSize(16777215, 25));
        lineEdit_trigger_respond_mask->setStyleSheet(QStringLiteral(""));
        lineEdit_trigger_respond_mask->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_trigger_respond_mask, 0, 1, 1, 1);

        MAx_RDH_payload = new QLabel(Radoutcontrol);
        MAx_RDH_payload->setObjectName(QStringLiteral("MAx_RDH_payload"));
        MAx_RDH_payload->setMinimumSize(QSize(0, 25));
        MAx_RDH_payload->setMaximumSize(QSize(16777215, 25));
        MAx_RDH_payload->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(MAx_RDH_payload, 10, 0, 1, 1);

        lineEdit_CRU_trigger_compar_delay = new QLineEdit(Radoutcontrol);
        lineEdit_CRU_trigger_compar_delay->setObjectName(QStringLiteral("lineEdit_CRU_trigger_compar_delay"));
        lineEdit_CRU_trigger_compar_delay->setMinimumSize(QSize(0, 25));
        lineEdit_CRU_trigger_compar_delay->setMaximumSize(QSize(16777215, 25));
        lineEdit_CRU_trigger_compar_delay->setStyleSheet(QStringLiteral(""));
        lineEdit_CRU_trigger_compar_delay->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_CRU_trigger_compar_delay, 11, 1, 1, 1);

        VIEW_FEE_ID = new QPushButton(Radoutcontrol);
        VIEW_FEE_ID->setObjectName(QStringLiteral("VIEW_FEE_ID"));
        VIEW_FEE_ID->setEnabled(true);
        VIEW_FEE_ID->setMinimumSize(QSize(25, 25));
        VIEW_FEE_ID->setMaximumSize(QSize(25, 25));
        VIEW_FEE_ID->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_FEE_ID->setStyleSheet(QStringLiteral(""));
        VIEW_FEE_ID->setIcon(icon7);
        VIEW_FEE_ID->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_FEE_ID, 9, 2, 1, 1);

        WRITE_ADC_RANGE_4 = new QPushButton(Radoutcontrol);
        WRITE_ADC_RANGE_4->setObjectName(QStringLiteral("WRITE_ADC_RANGE_4"));
        WRITE_ADC_RANGE_4->setMinimumSize(QSize(25, 25));
        WRITE_ADC_RANGE_4->setMaximumSize(QSize(25, 25));
        WRITE_ADC_RANGE_4->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_RANGE_4->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_RANGE_4->setIcon(icon6);
        WRITE_ADC_RANGE_4->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC_RANGE_4, 7, 3, 1, 1);

        WRITE_ADC1_RANGE_4 = new QPushButton(Radoutcontrol);
        WRITE_ADC1_RANGE_4->setObjectName(QStringLiteral("WRITE_ADC1_RANGE_4"));
        WRITE_ADC1_RANGE_4->setMinimumSize(QSize(25, 25));
        WRITE_ADC1_RANGE_4->setMaximumSize(QSize(25, 25));
        WRITE_ADC1_RANGE_4->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC1_RANGE_4->setStyleSheet(QStringLiteral(""));
        WRITE_ADC1_RANGE_4->setIcon(icon6);
        WRITE_ADC1_RANGE_4->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC1_RANGE_4, 6, 3, 1, 1);

        VIEW_CRU_trg = new QPushButton(Radoutcontrol);
        VIEW_CRU_trg->setObjectName(QStringLiteral("VIEW_CRU_trg"));
        VIEW_CRU_trg->setMinimumSize(QSize(25, 25));
        VIEW_CRU_trg->setMaximumSize(QSize(25, 25));
        VIEW_CRU_trg->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_CRU_trg->setStyleSheet(QStringLiteral(""));
        VIEW_CRU_trg->setIcon(icon7);
        VIEW_CRU_trg->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_CRU_trg, 11, 2, 1, 1);

        lineEdit_Det_field = new QLineEdit(Radoutcontrol);
        lineEdit_Det_field->setObjectName(QStringLiteral("lineEdit_Det_field"));
        lineEdit_Det_field->setMinimumSize(QSize(0, 25));
        lineEdit_Det_field->setMaximumSize(QSize(16777215, 25));
        lineEdit_Det_field->setStyleSheet(QStringLiteral(""));
        lineEdit_Det_field->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_Det_field, 13, 1, 1, 1);

        lineEdit_data_bunch_pattern = new QLineEdit(Radoutcontrol);
        lineEdit_data_bunch_pattern->setObjectName(QStringLiteral("lineEdit_data_bunch_pattern"));
        lineEdit_data_bunch_pattern->setMinimumSize(QSize(0, 25));
        lineEdit_data_bunch_pattern->setMaximumSize(QSize(16777215, 25));
        lineEdit_data_bunch_pattern->setStyleSheet(QStringLiteral(""));
        lineEdit_data_bunch_pattern->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_data_bunch_pattern, 1, 1, 1, 1);

        lineEdit_FEE_ID = new QLineEdit(Radoutcontrol);
        lineEdit_FEE_ID->setObjectName(QStringLiteral("lineEdit_FEE_ID"));
        lineEdit_FEE_ID->setMinimumSize(QSize(0, 25));
        lineEdit_FEE_ID->setMaximumSize(QSize(16777215, 25));
        lineEdit_FEE_ID->setStyleSheet(QStringLiteral(""));
        lineEdit_FEE_ID->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_FEE_ID, 9, 1, 1, 1);

        VIEW_DET = new QPushButton(Radoutcontrol);
        VIEW_DET->setObjectName(QStringLiteral("VIEW_DET"));
        VIEW_DET->setMinimumSize(QSize(25, 25));
        VIEW_DET->setMaximumSize(QSize(25, 25));
        VIEW_DET->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_DET->setStyleSheet(QStringLiteral(""));
        VIEW_DET->setIcon(icon7);
        VIEW_DET->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_DET, 13, 2, 1, 1);

        lineEdit_PAR = new QLineEdit(Radoutcontrol);
        lineEdit_PAR->setObjectName(QStringLiteral("lineEdit_PAR"));
        lineEdit_PAR->setMinimumSize(QSize(0, 25));
        lineEdit_PAR->setMaximumSize(QSize(16777215, 25));
        lineEdit_PAR->setStyleSheet(QStringLiteral(""));
        lineEdit_PAR->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_PAR, 12, 1, 1, 1);

        VIEW_ADC_ZERO_4 = new QPushButton(Radoutcontrol);
        VIEW_ADC_ZERO_4->setObjectName(QStringLiteral("VIEW_ADC_ZERO_4"));
        VIEW_ADC_ZERO_4->setMinimumSize(QSize(25, 25));
        VIEW_ADC_ZERO_4->setMaximumSize(QSize(25, 25));
        VIEW_ADC_ZERO_4->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_ZERO_4->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_ZERO_4->setIcon(icon7);
        VIEW_ADC_ZERO_4->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC_ZERO_4, 0, 2, 1, 1);

        VIEW_MAX_RHD_PAYLOAD = new QPushButton(Radoutcontrol);
        VIEW_MAX_RHD_PAYLOAD->setObjectName(QStringLiteral("VIEW_MAX_RHD_PAYLOAD"));
        VIEW_MAX_RHD_PAYLOAD->setMinimumSize(QSize(25, 25));
        VIEW_MAX_RHD_PAYLOAD->setMaximumSize(QSize(25, 25));
        VIEW_MAX_RHD_PAYLOAD->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_MAX_RHD_PAYLOAD->setStyleSheet(QStringLiteral(""));
        VIEW_MAX_RHD_PAYLOAD->setIcon(icon7);
        VIEW_MAX_RHD_PAYLOAD->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_MAX_RHD_PAYLOAD, 10, 2, 1, 1);

        WRITE_CRU_trg = new QPushButton(Radoutcontrol);
        WRITE_CRU_trg->setObjectName(QStringLiteral("WRITE_CRU_trg"));
        WRITE_CRU_trg->setMinimumSize(QSize(25, 25));
        WRITE_CRU_trg->setMaximumSize(QSize(25, 25));
        WRITE_CRU_trg->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_CRU_trg->setStyleSheet(QStringLiteral(""));
        WRITE_CRU_trg->setIcon(icon6);
        WRITE_CRU_trg->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_CRU_trg, 11, 3, 1, 1);

        Trg_bunch_freq = new QLabel(Radoutcontrol);
        Trg_bunch_freq->setObjectName(QStringLiteral("Trg_bunch_freq"));
        Trg_bunch_freq->setMinimumSize(QSize(0, 25));
        Trg_bunch_freq->setMaximumSize(QSize(16777215, 25));
        Trg_bunch_freq->setStyleSheet(QStringLiteral("color: rgb(23, 180, 49);"));

        gridLayout_7->addWidget(Trg_bunch_freq, 5, 0, 1, 1);

        FEE_ID = new QLabel(Radoutcontrol);
        FEE_ID->setObjectName(QStringLiteral("FEE_ID"));
        FEE_ID->setMinimumSize(QSize(0, 25));
        FEE_ID->setMaximumSize(QSize(16777215, 25));
        FEE_ID->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(FEE_ID, 9, 0, 1, 1);

        WRITE_ADC_DELAY_3 = new QPushButton(Radoutcontrol);
        WRITE_ADC_DELAY_3->setObjectName(QStringLiteral("WRITE_ADC_DELAY_3"));
        WRITE_ADC_DELAY_3->setMinimumSize(QSize(25, 25));
        WRITE_ADC_DELAY_3->setMaximumSize(QSize(25, 25));
        WRITE_ADC_DELAY_3->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_DELAY_3->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_DELAY_3->setIcon(icon6);
        WRITE_ADC_DELAY_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC_DELAY_3, 1, 3, 1, 1);

        WRITE_ADC1_RANGE_5 = new QPushButton(Radoutcontrol);
        WRITE_ADC1_RANGE_5->setObjectName(QStringLiteral("WRITE_ADC1_RANGE_5"));
        WRITE_ADC1_RANGE_5->setMinimumSize(QSize(25, 25));
        WRITE_ADC1_RANGE_5->setMaximumSize(QSize(25, 25));
        WRITE_ADC1_RANGE_5->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC1_RANGE_5->setStyleSheet(QStringLiteral(""));
        WRITE_ADC1_RANGE_5->setIcon(icon6);
        WRITE_ADC1_RANGE_5->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC1_RANGE_5, 8, 3, 1, 1);

        Trigger_respond_mask = new QLabel(Radoutcontrol);
        Trigger_respond_mask->setObjectName(QStringLiteral("Trigger_respond_mask"));
        Trigger_respond_mask->setMinimumSize(QSize(0, 25));
        Trigger_respond_mask->setMaximumSize(QSize(16777215, 25));
        Trigger_respond_mask->setStyleSheet(QStringLiteral("color: rgb(221, 59, 10);"));
        Trigger_respond_mask->setFrameShape(QFrame::NoFrame);

        gridLayout_7->addWidget(Trigger_respond_mask, 0, 0, 1, 1);

        lineEdit_trg_cont_pat_2 = new QLineEdit(Radoutcontrol);
        lineEdit_trg_cont_pat_2->setObjectName(QStringLiteral("lineEdit_trg_cont_pat_2"));
        lineEdit_trg_cont_pat_2->setMinimumSize(QSize(0, 25));
        lineEdit_trg_cont_pat_2->setMaximumSize(QSize(16777215, 25));
        lineEdit_trg_cont_pat_2->setStyleSheet(QStringLiteral(""));
        lineEdit_trg_cont_pat_2->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_trg_cont_pat_2, 4, 1, 1, 1);

        VIEW_ADC0_RANGE_3 = new QPushButton(Radoutcontrol);
        VIEW_ADC0_RANGE_3->setObjectName(QStringLiteral("VIEW_ADC0_RANGE_3"));
        VIEW_ADC0_RANGE_3->setMinimumSize(QSize(25, 25));
        VIEW_ADC0_RANGE_3->setMaximumSize(QSize(25, 25));
        VIEW_ADC0_RANGE_3->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC0_RANGE_3->setStyleSheet(QStringLiteral(""));
        VIEW_ADC0_RANGE_3->setIcon(icon7);
        VIEW_ADC0_RANGE_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC0_RANGE_3, 3, 2, 1, 1);

        WRITE_BCID_delay = new QPushButton(Radoutcontrol);
        WRITE_BCID_delay->setObjectName(QStringLiteral("WRITE_BCID_delay"));
        WRITE_BCID_delay->setMinimumSize(QSize(25, 25));
        WRITE_BCID_delay->setMaximumSize(QSize(25, 25));
        WRITE_BCID_delay->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_BCID_delay->setStyleSheet(QStringLiteral(""));
        WRITE_BCID_delay->setIcon(icon6);
        WRITE_BCID_delay->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_BCID_delay, 14, 3, 1, 1);

        lineEdit_trg_cont_pat_1 = new QLineEdit(Radoutcontrol);
        lineEdit_trg_cont_pat_1->setObjectName(QStringLiteral("lineEdit_trg_cont_pat_1"));
        lineEdit_trg_cont_pat_1->setMinimumSize(QSize(0, 25));
        lineEdit_trg_cont_pat_1->setMaximumSize(QSize(16777215, 25));
        lineEdit_trg_cont_pat_1->setStyleSheet(QStringLiteral(""));
        lineEdit_trg_cont_pat_1->setClearButtonEnabled(true);

        gridLayout_7->addWidget(lineEdit_trg_cont_pat_1, 3, 1, 1, 1);

        VIEW_PAR = new QPushButton(Radoutcontrol);
        VIEW_PAR->setObjectName(QStringLiteral("VIEW_PAR"));
        VIEW_PAR->setEnabled(true);
        VIEW_PAR->setMinimumSize(QSize(25, 25));
        VIEW_PAR->setMaximumSize(QSize(25, 25));
        VIEW_PAR->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_PAR->setStyleSheet(QStringLiteral(""));
        VIEW_PAR->setIcon(icon7);
        VIEW_PAR->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_PAR, 12, 2, 1, 1);

        DET_FIELD = new QLabel(Radoutcontrol);
        DET_FIELD->setObjectName(QStringLiteral("DET_FIELD"));
        DET_FIELD->setMinimumSize(QSize(0, 25));
        DET_FIELD->setMaximumSize(QSize(16777215, 25));
        DET_FIELD->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(DET_FIELD, 13, 0, 1, 1);

        WRITE_ADC_RANGE_2 = new QPushButton(Radoutcontrol);
        WRITE_ADC_RANGE_2->setObjectName(QStringLiteral("WRITE_ADC_RANGE_2"));
        WRITE_ADC_RANGE_2->setMinimumSize(QSize(25, 25));
        WRITE_ADC_RANGE_2->setMaximumSize(QSize(25, 25));
        WRITE_ADC_RANGE_2->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_RANGE_2->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_RANGE_2->setIcon(icon6);
        WRITE_ADC_RANGE_2->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(WRITE_ADC_RANGE_2, 3, 3, 1, 1);

        VIEW_ADC_DELAY_3 = new QPushButton(Radoutcontrol);
        VIEW_ADC_DELAY_3->setObjectName(QStringLiteral("VIEW_ADC_DELAY_3"));
        VIEW_ADC_DELAY_3->setMinimumSize(QSize(25, 25));
        VIEW_ADC_DELAY_3->setMaximumSize(QSize(25, 25));
        VIEW_ADC_DELAY_3->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_DELAY_3->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_DELAY_3->setIcon(icon7);
        VIEW_ADC_DELAY_3->setIconSize(QSize(21, 21));

        gridLayout_7->addWidget(VIEW_ADC_DELAY_3, 1, 2, 1, 1);

        CRU_trg_comp_dal = new QLabel(Radoutcontrol);
        CRU_trg_comp_dal->setObjectName(QStringLiteral("CRU_trg_comp_dal"));
        CRU_trg_comp_dal->setMinimumSize(QSize(0, 25));
        CRU_trg_comp_dal->setMaximumSize(QSize(16777215, 25));
        CRU_trg_comp_dal->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(CRU_trg_comp_dal, 11, 0, 1, 1);

        GBTstatusbits = new QGroupBox(centralWidget);
        GBTstatusbits->setObjectName(QStringLiteral("GBTstatusbits"));
        GBTstatusbits->setGeometry(QRect(630, 540, 490, 180));
        GBTstatusbits->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        gridLayout_8 = new QGridLayout(GBTstatusbits);
        gridLayout_8->setSpacing(1);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_48 = new QLabel(GBTstatusbits);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setMinimumSize(QSize(150, 25));
        label_48->setMaximumSize(QSize(150, 25));
        label_48->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_48, 5, 2, 1, 1);

        RX_phase_error = new QLabel(GBTstatusbits);
        RX_phase_error->setObjectName(QStringLiteral("RX_phase_error"));
        RX_phase_error->setMinimumSize(QSize(150, 25));
        RX_phase_error->setMaximumSize(QSize(150, 25));
        RX_phase_error->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(RX_phase_error, 6, 2, 1, 1);

        LCD_RX_PHASE_ERROR = new QLCDNumber(GBTstatusbits);
        LCD_RX_PHASE_ERROR->setObjectName(QStringLiteral("LCD_RX_PHASE_ERROR"));
        LCD_RX_PHASE_ERROR->setMinimumSize(QSize(70, 25));
        LCD_RX_PHASE_ERROR->setMaximumSize(QSize(70, 25));
        LCD_RX_PHASE_ERROR->setAutoFillBackground(false);
        LCD_RX_PHASE_ERROR->setStyleSheet(QStringLiteral(""));
        LCD_RX_PHASE_ERROR->setFrameShadow(QFrame::Plain);
        LCD_RX_PHASE_ERROR->setLineWidth(2);

        gridLayout_8->addWidget(LCD_RX_PHASE_ERROR, 6, 3, 1, 1);

        lcdNumber_13 = new QLCDNumber(GBTstatusbits);
        lcdNumber_13->setObjectName(QStringLiteral("lcdNumber_13"));
        lcdNumber_13->setMinimumSize(QSize(70, 25));
        lcdNumber_13->setMaximumSize(QSize(70, 25));
        lcdNumber_13->setAutoFillBackground(false);
        lcdNumber_13->setStyleSheet(QStringLiteral(""));
        lcdNumber_13->setFrameShadow(QFrame::Plain);
        lcdNumber_13->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_13, 0, 1, 1, 1);

        label_45 = new QLabel(GBTstatusbits);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setMinimumSize(QSize(150, 25));
        label_45->setMaximumSize(QSize(150, 25));
        label_45->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_45, 0, 2, 1, 1);

        label_44 = new QLabel(GBTstatusbits);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setMinimumSize(QSize(150, 25));
        label_44->setMaximumSize(QSize(150, 25));
        label_44->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_44, 6, 0, 1, 1);

        lcdNumber_16 = new QLCDNumber(GBTstatusbits);
        lcdNumber_16->setObjectName(QStringLiteral("lcdNumber_16"));
        lcdNumber_16->setMinimumSize(QSize(70, 25));
        lcdNumber_16->setMaximumSize(QSize(70, 25));
        lcdNumber_16->setAutoFillBackground(false);
        lcdNumber_16->setStyleSheet(QStringLiteral(""));
        lcdNumber_16->setFrameShadow(QFrame::Plain);
        lcdNumber_16->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_16, 5, 1, 1, 1);

        lcdNumber_20 = new QLCDNumber(GBTstatusbits);
        lcdNumber_20->setObjectName(QStringLiteral("lcdNumber_20"));
        lcdNumber_20->setMinimumSize(QSize(70, 25));
        lcdNumber_20->setMaximumSize(QSize(70, 25));
        lcdNumber_20->setAutoFillBackground(false);
        lcdNumber_20->setStyleSheet(QStringLiteral(""));
        lcdNumber_20->setFrameShadow(QFrame::Plain);
        lcdNumber_20->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_20, 4, 3, 1, 1);

        label_47 = new QLabel(GBTstatusbits);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setMinimumSize(QSize(150, 25));
        label_47->setMaximumSize(QSize(150, 25));
        label_47->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_47, 4, 2, 1, 1);

        lcdNumber_15 = new QLCDNumber(GBTstatusbits);
        lcdNumber_15->setObjectName(QStringLiteral("lcdNumber_15"));
        lcdNumber_15->setMinimumSize(QSize(70, 25));
        lcdNumber_15->setMaximumSize(QSize(70, 25));
        lcdNumber_15->setAutoFillBackground(false);
        lcdNumber_15->setStyleSheet(QStringLiteral(""));
        lcdNumber_15->setFrameShadow(QFrame::Plain);
        lcdNumber_15->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_15, 4, 1, 1, 1);

        label_46 = new QLabel(GBTstatusbits);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setMinimumSize(QSize(150, 25));
        label_46->setMaximumSize(QSize(150, 25));
        label_46->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_46, 3, 2, 1, 1);

        lcdNumber_17 = new QLCDNumber(GBTstatusbits);
        lcdNumber_17->setObjectName(QStringLiteral("lcdNumber_17"));
        lcdNumber_17->setMinimumSize(QSize(70, 25));
        lcdNumber_17->setMaximumSize(QSize(70, 25));
        lcdNumber_17->setAutoFillBackground(false);
        lcdNumber_17->setStyleSheet(QStringLiteral(""));
        lcdNumber_17->setFrameShadow(QFrame::Plain);
        lcdNumber_17->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_17, 6, 1, 1, 1);

        lcdNumber_14 = new QLCDNumber(GBTstatusbits);
        lcdNumber_14->setObjectName(QStringLiteral("lcdNumber_14"));
        lcdNumber_14->setMinimumSize(QSize(70, 25));
        lcdNumber_14->setMaximumSize(QSize(70, 25));
        lcdNumber_14->setAutoFillBackground(false);
        lcdNumber_14->setStyleSheet(QStringLiteral(""));
        lcdNumber_14->setFrameShadow(QFrame::Plain);
        lcdNumber_14->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_14, 3, 1, 1, 1);

        lcdNumber_21 = new QLCDNumber(GBTstatusbits);
        lcdNumber_21->setObjectName(QStringLiteral("lcdNumber_21"));
        lcdNumber_21->setMinimumSize(QSize(70, 25));
        lcdNumber_21->setMaximumSize(QSize(70, 25));
        lcdNumber_21->setAutoFillBackground(false);
        lcdNumber_21->setStyleSheet(QStringLiteral(""));
        lcdNumber_21->setFrameShadow(QFrame::Plain);
        lcdNumber_21->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_21, 5, 3, 1, 1);

        label_40 = new QLabel(GBTstatusbits);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setMinimumSize(QSize(150, 25));
        label_40->setMaximumSize(QSize(150, 25));
        label_40->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_40, 3, 0, 1, 1);

        label_39 = new QLabel(GBTstatusbits);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setMinimumSize(QSize(150, 25));
        label_39->setMaximumSize(QSize(150, 25));
        label_39->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_39, 0, 0, 1, 1);

        lcdNumber_19 = new QLCDNumber(GBTstatusbits);
        lcdNumber_19->setObjectName(QStringLiteral("lcdNumber_19"));
        lcdNumber_19->setMinimumSize(QSize(70, 25));
        lcdNumber_19->setMaximumSize(QSize(70, 25));
        lcdNumber_19->setAutoFillBackground(false);
        lcdNumber_19->setStyleSheet(QStringLiteral(""));
        lcdNumber_19->setFrameShadow(QFrame::Plain);
        lcdNumber_19->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_19, 3, 3, 1, 1);

        label_43 = new QLabel(GBTstatusbits);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(150, 25));
        label_43->setMaximumSize(QSize(150, 25));
        label_43->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_43, 5, 0, 1, 1);

        label_42 = new QLabel(GBTstatusbits);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setMinimumSize(QSize(150, 25));
        label_42->setMaximumSize(QSize(150, 25));
        label_42->setStyleSheet(QStringLiteral(""));

        gridLayout_8->addWidget(label_42, 4, 0, 1, 1);

        lcdNumber_18 = new QLCDNumber(GBTstatusbits);
        lcdNumber_18->setObjectName(QStringLiteral("lcdNumber_18"));
        lcdNumber_18->setMinimumSize(QSize(70, 25));
        lcdNumber_18->setMaximumSize(QSize(70, 25));
        lcdNumber_18->setAutoFillBackground(false);
        lcdNumber_18->setStyleSheet(QStringLiteral(""));
        lcdNumber_18->setFrameShadow(QFrame::Plain);
        lcdNumber_18->setLineWidth(2);

        gridLayout_8->addWidget(lcdNumber_18, 0, 3, 1, 1);

        Readoutstatus = new QGroupBox(centralWidget);
        Readoutstatus->setObjectName(QStringLiteral("Readoutstatus"));
        Readoutstatus->setGeometry(QRect(920, 90, 200, 440));
        Readoutstatus->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        gridLayout_9 = new QGridLayout(Readoutstatus);
        gridLayout_9->setSpacing(1);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_54 = new QLabel(Readoutstatus);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(label_54, 0, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(Readoutstatus);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setMinimumSize(QSize(70, 25));
        lcdNumber_2->setMaximumSize(QSize(70, 25));
        lcdNumber_2->setAutoFillBackground(false);
        lcdNumber_2->setStyleSheet(QStringLiteral(""));
        lcdNumber_2->setFrameShadow(QFrame::Plain);
        lcdNumber_2->setLineWidth(2);

        gridLayout_9->addWidget(lcdNumber_2, 0, 1, 1, 1);

        label_52 = new QLabel(Readoutstatus);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(label_52, 1, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(Readoutstatus);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setMinimumSize(QSize(70, 25));
        lcdNumber_3->setMaximumSize(QSize(70, 25));
        lcdNumber_3->setAutoFillBackground(false);
        lcdNumber_3->setStyleSheet(QStringLiteral(""));
        lcdNumber_3->setFrameShadow(QFrame::Plain);
        lcdNumber_3->setLineWidth(2);

        gridLayout_9->addWidget(lcdNumber_3, 1, 1, 1, 1);

        BCID_sync_mode = new QLabel(Readoutstatus);
        BCID_sync_mode->setObjectName(QStringLiteral("BCID_sync_mode"));
        BCID_sync_mode->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(BCID_sync_mode, 2, 0, 1, 1);

        LCD_BCiD_SYNC_MODE = new QLCDNumber(Readoutstatus);
        LCD_BCiD_SYNC_MODE->setObjectName(QStringLiteral("LCD_BCiD_SYNC_MODE"));
        LCD_BCiD_SYNC_MODE->setMinimumSize(QSize(70, 25));
        LCD_BCiD_SYNC_MODE->setMaximumSize(QSize(70, 25));
        LCD_BCiD_SYNC_MODE->setAutoFillBackground(false);
        LCD_BCiD_SYNC_MODE->setStyleSheet(QStringLiteral(""));
        LCD_BCiD_SYNC_MODE->setFrameShadow(QFrame::Plain);
        LCD_BCiD_SYNC_MODE->setLineWidth(2);

        gridLayout_9->addWidget(LCD_BCiD_SYNC_MODE, 2, 1, 1, 1);

        label_55 = new QLabel(Readoutstatus);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(label_55, 3, 0, 1, 1);

        lcdNumber_9 = new QLCDNumber(Readoutstatus);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));
        lcdNumber_9->setMinimumSize(QSize(70, 25));
        lcdNumber_9->setMaximumSize(QSize(70, 25));
        lcdNumber_9->setAutoFillBackground(false);
        lcdNumber_9->setStyleSheet(QStringLiteral(""));
        lcdNumber_9->setFrameShadow(QFrame::Plain);
        lcdNumber_9->setLineWidth(2);

        gridLayout_9->addWidget(lcdNumber_9, 3, 1, 1, 1);

        Selector_fifo_count = new QLabel(Readoutstatus);
        Selector_fifo_count->setObjectName(QStringLiteral("Selector_fifo_count"));
        Selector_fifo_count->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(Selector_fifo_count, 4, 0, 1, 1);

        LCD_selector_fifo_count = new QLCDNumber(Readoutstatus);
        LCD_selector_fifo_count->setObjectName(QStringLiteral("LCD_selector_fifo_count"));
        LCD_selector_fifo_count->setMinimumSize(QSize(70, 25));
        LCD_selector_fifo_count->setMaximumSize(QSize(70, 25));
        LCD_selector_fifo_count->setAutoFillBackground(false);
        LCD_selector_fifo_count->setStyleSheet(QStringLiteral(""));
        LCD_selector_fifo_count->setFrameShadow(QFrame::Plain);
        LCD_selector_fifo_count->setLineWidth(2);

        gridLayout_9->addWidget(LCD_selector_fifo_count, 4, 1, 1, 1);

        RAW_FIFO_count = new QLabel(Readoutstatus);
        RAW_FIFO_count->setObjectName(QStringLiteral("RAW_FIFO_count"));
        RAW_FIFO_count->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(RAW_FIFO_count, 5, 0, 1, 1);

        LCD_Raw_fifo_count = new QLCDNumber(Readoutstatus);
        LCD_Raw_fifo_count->setObjectName(QStringLiteral("LCD_Raw_fifo_count"));
        LCD_Raw_fifo_count->setMinimumSize(QSize(70, 25));
        LCD_Raw_fifo_count->setMaximumSize(QSize(70, 25));
        LCD_Raw_fifo_count->setAutoFillBackground(false);
        LCD_Raw_fifo_count->setStyleSheet(QStringLiteral(""));
        LCD_Raw_fifo_count->setFrameShadow(QFrame::Plain);
        LCD_Raw_fifo_count->setLineWidth(2);

        gridLayout_9->addWidget(LCD_Raw_fifo_count, 5, 1, 1, 1);

        Selector_first = new QLabel(Readoutstatus);
        Selector_first->setObjectName(QStringLiteral("Selector_first"));
        Selector_first->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(Selector_first, 6, 0, 1, 1);

        LCD_selector_first = new QLCDNumber(Readoutstatus);
        LCD_selector_first->setObjectName(QStringLiteral("LCD_selector_first"));
        LCD_selector_first->setMinimumSize(QSize(70, 25));
        LCD_selector_first->setMaximumSize(QSize(70, 25));
        LCD_selector_first->setAutoFillBackground(false);
        LCD_selector_first->setStyleSheet(QStringLiteral(""));
        LCD_selector_first->setFrameShadow(QFrame::Plain);
        LCD_selector_first->setLineWidth(2);

        gridLayout_9->addWidget(LCD_selector_first, 6, 1, 1, 1);

        Selector_last = new QLabel(Readoutstatus);
        Selector_last->setObjectName(QStringLiteral("Selector_last"));
        Selector_last->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(Selector_last, 7, 0, 1, 1);

        LCD_selector_last = new QLCDNumber(Readoutstatus);
        LCD_selector_last->setObjectName(QStringLiteral("LCD_selector_last"));
        LCD_selector_last->setMinimumSize(QSize(70, 25));
        LCD_selector_last->setMaximumSize(QSize(70, 25));
        LCD_selector_last->setAutoFillBackground(false);
        LCD_selector_last->setStyleSheet(QStringLiteral(""));
        LCD_selector_last->setFrameShadow(QFrame::Plain);
        LCD_selector_last->setLineWidth(2);

        gridLayout_9->addWidget(LCD_selector_last, 7, 1, 1, 1);

        selector_hits = new QLabel(Readoutstatus);
        selector_hits->setObjectName(QStringLiteral("selector_hits"));
        selector_hits->setStyleSheet(QStringLiteral(""));

        gridLayout_9->addWidget(selector_hits, 8, 0, 1, 1);

        LCD_selector_hits = new QLCDNumber(Readoutstatus);
        LCD_selector_hits->setObjectName(QStringLiteral("LCD_selector_hits"));
        LCD_selector_hits->setMinimumSize(QSize(70, 25));
        LCD_selector_hits->setMaximumSize(QSize(70, 25));
        LCD_selector_hits->setAutoFillBackground(false);
        LCD_selector_hits->setStyleSheet(QStringLiteral(""));
        LCD_selector_hits->setFrameShadow(QFrame::Plain);
        LCD_selector_hits->setLineWidth(2);

        gridLayout_9->addWidget(LCD_selector_hits, 8, 1, 1, 1);

        Readout_rate = new QLabel(Readoutstatus);
        Readout_rate->setObjectName(QStringLiteral("Readout_rate"));
        Readout_rate->setMinimumSize(QSize(0, 25));
        Readout_rate->setMaximumSize(QSize(16777215, 25));

        gridLayout_9->addWidget(Readout_rate, 9, 0, 1, 1);

        LCD_readout_rate = new QLCDNumber(Readoutstatus);
        LCD_readout_rate->setObjectName(QStringLiteral("LCD_readout_rate"));
        LCD_readout_rate->setMinimumSize(QSize(70, 25));
        LCD_readout_rate->setMaximumSize(QSize(70, 25));
        LCD_readout_rate->setAutoFillBackground(false);
        LCD_readout_rate->setStyleSheet(QStringLiteral(""));
        LCD_readout_rate->setFrameShadow(QFrame::Plain);
        LCD_readout_rate->setLineWidth(2);

        gridLayout_9->addWidget(LCD_readout_rate, 9, 1, 1, 1);

        RX_phase = new QLabel(Readoutstatus);
        RX_phase->setObjectName(QStringLiteral("RX_phase"));
        RX_phase->setMinimumSize(QSize(0, 25));
        RX_phase->setMaximumSize(QSize(16777215, 25));

        gridLayout_9->addWidget(RX_phase, 10, 0, 1, 1);

        LCD_RX_phase = new QLCDNumber(Readoutstatus);
        LCD_RX_phase->setObjectName(QStringLiteral("LCD_RX_phase"));
        LCD_RX_phase->setMinimumSize(QSize(70, 25));
        LCD_RX_phase->setMaximumSize(QSize(70, 25));
        LCD_RX_phase->setAutoFillBackground(false);
        LCD_RX_phase->setStyleSheet(QStringLiteral(""));
        LCD_RX_phase->setFrameShadow(QFrame::Plain);
        LCD_RX_phase->setLineWidth(2);

        gridLayout_9->addWidget(LCD_RX_phase, 10, 1, 1, 1);

        Datagenerator = new QGroupBox(centralWidget);
        Datagenerator->setObjectName(QStringLiteral("Datagenerator"));
        Datagenerator->setGeometry(QRect(10, 430, 160, 110));
        Datagenerator->setStyleSheet(QStringLiteral(""));
        Datagenerator->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        verticalLayout_4 = new QVBoxLayout(Datagenerator);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        No_gen_dat = new QPushButton(Datagenerator);
        No_gen_dat->setObjectName(QStringLiteral("No_gen_dat"));
        No_gen_dat->setCursor(QCursor(Qt::PointingHandCursor));
        No_gen_dat->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(No_gen_dat);

        main_gen = new QPushButton(Datagenerator);
        main_gen->setObjectName(QStringLiteral("main_gen"));
        main_gen->setCursor(QCursor(Qt::PointingHandCursor));
        main_gen->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(main_gen);

        tx_gen = new QPushButton(Datagenerator);
        tx_gen->setObjectName(QStringLiteral("tx_gen"));
        tx_gen->setCursor(QCursor(Qt::PointingHandCursor));
        tx_gen->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(tx_gen);

        PM_BOARD_STATUS = new QGroupBox(centralWidget);
        PM_BOARD_STATUS->setObjectName(QStringLiteral("PM_BOARD_STATUS"));
        PM_BOARD_STATUS->setGeometry(QRect(200, 410, 181, 310));
        PM_BOARD_STATUS->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        gridLayout_10 = new QGridLayout(PM_BOARD_STATUS);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        lcdNumber_10 = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));
        lcdNumber_10->setMinimumSize(QSize(70, 25));
        lcdNumber_10->setMaximumSize(QSize(70, 25));
        lcdNumber_10->setFrameShadow(QFrame::Plain);
        lcdNumber_10->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber_10, 7, 1, 1, 1);

        lcdNumber_11 = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber_11->setObjectName(QStringLiteral("lcdNumber_11"));
        lcdNumber_11->setMinimumSize(QSize(70, 25));
        lcdNumber_11->setMaximumSize(QSize(70, 25));
        lcdNumber_11->setFrameShadow(QFrame::Plain);
        lcdNumber_11->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber_11, 8, 1, 1, 1);

        LOCK320 = new QLabel(PM_BOARD_STATUS);
        LOCK320->setObjectName(QStringLiteral("LOCK320"));

        gridLayout_10->addWidget(LOCK320, 9, 0, 1, 1);

        lcdNumber_8 = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));
        lcdNumber_8->setMinimumSize(QSize(70, 25));
        lcdNumber_8->setMaximumSize(QSize(70, 25));
        lcdNumber_8->setFrameShadow(QFrame::Plain);
        lcdNumber_8->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber_8, 6, 1, 1, 1);

        LOCK300_2 = new QLabel(PM_BOARD_STATUS);
        LOCK300_2->setObjectName(QStringLiteral("LOCK300_2"));

        gridLayout_10->addWidget(LOCK300_2, 7, 0, 1, 1);

        LOCK300_1 = new QLabel(PM_BOARD_STATUS);
        LOCK300_1->setObjectName(QStringLiteral("LOCK300_1"));

        gridLayout_10->addWidget(LOCK300_1, 8, 0, 1, 1);

        lcdNumber_12 = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber_12->setObjectName(QStringLiteral("lcdNumber_12"));
        lcdNumber_12->setMinimumSize(QSize(70, 25));
        lcdNumber_12->setMaximumSize(QSize(70, 25));
        lcdNumber_12->setFrameShadow(QFrame::Plain);
        lcdNumber_12->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber_12, 9, 1, 1, 1);

        GBTRXERR = new QLabel(PM_BOARD_STATUS);
        GBTRXERR->setObjectName(QStringLiteral("GBTRXERR"));

        gridLayout_10->addWidget(GBTRXERR, 4, 0, 1, 1);

        GBTRX_READY = new QLabel(PM_BOARD_STATUS);
        GBTRX_READY->setObjectName(QStringLiteral("GBTRX_READY"));

        gridLayout_10->addWidget(GBTRX_READY, 5, 0, 1, 1);

        lcdNumber = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(70, 25));
        lcdNumber->setMaximumSize(QSize(70, 25));
        lcdNumber->setFrameShadow(QFrame::Plain);
        lcdNumber->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber, 1, 1, 1, 1);

        BC_JUMP3 = new QLabel(PM_BOARD_STATUS);
        BC_JUMP3->setObjectName(QStringLiteral("BC_JUMP3"));

        gridLayout_10->addWidget(BC_JUMP3, 1, 0, 1, 1);

        lcdNumber_6 = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setMinimumSize(QSize(70, 25));
        lcdNumber_6->setMaximumSize(QSize(70, 25));
        lcdNumber_6->setFrameShadow(QFrame::Plain);
        lcdNumber_6->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber_6, 4, 1, 1, 1);

        lcdNumber_7 = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setMinimumSize(QSize(70, 25));
        lcdNumber_7->setMaximumSize(QSize(70, 25));
        lcdNumber_7->setFrameShadow(QFrame::Plain);
        lcdNumber_7->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber_7, 5, 1, 1, 1);

        lcdNumber_5 = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setMinimumSize(QSize(70, 25));
        lcdNumber_5->setMaximumSize(QSize(70, 25));
        lcdNumber_5->setFrameShadow(QFrame::Plain);
        lcdNumber_5->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber_5, 3, 1, 1, 1);

        BC_JUMP2 = new QLabel(PM_BOARD_STATUS);
        BC_JUMP2->setObjectName(QStringLiteral("BC_JUMP2"));

        gridLayout_10->addWidget(BC_JUMP2, 2, 0, 1, 1);

        BC_JUMP1 = new QLabel(PM_BOARD_STATUS);
        BC_JUMP1->setObjectName(QStringLiteral("BC_JUMP1"));

        gridLayout_10->addWidget(BC_JUMP1, 3, 0, 1, 1);

        lcdNumber_4 = new QLCDNumber(PM_BOARD_STATUS);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setMinimumSize(QSize(70, 25));
        lcdNumber_4->setMaximumSize(QSize(70, 25));
        lcdNumber_4->setFrameShadow(QFrame::Plain);
        lcdNumber_4->setLineWidth(2);

        gridLayout_10->addWidget(lcdNumber_4, 2, 1, 1, 1);

        LOCK300_3 = new QLabel(PM_BOARD_STATUS);
        LOCK300_3->setObjectName(QStringLiteral("LOCK300_3"));

        gridLayout_10->addWidget(LOCK300_3, 6, 0, 1, 1);

        pushButton = new QPushButton(PM_BOARD_STATUS);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_10->addWidget(pushButton, 0, 0, 1, 2);

        Current = new QGroupBox(centralWidget);
        Current->setObjectName(QStringLiteral("Current"));
        Current->setGeometry(QRect(830, 10, 290, 75));
        horizontalLayout_4 = new QHBoxLayout(Current);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_15 = new QLabel(Current);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(0, 25));
        label_15->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(label_15);

        PM_Number = new QLCDNumber(Current);
        PM_Number->setObjectName(QStringLiteral("PM_Number"));
        PM_Number->setMinimumSize(QSize(70, 25));
        PM_Number->setMaximumSize(QSize(70, 25));
        PM_Number->setStyleSheet(QLatin1String("border-color: rgb(255, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        PM_Number->setFrameShadow(QFrame::Plain);
        PM_Number->setLineWidth(2);

        horizontalLayout_4->addWidget(PM_Number);

        label_16 = new QLabel(Current);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(0, 25));
        label_16->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(label_16);

        Ch_Number = new QLCDNumber(Current);
        Ch_Number->setObjectName(QStringLiteral("Ch_Number"));
        Ch_Number->setMinimumSize(QSize(70, 25));
        Ch_Number->setMaximumSize(QSize(70, 25));
        Ch_Number->setStyleSheet(QLatin1String("border-color: rgb(255, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        Ch_Number->setFrameShadow(QFrame::Plain);
        Ch_Number->setLineWidth(2);

        horizontalLayout_4->addWidget(Ch_Number);

        Update_writeALL = new QGroupBox(centralWidget);
        Update_writeALL->setObjectName(QStringLiteral("Update_writeALL"));
        Update_writeALL->setGeometry(QRect(200, 180, 181, 201));
        Update_writeALL->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        gridLayout = new QGridLayout(Update_writeALL);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        VIEW_ADC_ZERO_2 = new QPushButton(Update_writeALL);
        VIEW_ADC_ZERO_2->setObjectName(QStringLiteral("VIEW_ADC_ZERO_2"));
        sizePolicy.setHeightForWidth(VIEW_ADC_ZERO_2->sizePolicy().hasHeightForWidth());
        VIEW_ADC_ZERO_2->setSizePolicy(sizePolicy);
        VIEW_ADC_ZERO_2->setMinimumSize(QSize(25, 25));
        VIEW_ADC_ZERO_2->setMaximumSize(QSize(25, 25));
        VIEW_ADC_ZERO_2->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_ZERO_2->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_ZERO_2->setIcon(icon7);
        VIEW_ADC_ZERO_2->setIconSize(QSize(21, 21));

        gridLayout->addWidget(VIEW_ADC_ZERO_2, 0, 1, 1, 1);

        VIEW_ADC_ZERO_3 = new QPushButton(Update_writeALL);
        VIEW_ADC_ZERO_3->setObjectName(QStringLiteral("VIEW_ADC_ZERO_3"));
        sizePolicy.setHeightForWidth(VIEW_ADC_ZERO_3->sizePolicy().hasHeightForWidth());
        VIEW_ADC_ZERO_3->setSizePolicy(sizePolicy);
        VIEW_ADC_ZERO_3->setMinimumSize(QSize(25, 25));
        VIEW_ADC_ZERO_3->setMaximumSize(QSize(25, 25));
        VIEW_ADC_ZERO_3->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_ZERO_3->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_ZERO_3->setIcon(icon7);
        VIEW_ADC_ZERO_3->setIconSize(QSize(21, 21));

        gridLayout->addWidget(VIEW_ADC_ZERO_3, 2, 1, 1, 1);

        label_7 = new QLabel(Update_writeALL);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label_5 = new QLabel(Update_writeALL);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(Update_writeALL);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        VIEW_ADC_ZERO_7 = new QPushButton(Update_writeALL);
        VIEW_ADC_ZERO_7->setObjectName(QStringLiteral("VIEW_ADC_ZERO_7"));
        sizePolicy.setHeightForWidth(VIEW_ADC_ZERO_7->sizePolicy().hasHeightForWidth());
        VIEW_ADC_ZERO_7->setSizePolicy(sizePolicy);
        VIEW_ADC_ZERO_7->setMinimumSize(QSize(25, 25));
        VIEW_ADC_ZERO_7->setMaximumSize(QSize(25, 25));
        VIEW_ADC_ZERO_7->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_ZERO_7->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_ZERO_7->setIcon(icon7);
        VIEW_ADC_ZERO_7->setIconSize(QSize(21, 21));

        gridLayout->addWidget(VIEW_ADC_ZERO_7, 4, 2, 1, 1);

        VIEW_ADC_ZERO_8 = new QPushButton(Update_writeALL);
        VIEW_ADC_ZERO_8->setObjectName(QStringLiteral("VIEW_ADC_ZERO_8"));
        sizePolicy.setHeightForWidth(VIEW_ADC_ZERO_8->sizePolicy().hasHeightForWidth());
        VIEW_ADC_ZERO_8->setSizePolicy(sizePolicy);
        VIEW_ADC_ZERO_8->setMinimumSize(QSize(25, 25));
        VIEW_ADC_ZERO_8->setMaximumSize(QSize(25, 25));
        VIEW_ADC_ZERO_8->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_ZERO_8->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_ZERO_8->setIcon(icon7);
        VIEW_ADC_ZERO_8->setIconSize(QSize(21, 21));

        gridLayout->addWidget(VIEW_ADC_ZERO_8, 5, 2, 1, 1);

        WRITE_ADC_ZERO_4 = new QPushButton(Update_writeALL);
        WRITE_ADC_ZERO_4->setObjectName(QStringLiteral("WRITE_ADC_ZERO_4"));
        sizePolicy.setHeightForWidth(WRITE_ADC_ZERO_4->sizePolicy().hasHeightForWidth());
        WRITE_ADC_ZERO_4->setSizePolicy(sizePolicy);
        WRITE_ADC_ZERO_4->setMinimumSize(QSize(25, 25));
        WRITE_ADC_ZERO_4->setMaximumSize(QSize(25, 25));
        WRITE_ADC_ZERO_4->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_ZERO_4->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_ZERO_4->setIcon(icon6);
        WRITE_ADC_ZERO_4->setIconSize(QSize(21, 21));

        gridLayout->addWidget(WRITE_ADC_ZERO_4, 2, 2, 1, 1);

        label_4 = new QLabel(Update_writeALL);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(Update_writeALL);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        VIEW_ADC_ZERO_5 = new QPushButton(Update_writeALL);
        VIEW_ADC_ZERO_5->setObjectName(QStringLiteral("VIEW_ADC_ZERO_5"));
        sizePolicy.setHeightForWidth(VIEW_ADC_ZERO_5->sizePolicy().hasHeightForWidth());
        VIEW_ADC_ZERO_5->setSizePolicy(sizePolicy);
        VIEW_ADC_ZERO_5->setMinimumSize(QSize(25, 25));
        VIEW_ADC_ZERO_5->setMaximumSize(QSize(25, 25));
        VIEW_ADC_ZERO_5->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_ZERO_5->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_ZERO_5->setIcon(icon7);
        VIEW_ADC_ZERO_5->setIconSize(QSize(21, 21));

        gridLayout->addWidget(VIEW_ADC_ZERO_5, 3, 1, 1, 1);

        WRITE_ADC_ZERO_2 = new QPushButton(Update_writeALL);
        WRITE_ADC_ZERO_2->setObjectName(QStringLiteral("WRITE_ADC_ZERO_2"));
        sizePolicy.setHeightForWidth(WRITE_ADC_ZERO_2->sizePolicy().hasHeightForWidth());
        WRITE_ADC_ZERO_2->setSizePolicy(sizePolicy);
        WRITE_ADC_ZERO_2->setMinimumSize(QSize(25, 25));
        WRITE_ADC_ZERO_2->setMaximumSize(QSize(25, 25));
        WRITE_ADC_ZERO_2->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_ZERO_2->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_ZERO_2->setIcon(icon6);
        WRITE_ADC_ZERO_2->setIconSize(QSize(21, 21));

        gridLayout->addWidget(WRITE_ADC_ZERO_2, 0, 2, 1, 1);

        WRITE_ADC_ZERO_5 = new QPushButton(Update_writeALL);
        WRITE_ADC_ZERO_5->setObjectName(QStringLiteral("WRITE_ADC_ZERO_5"));
        sizePolicy.setHeightForWidth(WRITE_ADC_ZERO_5->sizePolicy().hasHeightForWidth());
        WRITE_ADC_ZERO_5->setSizePolicy(sizePolicy);
        WRITE_ADC_ZERO_5->setMinimumSize(QSize(25, 25));
        WRITE_ADC_ZERO_5->setMaximumSize(QSize(25, 25));
        WRITE_ADC_ZERO_5->setCursor(QCursor(Qt::PointingHandCursor));
        WRITE_ADC_ZERO_5->setStyleSheet(QStringLiteral(""));
        WRITE_ADC_ZERO_5->setIcon(icon6);
        WRITE_ADC_ZERO_5->setIconSize(QSize(21, 21));

        gridLayout->addWidget(WRITE_ADC_ZERO_5, 3, 2, 1, 1);

        label_6 = new QLabel(Update_writeALL);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        VIEW_ADC_ZERO_6 = new QPushButton(Update_writeALL);
        VIEW_ADC_ZERO_6->setObjectName(QStringLiteral("VIEW_ADC_ZERO_6"));
        sizePolicy.setHeightForWidth(VIEW_ADC_ZERO_6->sizePolicy().hasHeightForWidth());
        VIEW_ADC_ZERO_6->setSizePolicy(sizePolicy);
        VIEW_ADC_ZERO_6->setMinimumSize(QSize(25, 25));
        VIEW_ADC_ZERO_6->setMaximumSize(QSize(25, 25));
        VIEW_ADC_ZERO_6->setCursor(QCursor(Qt::PointingHandCursor));
        VIEW_ADC_ZERO_6->setStyleSheet(QStringLiteral(""));
        VIEW_ADC_ZERO_6->setIcon(icon7);
        VIEW_ADC_ZERO_6->setIconSize(QSize(21, 21));

        gridLayout->addWidget(VIEW_ADC_ZERO_6, 1, 2, 1, 1);

        TCM = new QPushButton(centralWidget);
        TCM->setObjectName(QStringLiteral("TCM"));
        TCM->setGeometry(QRect(640, 40, 30, 30));
        TCM->setMinimumSize(QSize(30, 30));
        TCM->setMaximumSize(QSize(30, 30));
        TCM->setCursor(QCursor(Qt::PointingHandCursor));
        TCM->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        TCM->setCheckable(true);
        TCM->setChecked(false);
        TCM->setDefault(false);
        TCM->setFlat(false);
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 630, 660));
        FTM = new QPushButton(centralWidget);
        FTM->setObjectName(QStringLiteral("FTM"));
        FTM->setGeometry(QRect(670, 40, 30, 30));
        FTM->setMinimumSize(QSize(30, 30));
        FTM->setMaximumSize(QSize(30, 30));
        FTM->setCursor(QCursor(Qt::PointingHandCursor));
        FTM->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 255);\n"
"color: rgb(0, 0, 0);"));
        FTM->setCheckable(true);
        FTM->setChecked(false);
        FTM->setDefault(false);
        FTM->setFlat(false);
        Refresh = new QPushButton(centralWidget);
        Refresh->setObjectName(QStringLiteral("Refresh"));
        Refresh->setGeometry(QRect(700, 40, 90, 30));
        Refresh->setMinimumSize(QSize(90, 30));
        Refresh->setMaximumSize(QSize(30, 30));
        Refresh->setCursor(QCursor(Qt::PointingHandCursor));
        Refresh->setStyleSheet(QStringLiteral(""));
        Refresh->setCheckable(false);
        Refresh->setChecked(false);
        Refresh->setDefault(false);
        Refresh->setFlat(false);
        MainWindow->setCentralWidget(centralWidget);
        tableWidget->raise();
        groupBox->raise();
        PM_BOARD_STATUS->raise();
        Current->raise();
        PMcontrol->raise();
        PMstatus->raise();
        commandPar->raise();
        Radoutcontrol->raise();
        GBTstatusbits->raise();
        Readoutstatus->raise();
        Resetcontrol->raise();
        Readoutcommand->raise();
        Triggergenerator->raise();
        Update_writeALL->raise();
        label_37->raise();
        label_41->raise();
        PM_selection->raise();
        Ch_selection->raise();
        Datagenerator->raise();
        TCM->raise();
        FTM->raise();
        Refresh->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(action);
        mainToolBar->addAction(action_2);
        mainToolBar->addAction(actionClear_all);
        mainToolBar->addAction(actionLight_theme);
        mainToolBar->addAction(actionDark_theme);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action->setText(QApplication::translate("MainWindow", "Save", 0));
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_2->setText(QApplication::translate("MainWindow", "Load", 0));
        action_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        actionLight_theme->setText(QApplication::translate("MainWindow", "Light theme", 0));
#ifndef QT_NO_TOOLTIP
        actionLight_theme->setToolTip(QApplication::translate("MainWindow", "Light color theme", 0));
#endif // QT_NO_TOOLTIP
        actionDark_theme->setText(QApplication::translate("MainWindow", "Dark theme", 0));
#ifndef QT_NO_TOOLTIP
        actionDark_theme->setToolTip(QApplication::translate("MainWindow", "Dark color theme", 0));
#endif // QT_NO_TOOLTIP
        actionClear_all->setText(QApplication::translate("MainWindow", "Clear all", 0));
        actionClear_all->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        label_37->setText(QApplication::translate("MainWindow", "Data bunch pattern", 0));
        label_41->setText(QApplication::translate("MainWindow", "Trigger respond mask", 0));
        PM_selection->setTitle(QApplication::translate("MainWindow", "PM selection", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_1->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_1->setText(QApplication::translate("MainWindow", "1", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_2->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_2->setText(QApplication::translate("MainWindow", "2", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_3->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_3->setText(QApplication::translate("MainWindow", "3", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_4->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_4->setText(QApplication::translate("MainWindow", "4", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_5->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_5->setText(QApplication::translate("MainWindow", "5", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_6->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_6->setText(QApplication::translate("MainWindow", "6", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_7->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_7->setText(QApplication::translate("MainWindow", "7", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_8->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_8->setText(QApplication::translate("MainWindow", "8", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_9->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_9->setText(QApplication::translate("MainWindow", "9", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_10->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_10->setText(QApplication::translate("MainWindow", "10", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_11->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_11->setText(QApplication::translate("MainWindow", "11", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_12->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_12->setText(QApplication::translate("MainWindow", "12", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_13->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_13->setText(QApplication::translate("MainWindow", "13", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_14->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_14->setText(QApplication::translate("MainWindow", "14", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_15->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_15->setText(QApplication::translate("MainWindow", "15", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_16->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_16->setText(QApplication::translate("MainWindow", "16", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_17->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_17->setText(QApplication::translate("MainWindow", "17", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_18->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_18->setText(QApplication::translate("MainWindow", "18", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_19->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_19->setText(QApplication::translate("MainWindow", "19", 0));
#ifndef QT_NO_TOOLTIP
        PM_selector_20->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Select PM</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        PM_selector_20->setText(QApplication::translate("MainWindow", "20", 0));
        Ch_selection->setTitle(QApplication::translate("MainWindow", "Channel selection", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_1->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_1->setText(QApplication::translate("MainWindow", "1", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_2->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_2->setText(QApplication::translate("MainWindow", "2", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_3->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_3->setText(QApplication::translate("MainWindow", "3", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_4->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_4->setText(QApplication::translate("MainWindow", "4", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_5->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_5->setText(QApplication::translate("MainWindow", "5", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_6->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_6->setText(QApplication::translate("MainWindow", "6", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_7->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_7->setText(QApplication::translate("MainWindow", "7", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_8->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_8->setText(QApplication::translate("MainWindow", "8", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_9->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_9->setText(QApplication::translate("MainWindow", "9", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_10->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_10->setText(QApplication::translate("MainWindow", "10", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_11->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_11->setText(QApplication::translate("MainWindow", "11", 0));
#ifndef QT_NO_TOOLTIP
        Channel_selector_12->setToolTip(QApplication::translate("MainWindow", "Select the channel", 0));
#endif // QT_NO_TOOLTIP
        Channel_selector_12->setText(QApplication::translate("MainWindow", "12", 0));
        Resetcontrol->setTitle(QApplication::translate("MainWindow", "Reset Control", 0));
        Reset_dropping->setText(QApplication::translate("MainWindow", "Reset dropping it counters", 0));
        Res_dat->setText(QApplication::translate("MainWindow", "Reset data/TRG \n"
" generators bunch offset", 0));
        Res_gbt_err->setText(QApplication::translate("MainWindow", "Reset GBT errors", 0));
        res_gbt->setText(QApplication::translate("MainWindow", "Reset GBT", 0));
        Reset_orbit_sync->setText(QApplication::translate("MainWindow", "Reset orbit sync", 0));
        res_rx->setText(QApplication::translate("MainWindow", "Reset RX phase error", 0));
        Readoutcommand->setTitle(QApplication::translate("MainWindow", "Readout command", 0));
        soc->setText(QApplication::translate("MainWindow", "SOC", 0));
        eoc->setText(QApplication::translate("MainWindow", "EOC", 0));
        sot->setText(QApplication::translate("MainWindow", "SOT", 0));
        eot->setText(QApplication::translate("MainWindow", "EOT", 0));
        Triggergenerator->setTitle(QApplication::translate("MainWindow", "Trigger generator", 0));
        No_get_trg->setText(QApplication::translate("MainWindow", "No generator", 0));
        continuous->setText(QApplication::translate("MainWindow", "Continuous", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "Trg single value", 0));
        TRG_single_val_cmd->setText(QString());
        PMcontrol->setTitle(QApplication::translate("MainWindow", "PM Control", 0));
        CFD_TRESHOLD->setText(QApplication::translate("MainWindow", "CFD TRESHOLD", 0));
#ifndef QT_NO_TOOLTIP
        ADC_ZERO->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">ADC zerooffset, analogset</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ADC_ZERO->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>flkjghkjsdhgk;</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        ADC_ZERO->setText(QApplication::translate("MainWindow", "ADC ZERO", 0));
#ifndef QT_NO_TOOLTIP
        ADC1_OFFSET->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">ADC</span><span style=\" color:#000000; vertical-align:sub;\">1</span><span style=\" color:#000000;\"> digital offset</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ADC1_OFFSET->setText(QApplication::translate("MainWindow", "ADC1 OFFSET", 0));
#ifndef QT_NO_TOOLTIP
        ADC0_RANGE->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">Channel amplitude calibration</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ADC0_RANGE->setText(QApplication::translate("MainWindow", "ADC0 RANGE", 0));
#ifndef QT_NO_TOOLTIP
        TIME_ALIN->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">Digital decrimental time alinement</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        TIME_ALIN->setText(QApplication::translate("MainWindow", "TIME ALIN", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_TIME_ALIN->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_TIME_ALIN->setText(QString());
#ifndef QT_NO_TOOLTIP
        ADC_DELAY->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">ADC clock delay relative to LHC clock, analogset</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ADC_DELAY->setText(QApplication::translate("MainWindow", "ADC DELAY", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC1_OFFSET->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC1_OFFSET->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC0_OFFSET->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC0_OFFSET->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC1_RANGE->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC1_RANGE->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_TIME_ALIN->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_TIME_ALIN->setText(QString());
        ADC1_RANGE->setText(QApplication::translate("MainWindow", "ADC1 RANGE", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_ADC1_OFFSET->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC1_OFFSET->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC0_OFFSET->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC0_OFFSET->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_DELAY->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_DELAY->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC1_RANGE_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC1_RANGE_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_RANGE->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_RANGE->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC0_RANGE->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC0_RANGE->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_DELAY->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_DELAY->setText(QString());
#ifndef QT_NO_TOOLTIP
        ADC0_OFFSET->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">ADC</span><span style=\" color:#000000; vertical-align:sub;\">0  </span><span style=\" color:#000000;\">digital offset</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ADC0_OFFSET->setText(QApplication::translate("MainWindow", "ADC0 OFFSET", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_ZERO->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_ZERO->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_ZERO->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_ZERO->setText(QString());
        CFD_ZERO->setText(QApplication::translate("MainWindow", "CFD ZERO", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_CFD_TRESHOLD->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_CFD_TRESHOLD->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_CFD_ZERO->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_CFD_ZERO->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_CFD_TRESHOLD->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_CFD_TRESHOLD->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_CFD_ZERO->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_CFD_ZERO->setText(QString());
        PMstatus->setTitle(QApplication::translate("MainWindow", "PM status", 0));
#ifndef QT_NO_TOOLTIP
        ADC0_MEANAMPL->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">Mean amplitude for n last hits</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ADC0_MEANAMPL->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>flkjghkjsdhgk;</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        ADC0_MEANAMPL->setText(QApplication::translate("MainWindow", "ADC0 MEANAMPL", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC0_Meanampl->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC0_Meanampl->setText(QString());
#ifndef QT_NO_TOOLTIP
        ADC1_MEANAMPL->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">Mean amplitude for n last hits</span><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ADC1_MEANAMPL->setText(QApplication::translate("MainWindow", "ADC1 MEANAMPL", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC1_Mean->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC1_Mean->setText(QString());
#ifndef QT_NO_TOOLTIP
        ADC0_ZERO_LVL->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Measured by command: forced amplitude with gate off</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ADC0_ZERO_LVL->setText(QApplication::translate("MainWindow", "ADC0 ZEROLVL", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC0_Zerolvl->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC0_Zerolvl->setText(QString());
#ifndef QT_NO_TOOLTIP
        ADC1_ZERO_LVL->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Measured by command: forced amplitude with gate off</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ADC1_ZERO_LVL->setText(QApplication::translate("MainWindow", "ADC1 ZEROLVL", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC1_zerolvl->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC1_zerolvl->setText(QString());
#ifndef QT_NO_TOOLTIP
        CFD_CNT->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Average rate of cfd output</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        CFD_CNT->setText(QApplication::translate("MainWindow", "CFD CNT", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_cfd_cnt->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_cfd_cnt->setText(QString());
#ifndef QT_NO_TOOLTIP
        STROBE_CNT->setToolTip(QApplication::translate("MainWindow", "<html><head><body><p>Average rate of sfd gate output</p></body></head></html>", 0));
#endif // QT_NO_TOOLTIP
        STROBE_CNT->setText(QApplication::translate("MainWindow", "STROBE CNT", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_Strobe_cnt->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_Strobe_cnt->setText(QString());
#ifndef QT_NO_TOOLTIP
        MEAN_TIME->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Mean time for channel TDC</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        MEAN_TIME->setText(QApplication::translate("MainWindow", "MEAN TIME", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_mean_time->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_mean_time->setText(QString());
        commandPar->setTitle(QApplication::translate("MainWindow", "Common parameters", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_CFD_SATR->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_CFD_SATR->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_Chmask->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_Chmask->setText(QString());
        CFD_SATR->setText(QApplication::translate("MainWindow", "CFD SATR", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_OR_GATE->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_OR_GATE->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_BOARD_STATUS->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_BOARD_STATUS->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_BOARD_STATUS->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_BOARD_STATUS->setText(QString());
        BOARD_STATUS->setText(QApplication::translate("MainWindow", "BOARD STATUS", 0));
        CH_MASK->setText(QApplication::translate("MainWindow", "CH MASK", 0));
        OR_GATE->setText(QApplication::translate("MainWindow", "OR GATE", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_CFD_SATR->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_CFD_SATR->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_OR_GATE->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_OR_GATE->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_CH_MASK->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_CH_MASK->setText(QString());
        Radoutcontrol->setTitle(QApplication::translate("MainWindow", "Readout control", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC1_OFFSET_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC1_OFFSET_3->setText(QString());
        Data_bunc_freq->setText(QApplication::translate("MainWindow", "Data bunch frequency", 0));
        Data_bunch_pat->setText(QApplication::translate("MainWindow", "Data bunch pattern", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_RANGE_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_RANGE_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_BCID_delay->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_BCID_delay->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_PAR->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_PAR->setText(QString());
#ifndef QT_NO_TOOLTIP
        trg_cont_pat_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>(31 to 0)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        trg_cont_pat_2->setText(QApplication::translate("MainWindow", "Trg continuous pattern (2)", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC1_RANGE_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC1_RANGE_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC1_RANGE_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC1_RANGE_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_DET->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_DET->setText(QString());
        trg_cont_value->setText(QApplication::translate("MainWindow", "Trg continuous value", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_ZERO_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_ZERO_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        Trg_cont_pat_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>(63 to 32)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        Trg_cont_pat_1->setText(QApplication::translate("MainWindow", "Trg continuous pattern (1)", 0));
        BCIDdelay->setText(QApplication::translate("MainWindow", "BCID delay", 0));
        PAR->setText(QApplication::translate("MainWindow", "PAR", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC0_RANGE_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC0_RANGE_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_MAX_RHD_PAYLOAD->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_MAX_RHD_PAYLOAD->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC1_RANGE_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC1_RANGE_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC0_RANGE_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC0_RANGE_4->setText(QString());
        Trigg_freq_offset->setText(QApplication::translate("MainWindow", "Trigger frequency offset", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_FEE_ID->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_FEE_ID->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC1_OFFSET_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC1_OFFSET_3->setText(QString());
        Data_freq_offset->setText(QApplication::translate("MainWindow", "Data frequency offset", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_ADC1_RANGE_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC1_RANGE_3->setText(QString());
        MAx_RDH_payload->setText(QApplication::translate("MainWindow", "Max RDH payload", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_FEE_ID->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_FEE_ID->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_RANGE_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_RANGE_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC1_RANGE_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC1_RANGE_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_CRU_trg->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_CRU_trg->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_DET->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_DET->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_ZERO_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_ZERO_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_MAX_RHD_PAYLOAD->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_MAX_RHD_PAYLOAD->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_CRU_trg->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_CRU_trg->setText(QString());
        Trg_bunch_freq->setText(QApplication::translate("MainWindow", "Trigger bunch frequency", 0));
        FEE_ID->setText(QApplication::translate("MainWindow", "FEE ID", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_DELAY_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_DELAY_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC1_RANGE_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC1_RANGE_5->setText(QString());
        Trigger_respond_mask->setText(QApplication::translate("MainWindow", "Trigger respond mask", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC0_RANGE_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC0_RANGE_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_BCID_delay->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_BCID_delay->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_PAR->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_PAR->setText(QString());
        DET_FIELD->setText(QApplication::translate("MainWindow", "DET field", 0));
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_RANGE_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_RANGE_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_DELAY_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_DELAY_3->setText(QString());
        CRU_trg_comp_dal->setText(QApplication::translate("MainWindow", "CRU trigger compare delay", 0));
        GBTstatusbits->setTitle(QApplication::translate("MainWindow", "GBT status bits:", 0));
        label_48->setText(QApplication::translate("MainWindow", "8 GBT RX error latch", 0));
        RX_phase_error->setText(QApplication::translate("MainWindow", "9 RX phase error", 0));
        label_45->setText(QApplication::translate("MainWindow", "5 TX FSM reset done", 0));
        label_44->setText(QApplication::translate("MainWindow", "4 TX reset done", 0));
        label_47->setText(QApplication::translate("MainWindow", "7 GBT RX error detected", 0));
        label_46->setText(QApplication::translate("MainWindow", "6 GBT RX ready", 0));
        label_40->setText(QApplication::translate("MainWindow", "1 RX wordclk ready", 0));
        label_39->setText(QApplication::translate("MainWindow", "0 Phase aligner CPLL lock", 0));
        label_43->setText(QApplication::translate("MainWindow", "3 MGT link ready", 0));
        label_42->setText(QApplication::translate("MainWindow", "2 RX frameclk ready", 0));
        Readoutstatus->setTitle(QApplication::translate("MainWindow", "Readout status", 0));
#ifndef QT_NO_TOOLTIP
        label_54->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Number of current orbit</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_54->setText(QApplication::translate("MainWindow", "CRU orbit", 0));
#ifndef QT_NO_TOOLTIP
        label_52->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#008000;\">0-Idle</span></p><p><span style=\" color:#008000;\">1-Continuous</span></p><p><span style=\" color:#008000;\">2-Trigger</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_52->setText(QApplication::translate("MainWindow", "Readout mode", 0));
#ifndef QT_NO_TOOLTIP
        BCID_sync_mode->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>0-Start</p><p>1-Sync</p><p>2-Lost</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        BCID_sync_mode->setText(QApplication::translate("MainWindow", "BCID sync mode", 0));
#ifndef QT_NO_TOOLTIP
        label_55->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Number of current bunch</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_55->setText(QApplication::translate("MainWindow", "CRU BC", 0));
        Selector_fifo_count->setText(QApplication::translate("MainWindow", "Selector FIFO count", 0));
        RAW_FIFO_count->setText(QApplication::translate("MainWindow", "Raw FIFO count", 0));
#ifndef QT_NO_TOOLTIP
        Selector_first->setToolTip(QApplication::translate("MainWindow", "DO-dropped orbit", 0));
#endif // QT_NO_TOOLTIP
        Selector_first->setText(QApplication::translate("MainWindow", "Selector first hit DO", 0));
#ifndef QT_NO_TOOLTIP
        Selector_last->setToolTip(QApplication::translate("MainWindow", "DO-dropped orbit", 0));
#endif // QT_NO_TOOLTIP
        Selector_last->setText(QApplication::translate("MainWindow", "Selector last hit DO", 0));
        selector_hits->setText(QApplication::translate("MainWindow", "Selector hits dropped", 0));
        Readout_rate->setText(QApplication::translate("MainWindow", "Readout rate", 0));
        RX_phase->setText(QApplication::translate("MainWindow", "RX phase", 0));
        Datagenerator->setTitle(QApplication::translate("MainWindow", "Data generator", 0));
        No_gen_dat->setText(QApplication::translate("MainWindow", "No generator", 0));
        main_gen->setText(QApplication::translate("MainWindow", "Main generator", 0));
        tx_gen->setText(QApplication::translate("MainWindow", "TX generator", 0));
        PM_BOARD_STATUS->setTitle(QApplication::translate("MainWindow", "PM Board status", 0));
        LOCK320->setText(QApplication::translate("MainWindow", "Lock320", 0));
        LOCK300_2->setText(QApplication::translate("MainWindow", "Lock300 2", 0));
        LOCK300_1->setText(QApplication::translate("MainWindow", "Lock300 1", 0));
        GBTRXERR->setText(QApplication::translate("MainWindow", "GBTRXerr", 0));
        GBTRX_READY->setText(QApplication::translate("MainWindow", "GBTRX ready", 0));
        BC_JUMP3->setText(QApplication::translate("MainWindow", "BC JUMP3", 0));
        BC_JUMP2->setText(QApplication::translate("MainWindow", "BC JUMP2", 0));
        BC_JUMP1->setText(QApplication::translate("MainWindow", "BC JUMP1", 0));
        LOCK300_3->setText(QApplication::translate("MainWindow", "Lock300 3", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Reset counters", 0));
        label_15->setText(QApplication::translate("MainWindow", "Current PM:", 0));
#ifndef QT_NO_TOOLTIP
        PM_Number->setToolTip(QApplication::translate("MainWindow", "Current PM", 0));
#endif // QT_NO_TOOLTIP
        label_16->setText(QApplication::translate("MainWindow", "Current Ch:", 0));
#ifndef QT_NO_TOOLTIP
        Ch_Number->setToolTip(QApplication::translate("MainWindow", "Current Channel", 0));
#endif // QT_NO_TOOLTIP
        Update_writeALL->setTitle(QApplication::translate("MainWindow", "Update/write ALL", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_ZERO_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_ZERO_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_ZERO_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_ZERO_3->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "GBT status bits", 0));
        label_5->setText(QApplication::translate("MainWindow", "Readout control", 0));
        label_2->setText(QApplication::translate("MainWindow", "PM control", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_ZERO_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_ZERO_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_ZERO_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_ZERO_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_ZERO_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_ZERO_4->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Common parameters", 0));
        label_3->setText(QApplication::translate("MainWindow", "PM status", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_ZERO_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_ZERO_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_ZERO_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_ZERO_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        WRITE_ADC_ZERO_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Write</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WRITE_ADC_ZERO_5->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Readout status", 0));
#ifndef QT_NO_TOOLTIP
        VIEW_ADC_ZERO_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Status</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        VIEW_ADC_ZERO_6->setText(QString());
        TCM->setText(QApplication::translate("MainWindow", "FCM", 0));
        FTM->setText(QApplication::translate("MainWindow", "TCM", 0));
        Refresh->setText(QApplication::translate("MainWindow", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
