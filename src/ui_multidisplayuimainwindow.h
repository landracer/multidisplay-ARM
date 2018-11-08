/********************************************************************************
** Form generated from reading UI file 'multidisplayuimainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIDISPLAYUIMAINWINDOW_H
#define UI_MULTIDISPLAYUIMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultidisplayUIMainWindowClass
{
public:
    QAction *action_SerialConnect;
    QAction *action_SerialDisconnect;
    QAction *action_SerialOptions;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_Export_as_CSV;
    QAction *action_Open;
    QAction *action_New;
    QAction *action_Enable_Zoom_Mode;
    QAction *actionShow_EGT0;
    QAction *actionShow_EGT1;
    QAction *action_config_Vis1;
    QAction *actionTest123;
    QAction *actionShow_Boost_Lambda;
    QAction *actionShow_RPM_Boost;
    QAction *action_Replay;
    QAction *actionTest_Thread;
    QAction *actionStop_Replay_Thread;
    QAction *action_activate_MD_string_output;
    QAction *action_calibrate_LD_measure_environment_pressure;
    QAction *action_load_settings_from_EEPROM;
    QAction *action_save_settings_to_EEPROM;
    QAction *action_set_N75_duty_cycles;
    QAction *actionN75_boost_control;
    QAction *actionActivate_MD_binary_output;
    QAction *action_disable_measurement_data_output;
    QAction *V2_action_load_settings_from_EEPROM;
    QAction *V2_action_save_settings_to_EEPROM;
    QAction *V2_action_calibrate_LD_measure_environment_pressure;
    QAction *actionSettings;
    QAction *actionGearbox_settings;
    QAction *actionAbout;
    QAction *action200kpa;
    QAction *action250kpa;
    QAction *action300kpa;
    QAction *action400kpa;
    QAction *action100kpa;
    QAction *action;
    QAction *actionShow_application_window;
    QAction *actionConfigure_DataTable;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *DataTableWidget;
    QWidget *DataTab;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *DataTextEdit;
    QWidget *BoostPidTab;
    QVBoxLayout *verticalLayout_3;
    QFrame *BoostParamFrame;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *BoostGraphGroupBox;
    QWidget *VisualizationTab;
    QWidget *Data;
    QHBoxLayout *horizontalLayout_3;
    QTableView *DataTableView;
    QWidget *DashboardTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *ReplayGroupBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *ReplayCurPos;
    QPushButton *PlayButton;
    QPushButton *PauseButton;
    QPushButton *StopButton;
    QDoubleSpinBox *ReplayFactorSpinBox;
    QGroupBox *CmdGroupBox;
    QVBoxLayout *verticalLayout_4;
    QPushButton *ButtonAPush;
    QPushButton *ButtonAHold;
    QPushButton *ButtonBPush;
    QPushButton *ButtonBHold;
    QGroupBox *DataViewGroupBox;
    QSlider *DataViewSlider;
    QSpinBox *DataViewWinSizeSpinBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *DataViewScrollLeftButton;
    QPushButton *DataViewScrollRightButton;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Serial;
    QMenu *menu_Evaluation;
    QMenu *menu_Visualization;
    QMenu *menuV2;
    QMenu *menu_Digifant_I;
    QMenu *menu_map_sensor;
    QMenu *menuHelp;
    QStatusBar *StatusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MultidisplayUIMainWindowClass)
    {
        if (MultidisplayUIMainWindowClass->objectName().isEmpty())
            MultidisplayUIMainWindowClass->setObjectName(QStringLiteral("MultidisplayUIMainWindowClass"));
        MultidisplayUIMainWindowClass->resize(845, 651);
        action_SerialConnect = new QAction(MultidisplayUIMainWindowClass);
        action_SerialConnect->setObjectName(QStringLiteral("action_SerialConnect"));
        action_SerialDisconnect = new QAction(MultidisplayUIMainWindowClass);
        action_SerialDisconnect->setObjectName(QStringLiteral("action_SerialDisconnect"));
        action_SerialOptions = new QAction(MultidisplayUIMainWindowClass);
        action_SerialOptions->setObjectName(QStringLiteral("action_SerialOptions"));
        action_Save = new QAction(MultidisplayUIMainWindowClass);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        action_SaveAs = new QAction(MultidisplayUIMainWindowClass);
        action_SaveAs->setObjectName(QStringLiteral("action_SaveAs"));
        action_Export_as_CSV = new QAction(MultidisplayUIMainWindowClass);
        action_Export_as_CSV->setObjectName(QStringLiteral("action_Export_as_CSV"));
        action_Open = new QAction(MultidisplayUIMainWindowClass);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        action_New = new QAction(MultidisplayUIMainWindowClass);
        action_New->setObjectName(QStringLiteral("action_New"));
        action_Enable_Zoom_Mode = new QAction(MultidisplayUIMainWindowClass);
        action_Enable_Zoom_Mode->setObjectName(QStringLiteral("action_Enable_Zoom_Mode"));
        action_Enable_Zoom_Mode->setCheckable(true);
        action_Enable_Zoom_Mode->setEnabled(false);
        actionShow_EGT0 = new QAction(MultidisplayUIMainWindowClass);
        actionShow_EGT0->setObjectName(QStringLiteral("actionShow_EGT0"));
        actionShow_EGT0->setCheckable(true);
        actionShow_EGT0->setChecked(true);
        actionShow_EGT1 = new QAction(MultidisplayUIMainWindowClass);
        actionShow_EGT1->setObjectName(QStringLiteral("actionShow_EGT1"));
        actionShow_EGT1->setCheckable(true);
        actionShow_EGT1->setChecked(true);
        action_config_Vis1 = new QAction(MultidisplayUIMainWindowClass);
        action_config_Vis1->setObjectName(QStringLiteral("action_config_Vis1"));
        actionTest123 = new QAction(MultidisplayUIMainWindowClass);
        actionTest123->setObjectName(QStringLiteral("actionTest123"));
        actionShow_Boost_Lambda = new QAction(MultidisplayUIMainWindowClass);
        actionShow_Boost_Lambda->setObjectName(QStringLiteral("actionShow_Boost_Lambda"));
        actionShow_RPM_Boost = new QAction(MultidisplayUIMainWindowClass);
        actionShow_RPM_Boost->setObjectName(QStringLiteral("actionShow_RPM_Boost"));
        action_Replay = new QAction(MultidisplayUIMainWindowClass);
        action_Replay->setObjectName(QStringLiteral("action_Replay"));
        actionTest_Thread = new QAction(MultidisplayUIMainWindowClass);
        actionTest_Thread->setObjectName(QStringLiteral("actionTest_Thread"));
        actionStop_Replay_Thread = new QAction(MultidisplayUIMainWindowClass);
        actionStop_Replay_Thread->setObjectName(QStringLiteral("actionStop_Replay_Thread"));
        action_activate_MD_string_output = new QAction(MultidisplayUIMainWindowClass);
        action_activate_MD_string_output->setObjectName(QStringLiteral("action_activate_MD_string_output"));
        action_calibrate_LD_measure_environment_pressure = new QAction(MultidisplayUIMainWindowClass);
        action_calibrate_LD_measure_environment_pressure->setObjectName(QStringLiteral("action_calibrate_LD_measure_environment_pressure"));
        action_load_settings_from_EEPROM = new QAction(MultidisplayUIMainWindowClass);
        action_load_settings_from_EEPROM->setObjectName(QStringLiteral("action_load_settings_from_EEPROM"));
        action_save_settings_to_EEPROM = new QAction(MultidisplayUIMainWindowClass);
        action_save_settings_to_EEPROM->setObjectName(QStringLiteral("action_save_settings_to_EEPROM"));
        action_set_N75_duty_cycles = new QAction(MultidisplayUIMainWindowClass);
        action_set_N75_duty_cycles->setObjectName(QStringLiteral("action_set_N75_duty_cycles"));
        actionN75_boost_control = new QAction(MultidisplayUIMainWindowClass);
        actionN75_boost_control->setObjectName(QStringLiteral("actionN75_boost_control"));
        actionActivate_MD_binary_output = new QAction(MultidisplayUIMainWindowClass);
        actionActivate_MD_binary_output->setObjectName(QStringLiteral("actionActivate_MD_binary_output"));
        action_disable_measurement_data_output = new QAction(MultidisplayUIMainWindowClass);
        action_disable_measurement_data_output->setObjectName(QStringLiteral("action_disable_measurement_data_output"));
        V2_action_load_settings_from_EEPROM = new QAction(MultidisplayUIMainWindowClass);
        V2_action_load_settings_from_EEPROM->setObjectName(QStringLiteral("V2_action_load_settings_from_EEPROM"));
        V2_action_save_settings_to_EEPROM = new QAction(MultidisplayUIMainWindowClass);
        V2_action_save_settings_to_EEPROM->setObjectName(QStringLiteral("V2_action_save_settings_to_EEPROM"));
        V2_action_calibrate_LD_measure_environment_pressure = new QAction(MultidisplayUIMainWindowClass);
        V2_action_calibrate_LD_measure_environment_pressure->setObjectName(QStringLiteral("V2_action_calibrate_LD_measure_environment_pressure"));
        actionSettings = new QAction(MultidisplayUIMainWindowClass);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionGearbox_settings = new QAction(MultidisplayUIMainWindowClass);
        actionGearbox_settings->setObjectName(QStringLiteral("actionGearbox_settings"));
        actionAbout = new QAction(MultidisplayUIMainWindowClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        action200kpa = new QAction(MultidisplayUIMainWindowClass);
        action200kpa->setObjectName(QStringLiteral("action200kpa"));
        action200kpa->setCheckable(true);
        action250kpa = new QAction(MultidisplayUIMainWindowClass);
        action250kpa->setObjectName(QStringLiteral("action250kpa"));
        action250kpa->setCheckable(true);
        action300kpa = new QAction(MultidisplayUIMainWindowClass);
        action300kpa->setObjectName(QStringLiteral("action300kpa"));
        action300kpa->setCheckable(true);
        action400kpa = new QAction(MultidisplayUIMainWindowClass);
        action400kpa->setObjectName(QStringLiteral("action400kpa"));
        action400kpa->setCheckable(true);
        action100kpa = new QAction(MultidisplayUIMainWindowClass);
        action100kpa->setObjectName(QStringLiteral("action100kpa"));
        action100kpa->setCheckable(true);
        action = new QAction(MultidisplayUIMainWindowClass);
        action->setObjectName(QStringLiteral("action"));
        action->setCheckable(true);
        actionShow_application_window = new QAction(MultidisplayUIMainWindowClass);
        actionShow_application_window->setObjectName(QStringLiteral("actionShow_application_window"));
        actionConfigure_DataTable = new QAction(MultidisplayUIMainWindowClass);
        actionConfigure_DataTable->setObjectName(QStringLiteral("actionConfigure_DataTable"));
        centralwidget = new QWidget(MultidisplayUIMainWindowClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        DataTableWidget = new QTabWidget(centralwidget);
        DataTableWidget->setObjectName(QStringLiteral("DataTableWidget"));
        DataTab = new QWidget();
        DataTab->setObjectName(QStringLiteral("DataTab"));
        verticalLayout = new QVBoxLayout(DataTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        DataTextEdit = new QPlainTextEdit(DataTab);
        DataTextEdit->setObjectName(QStringLiteral("DataTextEdit"));

        verticalLayout->addWidget(DataTextEdit);

        DataTableWidget->addTab(DataTab, QString());
        BoostPidTab = new QWidget();
        BoostPidTab->setObjectName(QStringLiteral("BoostPidTab"));
        verticalLayout_3 = new QVBoxLayout(BoostPidTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        BoostParamFrame = new QFrame(BoostPidTab);
        BoostParamFrame->setObjectName(QStringLiteral("BoostParamFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BoostParamFrame->sizePolicy().hasHeightForWidth());
        BoostParamFrame->setSizePolicy(sizePolicy);
        BoostParamFrame->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_2 = new QHBoxLayout(BoostParamFrame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout_3->addWidget(BoostParamFrame);

        BoostGraphGroupBox = new QGroupBox(BoostPidTab);
        BoostGraphGroupBox->setObjectName(QStringLiteral("BoostGraphGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BoostGraphGroupBox->sizePolicy().hasHeightForWidth());
        BoostGraphGroupBox->setSizePolicy(sizePolicy1);
        BoostGraphGroupBox->setMinimumSize(QSize(0, 100));

        verticalLayout_3->addWidget(BoostGraphGroupBox);

        DataTableWidget->addTab(BoostPidTab, QString());
        VisualizationTab = new QWidget();
        VisualizationTab->setObjectName(QStringLiteral("VisualizationTab"));
        DataTableWidget->addTab(VisualizationTab, QString());
        Data = new QWidget();
        Data->setObjectName(QStringLiteral("Data"));
        horizontalLayout_3 = new QHBoxLayout(Data);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        DataTableView = new QTableView(Data);
        DataTableView->setObjectName(QStringLiteral("DataTableView"));

        horizontalLayout_3->addWidget(DataTableView);

        DataTableWidget->addTab(Data, QString());
        DashboardTab = new QWidget();
        DashboardTab->setObjectName(QStringLiteral("DashboardTab"));
        DataTableWidget->addTab(DashboardTab, QString());

        horizontalLayout->addWidget(DataTableWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ReplayGroupBox = new QGroupBox(centralwidget);
        ReplayGroupBox->setObjectName(QStringLiteral("ReplayGroupBox"));
        ReplayGroupBox->setCheckable(false);
        ReplayGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(ReplayGroupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        ReplayCurPos = new QCheckBox(ReplayGroupBox);
        ReplayCurPos->setObjectName(QStringLiteral("ReplayCurPos"));

        verticalLayout_5->addWidget(ReplayCurPos);

        PlayButton = new QPushButton(ReplayGroupBox);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));

        verticalLayout_5->addWidget(PlayButton);

        PauseButton = new QPushButton(ReplayGroupBox);
        PauseButton->setObjectName(QStringLiteral("PauseButton"));

        verticalLayout_5->addWidget(PauseButton);

        StopButton = new QPushButton(ReplayGroupBox);
        StopButton->setObjectName(QStringLiteral("StopButton"));

        verticalLayout_5->addWidget(StopButton);

        ReplayFactorSpinBox = new QDoubleSpinBox(ReplayGroupBox);
        ReplayFactorSpinBox->setObjectName(QStringLiteral("ReplayFactorSpinBox"));
        ReplayFactorSpinBox->setMinimum(0.1);
        ReplayFactorSpinBox->setValue(1);

        verticalLayout_5->addWidget(ReplayFactorSpinBox);


        verticalLayout_2->addWidget(ReplayGroupBox);

        CmdGroupBox = new QGroupBox(centralwidget);
        CmdGroupBox->setObjectName(QStringLiteral("CmdGroupBox"));
        CmdGroupBox->setEnabled(true);
        CmdGroupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_4 = new QVBoxLayout(CmdGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        ButtonAPush = new QPushButton(CmdGroupBox);
        ButtonAPush->setObjectName(QStringLiteral("ButtonAPush"));

        verticalLayout_4->addWidget(ButtonAPush);

        ButtonAHold = new QPushButton(CmdGroupBox);
        ButtonAHold->setObjectName(QStringLiteral("ButtonAHold"));
        ButtonAHold->setFlat(false);

        verticalLayout_4->addWidget(ButtonAHold);

        ButtonBPush = new QPushButton(CmdGroupBox);
        ButtonBPush->setObjectName(QStringLiteral("ButtonBPush"));

        verticalLayout_4->addWidget(ButtonBPush);

        ButtonBHold = new QPushButton(CmdGroupBox);
        ButtonBHold->setObjectName(QStringLiteral("ButtonBHold"));

        verticalLayout_4->addWidget(ButtonBHold);


        verticalLayout_2->addWidget(CmdGroupBox);

        DataViewGroupBox = new QGroupBox(centralwidget);
        DataViewGroupBox->setObjectName(QStringLiteral("DataViewGroupBox"));
        DataViewGroupBox->setMinimumSize(QSize(0, 165));
        DataViewSlider = new QSlider(DataViewGroupBox);
        DataViewSlider->setObjectName(QStringLiteral("DataViewSlider"));
        DataViewSlider->setGeometry(QRect(10, 50, 71, 16));
        DataViewSlider->setMinimum(0);
        DataViewSlider->setMaximum(100);
        DataViewSlider->setValue(1);
        DataViewSlider->setOrientation(Qt::Horizontal);
        DataViewSlider->setInvertedAppearance(true);
        DataViewSlider->setInvertedControls(false);
        DataViewWinSizeSpinBox = new QSpinBox(DataViewGroupBox);
        DataViewWinSizeSpinBox->setObjectName(QStringLiteral("DataViewWinSizeSpinBox"));
        DataViewWinSizeSpinBox->setGeometry(QRect(10, 150, 71, 21));
        DataViewWinSizeSpinBox->setMinimum(10);
        DataViewWinSizeSpinBox->setMaximum(100000);
        DataViewWinSizeSpinBox->setSingleStep(10);
        DataViewWinSizeSpinBox->setValue(100);
        label = new QLabel(DataViewGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 81, 16));
        label_2 = new QLabel(DataViewGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 81, 41));
        DataViewScrollLeftButton = new QPushButton(DataViewGroupBox);
        DataViewScrollLeftButton->setObjectName(QStringLiteral("DataViewScrollLeftButton"));
        DataViewScrollLeftButton->setGeometry(QRect(10, 70, 31, 25));
        DataViewScrollLeftButton->setMaximumSize(QSize(70, 16777215));
        DataViewScrollRightButton = new QPushButton(DataViewGroupBox);
        DataViewScrollRightButton->setObjectName(QStringLiteral("DataViewScrollRightButton"));
        DataViewScrollRightButton->setGeometry(QRect(50, 70, 31, 25));
        DataViewScrollRightButton->setMaximumSize(QSize(70, 16777215));

        verticalLayout_2->addWidget(DataViewGroupBox);


        horizontalLayout->addLayout(verticalLayout_2);

        MultidisplayUIMainWindowClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MultidisplayUIMainWindowClass);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 845, 27));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Serial = new QMenu(menubar);
        menu_Serial->setObjectName(QStringLiteral("menu_Serial"));
        menu_Evaluation = new QMenu(menubar);
        menu_Evaluation->setObjectName(QStringLiteral("menu_Evaluation"));
        menu_Visualization = new QMenu(menubar);
        menu_Visualization->setObjectName(QStringLiteral("menu_Visualization"));
        menuV2 = new QMenu(menubar);
        menuV2->setObjectName(QStringLiteral("menuV2"));
        menu_Digifant_I = new QMenu(menuV2);
        menu_Digifant_I->setObjectName(QStringLiteral("menu_Digifant_I"));
        menu_map_sensor = new QMenu(menu_Digifant_I);
        menu_map_sensor->setObjectName(QStringLiteral("menu_map_sensor"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MultidisplayUIMainWindowClass->setMenuBar(menubar);
        StatusBar = new QStatusBar(MultidisplayUIMainWindowClass);
        StatusBar->setObjectName(QStringLiteral("StatusBar"));
        MultidisplayUIMainWindowClass->setStatusBar(StatusBar);
        toolBar = new QToolBar(MultidisplayUIMainWindowClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MultidisplayUIMainWindowClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Serial->menuAction());
        menubar->addAction(menu_Visualization->menuAction());
        menubar->addAction(menu_Evaluation->menuAction());
        menubar->addAction(menuV2->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(action_SaveAs);
        menu_File->addAction(action_Export_as_CSV);
        menu_Serial->addAction(action_SerialConnect);
        menu_Serial->addAction(action_SerialDisconnect);
        menu_Serial->addSeparator();
        menu_Serial->addAction(action_SerialOptions);
        menu_Serial->addAction(action_disable_measurement_data_output);
        menu_Serial->addAction(action_activate_MD_string_output);
        menu_Serial->addAction(actionActivate_MD_binary_output);
        menu_Serial->addSeparator();
        menu_Evaluation->addAction(actionShow_Boost_Lambda);
        menu_Evaluation->addAction(actionShow_RPM_Boost);
        menu_Visualization->addAction(action_Enable_Zoom_Mode);
        menu_Visualization->addSeparator();
        menu_Visualization->addAction(action_config_Vis1);
        menu_Visualization->addAction(actionConfigure_DataTable);
        menuV2->addAction(actionN75_boost_control);
        menuV2->addAction(actionSettings);
        menuV2->addAction(V2_action_load_settings_from_EEPROM);
        menuV2->addAction(V2_action_save_settings_to_EEPROM);
        menuV2->addSeparator();
        menuV2->addAction(V2_action_calibrate_LD_measure_environment_pressure);
        menuV2->addAction(actionGearbox_settings);
        menuV2->addSeparator();
        menuV2->addAction(menu_Digifant_I->menuAction());
        menu_Digifant_I->addAction(menu_map_sensor->menuAction());
        menu_Digifant_I->addAction(actionShow_application_window);
        menu_map_sensor->addAction(action100kpa);
        menu_map_sensor->addAction(action200kpa);
        menu_map_sensor->addAction(action250kpa);
        menu_map_sensor->addAction(action300kpa);
        menu_map_sensor->addAction(action400kpa);
        menuHelp->addAction(actionAbout);

        retranslateUi(MultidisplayUIMainWindowClass);

        DataTableWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MultidisplayUIMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MultidisplayUIMainWindowClass)
    {
        MultidisplayUIMainWindowClass->setWindowTitle(QApplication::translate("MultidisplayUIMainWindowClass", "Multidisplay UI", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        MultidisplayUIMainWindowClass->setAccessibleName(QApplication::translate("MultidisplayUIMainWindowClass", "MultidisplayUI", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        action_SerialConnect->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&Connect", Q_NULLPTR));
        action_SerialDisconnect->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&Disconnect", Q_NULLPTR));
        action_SerialOptions->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&Options", Q_NULLPTR));
        action_Save->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&Save", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Save->setShortcut(QApplication::translate("MultidisplayUIMainWindowClass", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_SaveAs->setText(QApplication::translate("MultidisplayUIMainWindowClass", "Save &As", Q_NULLPTR));
        action_Export_as_CSV->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&Export as CSV", Q_NULLPTR));
        action_Open->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&Open", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Open->setShortcut(QApplication::translate("MultidisplayUIMainWindowClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_New->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&New", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_New->setShortcut(QApplication::translate("MultidisplayUIMainWindowClass", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Enable_Zoom_Mode->setText(QApplication::translate("MultidisplayUIMainWindowClass", "enable &Zoom Mode", Q_NULLPTR));
        actionShow_EGT0->setText(QApplication::translate("MultidisplayUIMainWindowClass", "show EGT&0", Q_NULLPTR));
        actionShow_EGT1->setText(QApplication::translate("MultidisplayUIMainWindowClass", "show EGT&1", Q_NULLPTR));
        action_config_Vis1->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&configure Visualization 1", Q_NULLPTR));
        actionTest123->setText(QApplication::translate("MultidisplayUIMainWindowClass", "test123", Q_NULLPTR));
        actionShow_Boost_Lambda->setText(QApplication::translate("MultidisplayUIMainWindowClass", "show Boost / &Lambda", Q_NULLPTR));
        actionShow_RPM_Boost->setText(QApplication::translate("MultidisplayUIMainWindowClass", "show RPM / &Boost", Q_NULLPTR));
        action_Replay->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&Replay", Q_NULLPTR));
        actionTest_Thread->setText(QApplication::translate("MultidisplayUIMainWindowClass", "start Replay Thread", Q_NULLPTR));
        actionStop_Replay_Thread->setText(QApplication::translate("MultidisplayUIMainWindowClass", "stop Replay Thread", Q_NULLPTR));
        action_activate_MD_string_output->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&activate MD string output", Q_NULLPTR));
        action_calibrate_LD_measure_environment_pressure->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&calibrate LD (measure environment pressure)", Q_NULLPTR));
        action_load_settings_from_EEPROM->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&load settings from EEPROM", Q_NULLPTR));
        action_save_settings_to_EEPROM->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&save settings to EEPROM", Q_NULLPTR));
        action_set_N75_duty_cycles->setText(QApplication::translate("MultidisplayUIMainWindowClass", "s&et N75 duty cycles", Q_NULLPTR));
        actionN75_boost_control->setText(QApplication::translate("MultidisplayUIMainWindowClass", "n75 &boost control", Q_NULLPTR));
        actionActivate_MD_binary_output->setText(QApplication::translate("MultidisplayUIMainWindowClass", "activate MD &binary output", Q_NULLPTR));
        action_disable_measurement_data_output->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&disable measurement data output", Q_NULLPTR));
        V2_action_load_settings_from_EEPROM->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&load settings from EEPROM", Q_NULLPTR));
        V2_action_save_settings_to_EEPROM->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&save settings to EEPROM", Q_NULLPTR));
        V2_action_calibrate_LD_measure_environment_pressure->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&calibrate LD (measure environment pressure)", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("MultidisplayUIMainWindowClass", "&settings", Q_NULLPTR));
        actionGearbox_settings->setText(QApplication::translate("MultidisplayUIMainWindowClass", "gearbox settings", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MultidisplayUIMainWindowClass", "about", Q_NULLPTR));
        action200kpa->setText(QApplication::translate("MultidisplayUIMainWindowClass", "200kpa", Q_NULLPTR));
        action250kpa->setText(QApplication::translate("MultidisplayUIMainWindowClass", "250kpa", Q_NULLPTR));
        action300kpa->setText(QApplication::translate("MultidisplayUIMainWindowClass", "300kpa", Q_NULLPTR));
        action400kpa->setText(QApplication::translate("MultidisplayUIMainWindowClass", "400kpa", Q_NULLPTR));
        action100kpa->setText(QApplication::translate("MultidisplayUIMainWindowClass", "100kpa", Q_NULLPTR));
        action->setText(QApplication::translate("MultidisplayUIMainWindowClass", "use as MD boost sensor", Q_NULLPTR));
        actionShow_application_window->setText(QApplication::translate("MultidisplayUIMainWindowClass", "show &application window", Q_NULLPTR));
        actionConfigure_DataTable->setText(QApplication::translate("MultidisplayUIMainWindowClass", "configure DataTable", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        DataTab->setAccessibleName(QApplication::translate("MultidisplayUIMainWindowClass", "SerialData", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        DataTableWidget->setTabText(DataTableWidget->indexOf(DataTab), QApplication::translate("MultidisplayUIMainWindowClass", "SerialInput", Q_NULLPTR));
        BoostGraphGroupBox->setTitle(QString());
        DataTableWidget->setTabText(DataTableWidget->indexOf(BoostPidTab), QApplication::translate("MultidisplayUIMainWindowClass", "Boost PID", Q_NULLPTR));
        DataTableWidget->setTabText(DataTableWidget->indexOf(VisualizationTab), QApplication::translate("MultidisplayUIMainWindowClass", "Visualization", Q_NULLPTR));
        DataTableWidget->setTabText(DataTableWidget->indexOf(Data), QApplication::translate("MultidisplayUIMainWindowClass", "Data", Q_NULLPTR));
        DataTableWidget->setTabText(DataTableWidget->indexOf(DashboardTab), QApplication::translate("MultidisplayUIMainWindowClass", "Dashboard", Q_NULLPTR));
        ReplayGroupBox->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "Replay", Q_NULLPTR));
        ReplayCurPos->setText(QApplication::translate("MultidisplayUIMainWindowClass", "cur pos", Q_NULLPTR));
        PlayButton->setText(QApplication::translate("MultidisplayUIMainWindowClass", "Play", Q_NULLPTR));
        PauseButton->setText(QApplication::translate("MultidisplayUIMainWindowClass", "Pause", Q_NULLPTR));
        StopButton->setText(QApplication::translate("MultidisplayUIMainWindowClass", "Stop", Q_NULLPTR));
        CmdGroupBox->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "Commands", Q_NULLPTR));
        ButtonAPush->setText(QApplication::translate("MultidisplayUIMainWindowClass", "A push", Q_NULLPTR));
        ButtonAHold->setText(QApplication::translate("MultidisplayUIMainWindowClass", "A hold", Q_NULLPTR));
        ButtonBPush->setText(QApplication::translate("MultidisplayUIMainWindowClass", "B push", Q_NULLPTR));
        ButtonBHold->setText(QApplication::translate("MultidisplayUIMainWindowClass", "B hold", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DataViewGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        DataViewGroupBox->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "DataView", Q_NULLPTR));
        label->setText(QApplication::translate("MultidisplayUIMainWindowClass", "plot data ]", Q_NULLPTR));
        label_2->setText(QApplication::translate("MultidisplayUIMainWindowClass", "# of plotted \n"
"records:", Q_NULLPTR));
        DataViewScrollLeftButton->setText(QApplication::translate("MultidisplayUIMainWindowClass", "<", Q_NULLPTR));
        DataViewScrollRightButton->setText(QApplication::translate("MultidisplayUIMainWindowClass", ">", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "&File", Q_NULLPTR));
        menu_Serial->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "&Serial", Q_NULLPTR));
        menu_Evaluation->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "&Evaluation", Q_NULLPTR));
        menu_Visualization->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "&Visualization", Q_NULLPTR));
        menuV2->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "Multidisplay V&2", Q_NULLPTR));
        menu_Digifant_I->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "&Digifant I", Q_NULLPTR));
        menu_map_sensor->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "&map sensor", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MultidisplayUIMainWindowClass", "Help", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MultidisplayUIMainWindowClass", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MultidisplayUIMainWindowClass: public Ui_MultidisplayUIMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIDISPLAYUIMAINWINDOW_H
