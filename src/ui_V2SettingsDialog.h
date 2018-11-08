/********************************************************************************
** Form generated from reading UI file 'V2SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V2SETTINGSDIALOG_H
#define UI_V2SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_V2SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBoxFrequency;
    QVBoxLayout *verticalLayout;
    QSpinBox *serialFrequencySpinBox;
    QGroupBox *groupBoxEnergy;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *actualizeVis1CheckBox;
    QCheckBox *actualizeDashboardCheckBox;
    QGroupBox *groupBoxEcu;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxEcu;
    QGroupBox *groupBoxEnergy_2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBoxMapSensor;

    void setupUi(QDialog *V2SettingsDialog)
    {
        if (V2SettingsDialog->objectName().isEmpty())
            V2SettingsDialog->setObjectName(QStringLiteral("V2SettingsDialog"));
        V2SettingsDialog->resize(585, 398);
        gridLayout = new QGridLayout(V2SettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(V2SettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        groupBoxFrequency = new QGroupBox(V2SettingsDialog);
        groupBoxFrequency->setObjectName(QStringLiteral("groupBoxFrequency"));
        verticalLayout = new QVBoxLayout(groupBoxFrequency);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        serialFrequencySpinBox = new QSpinBox(groupBoxFrequency);
        serialFrequencySpinBox->setObjectName(QStringLiteral("serialFrequencySpinBox"));
        serialFrequencySpinBox->setMinimum(1);
        serialFrequencySpinBox->setMaximum(100);
        serialFrequencySpinBox->setValue(10);

        verticalLayout->addWidget(serialFrequencySpinBox);


        gridLayout->addWidget(groupBoxFrequency, 1, 0, 1, 1);

        groupBoxEnergy = new QGroupBox(V2SettingsDialog);
        groupBoxEnergy->setObjectName(QStringLiteral("groupBoxEnergy"));
        verticalLayout_2 = new QVBoxLayout(groupBoxEnergy);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        actualizeVis1CheckBox = new QCheckBox(groupBoxEnergy);
        actualizeVis1CheckBox->setObjectName(QStringLiteral("actualizeVis1CheckBox"));

        verticalLayout_2->addWidget(actualizeVis1CheckBox);

        actualizeDashboardCheckBox = new QCheckBox(groupBoxEnergy);
        actualizeDashboardCheckBox->setObjectName(QStringLiteral("actualizeDashboardCheckBox"));

        verticalLayout_2->addWidget(actualizeDashboardCheckBox);


        gridLayout->addWidget(groupBoxEnergy, 4, 0, 1, 1);

        groupBoxEcu = new QGroupBox(V2SettingsDialog);
        groupBoxEcu->setObjectName(QStringLiteral("groupBoxEcu"));
        gridLayout_2 = new QGridLayout(groupBoxEcu);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        comboBoxEcu = new QComboBox(groupBoxEcu);
        comboBoxEcu->setObjectName(QStringLiteral("comboBoxEcu"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxEcu->sizePolicy().hasHeightForWidth());
        comboBoxEcu->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxEcu, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxEcu, 2, 0, 1, 1);

        groupBoxEnergy_2 = new QGroupBox(V2SettingsDialog);
        groupBoxEnergy_2->setObjectName(QStringLiteral("groupBoxEnergy_2"));
        verticalLayout_3 = new QVBoxLayout(groupBoxEnergy_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        comboBoxMapSensor = new QComboBox(groupBoxEnergy_2);
        comboBoxMapSensor->setObjectName(QStringLiteral("comboBoxMapSensor"));

        verticalLayout_3->addWidget(comboBoxMapSensor);


        gridLayout->addWidget(groupBoxEnergy_2, 3, 0, 1, 1);


        retranslateUi(V2SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), V2SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), V2SettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(V2SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *V2SettingsDialog)
    {
        V2SettingsDialog->setWindowTitle(QApplication::translate("V2SettingsDialog", "Dialog", Q_NULLPTR));
        groupBoxFrequency->setTitle(QApplication::translate("V2SettingsDialog", "Serial Frequency (Hz)", Q_NULLPTR));
        groupBoxEnergy->setTitle(QApplication::translate("V2SettingsDialog", "mobility / save energy settings (mUI)", Q_NULLPTR));
        actualizeVis1CheckBox->setText(QApplication::translate("V2SettingsDialog", "actualize plots on new data", Q_NULLPTR));
        actualizeDashboardCheckBox->setText(QApplication::translate("V2SettingsDialog", "actualize Dashboard on new data", Q_NULLPTR));
        groupBoxEcu->setTitle(QApplication::translate("V2SettingsDialog", "ECU", Q_NULLPTR));
        comboBoxEcu->clear();
        comboBoxEcu->insertItems(0, QStringList()
         << QApplication::translate("V2SettingsDialog", "Digifant 1", Q_NULLPTR)
         << QApplication::translate("V2SettingsDialog", "VR6 M3.8.1", Q_NULLPTR)
         << QApplication::translate("V2SettingsDialog", "generic", Q_NULLPTR)
        );
        groupBoxEnergy_2->setTitle(QApplication::translate("V2SettingsDialog", "Digifant 1 MapSensor", Q_NULLPTR));
        comboBoxMapSensor->clear();
        comboBoxMapSensor->insertItems(0, QStringList()
         << QApplication::translate("V2SettingsDialog", "100", Q_NULLPTR)
         << QApplication::translate("V2SettingsDialog", "200", Q_NULLPTR)
         << QApplication::translate("V2SettingsDialog", "250", Q_NULLPTR)
         << QApplication::translate("V2SettingsDialog", "300", Q_NULLPTR)
         << QApplication::translate("V2SettingsDialog", "400", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class V2SettingsDialog: public Ui_V2SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V2SETTINGSDIALOG_H
