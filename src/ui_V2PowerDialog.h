/********************************************************************************
** Form generated from reading UI file 'V2PowerDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V2POWERDIALOG_H
#define UI_V2POWERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_V2PowerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLineEdit *resultLineEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *tempSpinBox;
    QSpinBox *pressureSpinBox;
    QLabel *label_3;
    QSpinBox *carMassSpinBox;
    QLabel *label_4;
    QSpinBox *smoothSpinBox;
    QPushButton *reCalcButton;
    QLabel *label_5;
    QDoubleSpinBox *driveTrainLossSpinBox;

    void setupUi(QDialog *V2PowerDialog)
    {
        if (V2PowerDialog->objectName().isEmpty())
            V2PowerDialog->setObjectName(QStringLiteral("V2PowerDialog"));
        V2PowerDialog->resize(816, 682);
        verticalLayout = new QVBoxLayout(V2PowerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(V2PowerDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(groupBox);

        resultLineEdit = new QLineEdit(V2PowerDialog);
        resultLineEdit->setObjectName(QStringLiteral("resultLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resultLineEdit->sizePolicy().hasHeightForWidth());
        resultLineEdit->setSizePolicy(sizePolicy1);
        resultLineEdit->setReadOnly(true);

        verticalLayout->addWidget(resultLineEdit);

        groupBox_2 = new QGroupBox(V2PowerDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(groupBox_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 8, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 9, 0, 1, 1);

        tempSpinBox = new QSpinBox(groupBox_2);
        tempSpinBox->setObjectName(QStringLiteral("tempSpinBox"));
        tempSpinBox->setMinimum(-20);
        tempSpinBox->setMaximum(50);
        tempSpinBox->setValue(20);

        gridLayout->addWidget(tempSpinBox, 2, 1, 1, 1);

        pressureSpinBox = new QSpinBox(groupBox_2);
        pressureSpinBox->setObjectName(QStringLiteral("pressureSpinBox"));
        pressureSpinBox->setMinimum(900);
        pressureSpinBox->setMaximum(1100);
        pressureSpinBox->setValue(1013);

        gridLayout->addWidget(pressureSpinBox, 9, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        carMassSpinBox = new QSpinBox(groupBox_2);
        carMassSpinBox->setObjectName(QStringLiteral("carMassSpinBox"));
        carMassSpinBox->setMaximum(2000);
        carMassSpinBox->setValue(1150);

        gridLayout->addWidget(carMassSpinBox, 2, 3, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 9, 2, 1, 1);

        smoothSpinBox = new QSpinBox(groupBox_2);
        smoothSpinBox->setObjectName(QStringLiteral("smoothSpinBox"));
        smoothSpinBox->setValue(2);

        gridLayout->addWidget(smoothSpinBox, 9, 3, 1, 1);

        reCalcButton = new QPushButton(groupBox_2);
        reCalcButton->setObjectName(QStringLiteral("reCalcButton"));

        gridLayout->addWidget(reCalcButton, 2, 6, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 4, 1, 1);

        driveTrainLossSpinBox = new QDoubleSpinBox(groupBox_2);
        driveTrainLossSpinBox->setObjectName(QStringLiteral("driveTrainLossSpinBox"));
        driveTrainLossSpinBox->setDecimals(3);
        driveTrainLossSpinBox->setMaximum(1);
        driveTrainLossSpinBox->setValue(0.763);

        gridLayout->addWidget(driveTrainLossSpinBox, 2, 5, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(V2PowerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), V2PowerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), V2PowerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(V2PowerDialog);
    } // setupUi

    void retranslateUi(QDialog *V2PowerDialog)
    {
        V2PowerDialog->setWindowTitle(QApplication::translate("V2PowerDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("V2PowerDialog", "Settings", Q_NULLPTR));
        label->setText(QApplication::translate("V2PowerDialog", "ambient temperature [\302\260C]", Q_NULLPTR));
        label_2->setText(QApplication::translate("V2PowerDialog", "ambient pressure [mbar]", Q_NULLPTR));
        label_3->setText(QApplication::translate("V2PowerDialog", "car weigth [kg]", Q_NULLPTR));
        label_4->setText(QApplication::translate("V2PowerDialog", "smooth", Q_NULLPTR));
        reCalcButton->setText(QApplication::translate("V2PowerDialog", "reCalc", Q_NULLPTR));
        label_5->setText(QApplication::translate("V2PowerDialog", "drive train loss", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class V2PowerDialog: public Ui_V2PowerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V2POWERDIALOG_H
