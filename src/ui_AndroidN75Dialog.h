/********************************************************************************
** Form generated from reading UI file 'AndroidN75Dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANDROIDN75DIALOG_H
#define UI_ANDROIDN75DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AndroidN75Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *lowTab;
    QWidget *highTab;
    QWidget *pidTab;

    void setupUi(QDialog *AndroidN75Dialog)
    {
        if (AndroidN75Dialog->objectName().isEmpty())
            AndroidN75Dialog->setObjectName(QStringLiteral("AndroidN75Dialog"));
        AndroidN75Dialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(AndroidN75Dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(AndroidN75Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        lowTab = new QWidget();
        lowTab->setObjectName(QStringLiteral("lowTab"));
        tabWidget->addTab(lowTab, QString());
        highTab = new QWidget();
        highTab->setObjectName(QStringLiteral("highTab"));
        tabWidget->addTab(highTab, QString());
        pidTab = new QWidget();
        pidTab->setObjectName(QStringLiteral("pidTab"));
        tabWidget->addTab(pidTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AndroidN75Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AndroidN75Dialog);
    } // setupUi

    void retranslateUi(QDialog *AndroidN75Dialog)
    {
        AndroidN75Dialog->setWindowTitle(QApplication::translate("AndroidN75Dialog", "Dialog", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(lowTab), QApplication::translate("AndroidN75Dialog", "low", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(highTab), QApplication::translate("AndroidN75Dialog", "high", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pidTab), QApplication::translate("AndroidN75Dialog", "PID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AndroidN75Dialog: public Ui_AndroidN75Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANDROIDN75DIALOG_H
