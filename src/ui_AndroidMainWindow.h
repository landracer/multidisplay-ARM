/********************************************************************************
** Form generated from reading UI file 'AndroidMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANDROIDMAINWINDOW_H
#define UI_ANDROIDMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AndroidMainWindow
{
public:
    QAction *action1;
    QAction *actionBluetooth;
    QAction *actionSettings;
    QAction *actionV2_N75_Settings;
    QAction *actionGearbox_settings;
    QAction *actionAbout;
    QAction *actionBluetoothToggleState;
    QAction *actionSave;
    QAction *actionMdSupportForum;
    QAction *actionOpen_Replay;
    QAction *actionClear;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *dashboardPushButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuConfig;
    QMenu *menuAbout;
    QMenu *menuData;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AndroidMainWindow)
    {
        if (AndroidMainWindow->objectName().isEmpty())
            AndroidMainWindow->setObjectName(QStringLiteral("AndroidMainWindow"));
        AndroidMainWindow->resize(800, 600);
        action1 = new QAction(AndroidMainWindow);
        action1->setObjectName(QStringLiteral("action1"));
        actionBluetooth = new QAction(AndroidMainWindow);
        actionBluetooth->setObjectName(QStringLiteral("actionBluetooth"));
        actionSettings = new QAction(AndroidMainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionV2_N75_Settings = new QAction(AndroidMainWindow);
        actionV2_N75_Settings->setObjectName(QStringLiteral("actionV2_N75_Settings"));
        actionGearbox_settings = new QAction(AndroidMainWindow);
        actionGearbox_settings->setObjectName(QStringLiteral("actionGearbox_settings"));
        actionAbout = new QAction(AndroidMainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionBluetoothToggleState = new QAction(AndroidMainWindow);
        actionBluetoothToggleState->setObjectName(QStringLiteral("actionBluetoothToggleState"));
        actionSave = new QAction(AndroidMainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionMdSupportForum = new QAction(AndroidMainWindow);
        actionMdSupportForum->setObjectName(QStringLiteral("actionMdSupportForum"));
        actionOpen_Replay = new QAction(AndroidMainWindow);
        actionOpen_Replay->setObjectName(QStringLiteral("actionOpen_Replay"));
        actionClear = new QAction(AndroidMainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        centralwidget = new QWidget(AndroidMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        dashboardPushButton = new QPushButton(mainFrame);
        dashboardPushButton->setObjectName(QStringLiteral("dashboardPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dashboardPushButton->sizePolicy().hasHeightForWidth());
        dashboardPushButton->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(dashboardPushButton);

        textEdit = new QTextEdit(mainFrame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);


        verticalLayout->addWidget(mainFrame);

        AndroidMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AndroidMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menuConfig = new QMenu(menubar);
        menuConfig->setObjectName(QStringLiteral("menuConfig"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuData = new QMenu(menubar);
        menuData->setObjectName(QStringLiteral("menuData"));
        AndroidMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AndroidMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AndroidMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuData->menuAction());
        menubar->addAction(menuConfig->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuConfig->addAction(actionV2_N75_Settings);
        menuConfig->addAction(actionBluetooth);
        menuConfig->addAction(actionSettings);
        menuConfig->addAction(actionGearbox_settings);
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionMdSupportForum);
        menuData->addAction(actionBluetoothToggleState);
        menuData->addAction(actionSave);
        menuData->addAction(actionOpen_Replay);
        menuData->addAction(actionClear);

        retranslateUi(AndroidMainWindow);

        QMetaObject::connectSlotsByName(AndroidMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AndroidMainWindow)
    {
        AndroidMainWindow->setWindowTitle(QApplication::translate("AndroidMainWindow", "MainWindow", Q_NULLPTR));
        action1->setText(QApplication::translate("AndroidMainWindow", "Boost", Q_NULLPTR));
        actionBluetooth->setText(QApplication::translate("AndroidMainWindow", "&bluetooth options", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("AndroidMainWindow", "&options", Q_NULLPTR));
        actionV2_N75_Settings->setText(QApplication::translate("AndroidMainWindow", "&N75 boost control", Q_NULLPTR));
        actionGearbox_settings->setText(QApplication::translate("AndroidMainWindow", "&gearbox", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("AndroidMainWindow", "about", Q_NULLPTR));
        actionBluetoothToggleState->setText(QApplication::translate("AndroidMainWindow", "Bluetooth toggle", Q_NULLPTR));
        actionSave->setText(QApplication::translate("AndroidMainWindow", "Save", Q_NULLPTR));
        actionMdSupportForum->setText(QApplication::translate("AndroidMainWindow", "md support forum", Q_NULLPTR));
        actionOpen_Replay->setText(QApplication::translate("AndroidMainWindow", "Open and Replay", Q_NULLPTR));
        actionClear->setText(QApplication::translate("AndroidMainWindow", "Clear", Q_NULLPTR));
        dashboardPushButton->setText(QApplication::translate("AndroidMainWindow", "show DashBoard", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("AndroidMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">auto-connect to paired bluetooth device is on.</p></body></html>", Q_NULLPTR));
        menuConfig->setTitle(QApplication::translate("AndroidMainWindow", "Config", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("AndroidMainWindow", "Help", Q_NULLPTR));
        menuData->setTitle(QApplication::translate("AndroidMainWindow", "mdv2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AndroidMainWindow: public Ui_AndroidMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANDROIDMAINWINDOW_H
