/********************************************************************************
** Form generated from reading UI file 'N75OptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_N75OPTIONSDIALOG_H
#define UI_N75OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_N75OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *n75NormalDutySpinBox;
    QLabel *label_2;
    QSpinBox *n75RaceDutySpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *N75OptionsDialog)
    {
        if (N75OptionsDialog->objectName().isEmpty())
            N75OptionsDialog->setObjectName(QStringLiteral("N75OptionsDialog"));
        N75OptionsDialog->resize(381, 214);
        verticalLayout = new QVBoxLayout(N75OptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(N75OptionsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        n75NormalDutySpinBox = new QSpinBox(groupBox);
        n75NormalDutySpinBox->setObjectName(QStringLiteral("n75NormalDutySpinBox"));
        n75NormalDutySpinBox->setMaximum(255);

        gridLayout->addWidget(n75NormalDutySpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        n75RaceDutySpinBox = new QSpinBox(groupBox);
        n75RaceDutySpinBox->setObjectName(QStringLiteral("n75RaceDutySpinBox"));
        n75RaceDutySpinBox->setMaximum(255);

        gridLayout->addWidget(n75RaceDutySpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(N75OptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(N75OptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), N75OptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), N75OptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(N75OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *N75OptionsDialog)
    {
        N75OptionsDialog->setWindowTitle(QApplication::translate("N75OptionsDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("N75OptionsDialog", "N75 duty cycle normal:", Q_NULLPTR));
        label_2->setText(QApplication::translate("N75OptionsDialog", "N75 duty cycle race:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class N75OptionsDialog: public Ui_N75OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_N75OPTIONSDIALOG_H
