/********************************************************************************
** Form generated from reading UI file 'DataTableConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATATABLECONFIGDIALOG_H
#define UI_DATATABLECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DataTableConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *DataTableConfigTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DataTableConfigDialog)
    {
        if (DataTableConfigDialog->objectName().isEmpty())
            DataTableConfigDialog->setObjectName(QStringLiteral("DataTableConfigDialog"));
        DataTableConfigDialog->resize(613, 473);
        verticalLayout = new QVBoxLayout(DataTableConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        DataTableConfigTable = new QTableWidget(DataTableConfigDialog);
        DataTableConfigTable->setObjectName(QStringLiteral("DataTableConfigTable"));

        verticalLayout->addWidget(DataTableConfigTable);

        buttonBox = new QDialogButtonBox(DataTableConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DataTableConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DataTableConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DataTableConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DataTableConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *DataTableConfigDialog)
    {
        DataTableConfigDialog->setWindowTitle(QApplication::translate("DataTableConfigDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataTableConfigDialog: public Ui_DataTableConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATATABLECONFIGDIALOG_H
