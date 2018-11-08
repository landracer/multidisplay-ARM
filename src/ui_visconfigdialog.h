/********************************************************************************
** Form generated from reading UI file 'visconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISCONFIGDIALOG_H
#define UI_VISCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_VisConfigDialogClass
{
public:
    QGridLayout *gridLayout;
    QTableWidget *VisConfigTable;
    QPushButton *CancelButton;
    QPushButton *OkButton;

    void setupUi(QDialog *VisConfigDialogClass)
    {
        if (VisConfigDialogClass->objectName().isEmpty())
            VisConfigDialogClass->setObjectName(QStringLiteral("VisConfigDialogClass"));
        VisConfigDialogClass->resize(641, 477);
        gridLayout = new QGridLayout(VisConfigDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        VisConfigTable = new QTableWidget(VisConfigDialogClass);
        VisConfigTable->setObjectName(QStringLiteral("VisConfigTable"));

        gridLayout->addWidget(VisConfigTable, 0, 0, 1, 2);

        CancelButton = new QPushButton(VisConfigDialogClass);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));

        gridLayout->addWidget(CancelButton, 1, 0, 1, 1);

        OkButton = new QPushButton(VisConfigDialogClass);
        OkButton->setObjectName(QStringLiteral("OkButton"));

        gridLayout->addWidget(OkButton, 1, 1, 1, 1);


        retranslateUi(VisConfigDialogClass);

        QMetaObject::connectSlotsByName(VisConfigDialogClass);
    } // setupUi

    void retranslateUi(QDialog *VisConfigDialogClass)
    {
        VisConfigDialogClass->setWindowTitle(QApplication::translate("VisConfigDialogClass", "VisConfigDialog", Q_NULLPTR));
        CancelButton->setText(QApplication::translate("VisConfigDialogClass", "Cancel", Q_NULLPTR));
        OkButton->setText(QApplication::translate("VisConfigDialogClass", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VisConfigDialogClass: public Ui_VisConfigDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISCONFIGDIALOG_H
