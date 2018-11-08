/********************************************************************************
** Form generated from reading UI file 'MobileCommandWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILECOMMANDWINDOW_H
#define UI_MOBILECOMMANDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MobileCommandWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *AHoldButton;
    QPushButton *pushButton_2;
    QPushButton *AHoldButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MobileCommandWindow)
    {
        if (MobileCommandWindow->objectName().isEmpty())
            MobileCommandWindow->setObjectName(QStringLiteral("MobileCommandWindow"));
        MobileCommandWindow->resize(800, 480);
        centralwidget = new QWidget(MobileCommandWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        AHoldButton = new QPushButton(centralwidget);
        AHoldButton->setObjectName(QStringLiteral("AHoldButton"));

        gridLayout->addWidget(AHoldButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        AHoldButton_2 = new QPushButton(centralwidget);
        AHoldButton_2->setObjectName(QStringLiteral("AHoldButton_2"));

        gridLayout->addWidget(AHoldButton_2, 1, 1, 1, 1);

        MobileCommandWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MobileCommandWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MobileCommandWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MobileCommandWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MobileCommandWindow->setStatusBar(statusbar);

        retranslateUi(MobileCommandWindow);

        QMetaObject::connectSlotsByName(MobileCommandWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MobileCommandWindow)
    {
        MobileCommandWindow->setWindowTitle(QApplication::translate("MobileCommandWindow", "multidisplay remote", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MobileCommandWindow", "A push", Q_NULLPTR));
        AHoldButton->setText(QApplication::translate("MobileCommandWindow", "A hold", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MobileCommandWindow", "B push", Q_NULLPTR));
        AHoldButton_2->setText(QApplication::translate("MobileCommandWindow", "B hold", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MobileCommandWindow: public Ui_MobileCommandWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILECOMMANDWINDOW_H
