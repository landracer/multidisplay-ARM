/********************************************************************************
** Form generated from reading UI file 'MobileBoostPidWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEBOOSTPIDWINDOW_H
#define UI_MOBILEBOOSTPIDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MobileBoostPidWindow
{
public:
    QAction *actionF2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *BoostParamGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *BoostPIDTableWidget;
    QPushButton *changePidButton;
    QGroupBox *BoostGraphGroupBox;
    QMenuBar *menubar;
    QMenu *menuFileBoost;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MobileBoostPidWindow)
    {
        if (MobileBoostPidWindow->objectName().isEmpty())
            MobileBoostPidWindow->setObjectName(QStringLiteral("MobileBoostPidWindow"));
        MobileBoostPidWindow->resize(800, 480);
        actionF2 = new QAction(MobileBoostPidWindow);
        actionF2->setObjectName(QStringLiteral("actionF2"));
        centralWidget = new QWidget(MobileBoostPidWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        BoostParamGroupBox = new QGroupBox(centralWidget);
        BoostParamGroupBox->setObjectName(QStringLiteral("BoostParamGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BoostParamGroupBox->sizePolicy().hasHeightForWidth());
        BoostParamGroupBox->setSizePolicy(sizePolicy);
        BoostParamGroupBox->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_2 = new QHBoxLayout(BoostParamGroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        BoostPIDTableWidget = new QTableWidget(BoostParamGroupBox);
        if (BoostPIDTableWidget->columnCount() < 7)
            BoostPIDTableWidget->setColumnCount(7);
        if (BoostPIDTableWidget->rowCount() < 2)
            BoostPIDTableWidget->setRowCount(2);
        BoostPIDTableWidget->setObjectName(QStringLiteral("BoostPIDTableWidget"));
        BoostPIDTableWidget->setMinimumSize(QSize(0, 90));
        BoostPIDTableWidget->setMaximumSize(QSize(16777215, 90));
        BoostPIDTableWidget->setAlternatingRowColors(true);
        BoostPIDTableWidget->setRowCount(2);
        BoostPIDTableWidget->setColumnCount(7);

        horizontalLayout_2->addWidget(BoostPIDTableWidget);

        changePidButton = new QPushButton(BoostParamGroupBox);
        changePidButton->setObjectName(QStringLiteral("changePidButton"));

        horizontalLayout_2->addWidget(changePidButton);


        verticalLayout->addWidget(BoostParamGroupBox);

        BoostGraphGroupBox = new QGroupBox(centralWidget);
        BoostGraphGroupBox->setObjectName(QStringLiteral("BoostGraphGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BoostGraphGroupBox->sizePolicy().hasHeightForWidth());
        BoostGraphGroupBox->setSizePolicy(sizePolicy1);
        BoostGraphGroupBox->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(BoostGraphGroupBox);

        MobileBoostPidWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MobileBoostPidWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuFileBoost = new QMenu(menubar);
        menuFileBoost->setObjectName(QStringLiteral("menuFileBoost"));
        MobileBoostPidWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MobileBoostPidWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MobileBoostPidWindow->setStatusBar(statusbar);

        menubar->addAction(menuFileBoost->menuAction());

        retranslateUi(MobileBoostPidWindow);

        QMetaObject::connectSlotsByName(MobileBoostPidWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MobileBoostPidWindow)
    {
        MobileBoostPidWindow->setWindowTitle(QApplication::translate("MobileBoostPidWindow", "MD Boost PID", Q_NULLPTR));
        actionF2->setText(QApplication::translate("MobileBoostPidWindow", "f2", Q_NULLPTR));
        BoostParamGroupBox->setTitle(QApplication::translate("MobileBoostPidWindow", "Parameter", Q_NULLPTR));
        changePidButton->setText(QApplication::translate("MobileBoostPidWindow", "change PID", Q_NULLPTR));
        BoostGraphGroupBox->setTitle(QApplication::translate("MobileBoostPidWindow", "Visualization", Q_NULLPTR));
        menuFileBoost->setTitle(QApplication::translate("MobileBoostPidWindow", "FileBoost", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MobileBoostPidWindow: public Ui_MobileBoostPidWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEBOOSTPIDWINDOW_H
