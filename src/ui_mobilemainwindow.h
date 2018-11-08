/********************************************************************************
** Form generated from reading UI file 'mobilemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEMAINWINDOW_H
#define UI_MOBILEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MobileMainWindow
{
public:
    QAction *actionBoostPid;
    QAction *actionVis1;
    QAction *actionSerial;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionNew;
    QAction *actionSend_Commands;
    QAction *actionEvaluate_Boost_Lambda;
    QAction *actionEvaluate_RPM_Boost;
    QAction *actionSerialConnect;
    QAction *actionSerialDisconnect;
    QAction *actionSettings;
    QAction *actionV2_N75_Settings;
    QAction *actionEvaluate;
    QAction *actionGearbox_settings;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QMenuBar *menubar;
    QMenu *menuFileMain;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MobileMainWindow)
    {
        if (MobileMainWindow->objectName().isEmpty())
            MobileMainWindow->setObjectName(QStringLiteral("MobileMainWindow"));
        MobileMainWindow->resize(800, 480);
        actionBoostPid = new QAction(MobileMainWindow);
        actionBoostPid->setObjectName(QStringLiteral("actionBoostPid"));
        QFont font;
        font.setPointSize(18);
        actionBoostPid->setFont(font);
        actionVis1 = new QAction(MobileMainWindow);
        actionVis1->setObjectName(QStringLiteral("actionVis1"));
        actionSerial = new QAction(MobileMainWindow);
        actionSerial->setObjectName(QStringLiteral("actionSerial"));
        actionOpen = new QAction(MobileMainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave_as = new QAction(MobileMainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionNew = new QAction(MobileMainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSend_Commands = new QAction(MobileMainWindow);
        actionSend_Commands->setObjectName(QStringLiteral("actionSend_Commands"));
        actionEvaluate_Boost_Lambda = new QAction(MobileMainWindow);
        actionEvaluate_Boost_Lambda->setObjectName(QStringLiteral("actionEvaluate_Boost_Lambda"));
        actionEvaluate_RPM_Boost = new QAction(MobileMainWindow);
        actionEvaluate_RPM_Boost->setObjectName(QStringLiteral("actionEvaluate_RPM_Boost"));
        actionSerialConnect = new QAction(MobileMainWindow);
        actionSerialConnect->setObjectName(QStringLiteral("actionSerialConnect"));
        actionSerialDisconnect = new QAction(MobileMainWindow);
        actionSerialDisconnect->setObjectName(QStringLiteral("actionSerialDisconnect"));
        actionSettings = new QAction(MobileMainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionV2_N75_Settings = new QAction(MobileMainWindow);
        actionV2_N75_Settings->setObjectName(QStringLiteral("actionV2_N75_Settings"));
        actionEvaluate = new QAction(MobileMainWindow);
        actionEvaluate->setObjectName(QStringLiteral("actionEvaluate"));
        actionGearbox_settings = new QAction(MobileMainWindow);
        actionGearbox_settings->setObjectName(QStringLiteral("actionGearbox_settings"));
        actionAbout = new QAction(MobileMainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(MobileMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Plain);
        mainFrame->setLineWidth(0);

        verticalLayout->addWidget(mainFrame);

        MobileMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MobileMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuFileMain = new QMenu(menubar);
        menuFileMain->setObjectName(QStringLiteral("menuFileMain"));
        MobileMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MobileMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MobileMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFileMain->menuAction());
        menuFileMain->addAction(actionBoostPid);
        menuFileMain->addAction(actionVis1);
        menuFileMain->addAction(actionSerial);
        menuFileMain->addAction(actionSerialConnect);
        menuFileMain->addAction(actionSerialDisconnect);
        menuFileMain->addAction(actionOpen);
        menuFileMain->addAction(actionSave_as);
        menuFileMain->addAction(actionNew);
        menuFileMain->addAction(actionSend_Commands);
        menuFileMain->addAction(actionSettings);
        menuFileMain->addAction(actionV2_N75_Settings);
        menuFileMain->addAction(actionGearbox_settings);
        menuFileMain->addAction(actionEvaluate);
        menuFileMain->addAction(actionAbout);

        retranslateUi(MobileMainWindow);

        QMetaObject::connectSlotsByName(MobileMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MobileMainWindow)
    {
        MobileMainWindow->setWindowTitle(QApplication::translate("MobileMainWindow", "multidisplay UI", Q_NULLPTR));
        actionBoostPid->setText(QApplication::translate("MobileMainWindow", "Boost Pid", Q_NULLPTR));
        actionVis1->setText(QApplication::translate("MobileMainWindow", "Vis1", Q_NULLPTR));
        actionSerial->setText(QApplication::translate("MobileMainWindow", "Serial", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MobileMainWindow", "Open", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MobileMainWindow", "Save as", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MobileMainWindow", "New", Q_NULLPTR));
        actionSend_Commands->setText(QApplication::translate("MobileMainWindow", "Send Commands", Q_NULLPTR));
        actionEvaluate_Boost_Lambda->setText(QApplication::translate("MobileMainWindow", "Evaluate Boost/Lambda", Q_NULLPTR));
        actionEvaluate_RPM_Boost->setText(QApplication::translate("MobileMainWindow", "Evaluate RPM/Boost", Q_NULLPTR));
        actionSerialConnect->setText(QApplication::translate("MobileMainWindow", "connect", Q_NULLPTR));
        actionSerialDisconnect->setText(QApplication::translate("MobileMainWindow", "disconnect", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("MobileMainWindow", "Settings", Q_NULLPTR));
        actionV2_N75_Settings->setText(QApplication::translate("MobileMainWindow", "V2 N75 Settings", Q_NULLPTR));
        actionEvaluate->setText(QApplication::translate("MobileMainWindow", "evaluate", Q_NULLPTR));
        actionGearbox_settings->setText(QApplication::translate("MobileMainWindow", "Gearbox Settings", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MobileMainWindow", "About", Q_NULLPTR));
        menuFileMain->setTitle(QApplication::translate("MobileMainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MobileMainWindow: public Ui_MobileMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEMAINWINDOW_H
