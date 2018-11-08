/********************************************************************************
** Form generated from reading UI file 'V2N75SetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V2N75SETUPDIALOG_H
#define UI_V2N75SETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_V2N75SetupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *n75TableGroupBox;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QComboBox *n75comboBox;
    QPushButton *n75ReadPushButton;
    QPushButton *n75WritePushButton;
    QPushButton *loadEepromPushButton;
    QPushButton *writeEepromPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *V2N75SetupDialog)
    {
        if (V2N75SetupDialog->objectName().isEmpty())
            V2N75SetupDialog->setObjectName(QStringLiteral("V2N75SetupDialog"));
        V2N75SetupDialog->resize(900, 560);
        verticalLayout = new QVBoxLayout(V2N75SetupDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        n75TableGroupBox = new QGroupBox(V2N75SetupDialog);
        n75TableGroupBox->setObjectName(QStringLiteral("n75TableGroupBox"));
        gridLayout = new QGridLayout(n75TableGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(n75TableGroupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        n75comboBox = new QComboBox(frame);
        n75comboBox->setObjectName(QStringLiteral("n75comboBox"));

        horizontalLayout->addWidget(n75comboBox);

        n75ReadPushButton = new QPushButton(frame);
        n75ReadPushButton->setObjectName(QStringLiteral("n75ReadPushButton"));

        horizontalLayout->addWidget(n75ReadPushButton);

        n75WritePushButton = new QPushButton(frame);
        n75WritePushButton->setObjectName(QStringLiteral("n75WritePushButton"));

        horizontalLayout->addWidget(n75WritePushButton);

        loadEepromPushButton = new QPushButton(frame);
        loadEepromPushButton->setObjectName(QStringLiteral("loadEepromPushButton"));

        horizontalLayout->addWidget(loadEepromPushButton);

        writeEepromPushButton = new QPushButton(frame);
        writeEepromPushButton->setObjectName(QStringLiteral("writeEepromPushButton"));

        horizontalLayout->addWidget(writeEepromPushButton);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        verticalLayout->addWidget(n75TableGroupBox);

        buttonBox = new QDialogButtonBox(V2N75SetupDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(V2N75SetupDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), V2N75SetupDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), V2N75SetupDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(V2N75SetupDialog);
    } // setupUi

    void retranslateUi(QDialog *V2N75SetupDialog)
    {
        V2N75SetupDialog->setWindowTitle(QApplication::translate("V2N75SetupDialog", "V2 N75 Settings", Q_NULLPTR));
        n75TableGroupBox->setTitle(QApplication::translate("V2N75SetupDialog", "N75 maps", Q_NULLPTR));
        n75comboBox->clear();
        n75comboBox->insertItems(0, QStringList()
         << QApplication::translate("V2N75SetupDialog", "Low Boost", Q_NULLPTR)
         << QApplication::translate("V2N75SetupDialog", "High Boost", Q_NULLPTR)
        );
        n75ReadPushButton->setText(QApplication::translate("V2N75SetupDialog", "Read from MD", Q_NULLPTR));
        n75WritePushButton->setText(QApplication::translate("V2N75SetupDialog", "Write to MD", Q_NULLPTR));
        loadEepromPushButton->setText(QApplication::translate("V2N75SetupDialog", "Load from EEprom", Q_NULLPTR));
        writeEepromPushButton->setText(QApplication::translate("V2N75SetupDialog", "Write to EEprom", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class V2N75SetupDialog: public Ui_V2N75SetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V2N75SETUPDIALOG_H
