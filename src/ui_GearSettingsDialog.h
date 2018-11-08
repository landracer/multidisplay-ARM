/********************************************************************************
** Form generated from reading UI file 'GearSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEARSETTINGSDIALOG_H
#define UI_GEARSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GearSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *g1SpinBox;
    QLabel *label_2;
    QDoubleSpinBox *g2SpinBox;
    QLabel *label_3;
    QDoubleSpinBox *g3SpinBox;
    QLabel *label_4;
    QDoubleSpinBox *g4SpinBox;
    QLabel *label_5;
    QDoubleSpinBox *g5SpinBox;
    QLabel *label_6;
    QDoubleSpinBox *g6SpinBox;
    QComboBox *comboBox;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GearSettingsDialog)
    {
        if (GearSettingsDialog->objectName().isEmpty())
            GearSettingsDialog->setObjectName(QStringLiteral("GearSettingsDialog"));
        GearSettingsDialog->resize(443, 300);
        verticalLayout = new QVBoxLayout(GearSettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(GearSettingsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        g1SpinBox = new QDoubleSpinBox(groupBox);
        g1SpinBox->setObjectName(QStringLiteral("g1SpinBox"));
        g1SpinBox->setDecimals(4);

        gridLayout->addWidget(g1SpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        g2SpinBox = new QDoubleSpinBox(groupBox);
        g2SpinBox->setObjectName(QStringLiteral("g2SpinBox"));
        g2SpinBox->setDecimals(4);

        gridLayout->addWidget(g2SpinBox, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        g3SpinBox = new QDoubleSpinBox(groupBox);
        g3SpinBox->setObjectName(QStringLiteral("g3SpinBox"));
        g3SpinBox->setDecimals(4);

        gridLayout->addWidget(g3SpinBox, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        g4SpinBox = new QDoubleSpinBox(groupBox);
        g4SpinBox->setObjectName(QStringLiteral("g4SpinBox"));
        g4SpinBox->setDecimals(4);

        gridLayout->addWidget(g4SpinBox, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        g5SpinBox = new QDoubleSpinBox(groupBox);
        g5SpinBox->setObjectName(QStringLiteral("g5SpinBox"));
        g5SpinBox->setDecimals(4);

        gridLayout->addWidget(g5SpinBox, 5, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        g6SpinBox = new QDoubleSpinBox(groupBox);
        g6SpinBox->setObjectName(QStringLiteral("g6SpinBox"));
        g6SpinBox->setDecimals(4);

        gridLayout->addWidget(g6SpinBox, 6, 1, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(GearSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GearSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GearSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GearSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GearSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *GearSettingsDialog)
    {
        GearSettingsDialog->setWindowTitle(QApplication::translate("GearSettingsDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("GearSettingsDialog", "Gear 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("GearSettingsDialog", "Gear 2", Q_NULLPTR));
        label_3->setText(QApplication::translate("GearSettingsDialog", "Gear 3", Q_NULLPTR));
        label_4->setText(QApplication::translate("GearSettingsDialog", "Gear 4", Q_NULLPTR));
        label_5->setText(QApplication::translate("GearSettingsDialog", "Gear 5", Q_NULLPTR));
        label_6->setText(QApplication::translate("GearSettingsDialog", "Gear 6", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("GearSettingsDialog", "---", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02A ATB", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02A AYN", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02A CBA", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02M FMP custom", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02A ATB custom with fifth gear from ASD", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02A CCM (VR6)", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02A CSR (VR6 Syncro)", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02M DQB", Q_NULLPTR)
         << QApplication::translate("GearSettingsDialog", "02A CDA", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("GearSettingsDialog", "load gearbox data", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GearSettingsDialog: public Ui_GearSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEARSETTINGSDIALOG_H
