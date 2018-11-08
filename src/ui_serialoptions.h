/********************************************************************************
** Form generated from reading UI file 'serialoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALOPTIONS_H
#define UI_SERIALOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SerialOptionsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *speedComboBox;
    QLabel *label_2;
    QComboBox *portComboBox;
    QLabel *label;
    QPushButton *disconnectPushButton;
    QLabel *label_3;
    QDialogButtonBox *SerialOptionsButtonBox;

    void setupUi(QDialog *SerialOptionsDialog)
    {
        if (SerialOptionsDialog->objectName().isEmpty())
            SerialOptionsDialog->setObjectName(QStringLiteral("SerialOptionsDialog"));
        SerialOptionsDialog->resize(258, 186);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(SerialOptionsDialog->sizePolicy().hasHeightForWidth());
        SerialOptionsDialog->setSizePolicy(sizePolicy);
        SerialOptionsDialog->setMaximumSize(QSize(1677721, 1677721));
        horizontalLayout = new QHBoxLayout(SerialOptionsDialog);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(SerialOptionsDialog);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        speedComboBox = new QComboBox(frame);
        speedComboBox->setObjectName(QStringLiteral("speedComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(speedComboBox->sizePolicy().hasHeightForWidth());
        speedComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(speedComboBox, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        portComboBox = new QComboBox(frame);
        portComboBox->setObjectName(QStringLiteral("portComboBox"));
        sizePolicy1.setHeightForWidth(portComboBox->sizePolicy().hasHeightForWidth());
        portComboBox->setSizePolicy(sizePolicy1);
        portComboBox->setEditable(true);

        gridLayout->addWidget(portComboBox, 2, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        disconnectPushButton = new QPushButton(frame);
        disconnectPushButton->setObjectName(QStringLiteral("disconnectPushButton"));

        gridLayout->addWidget(disconnectPushButton, 3, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);

        verticalLayout->addLayout(gridLayout);

        SerialOptionsButtonBox = new QDialogButtonBox(frame);
        SerialOptionsButtonBox->setObjectName(QStringLiteral("SerialOptionsButtonBox"));
        SerialOptionsButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(SerialOptionsButtonBox);


        horizontalLayout->addWidget(frame);


        retranslateUi(SerialOptionsDialog);

        QMetaObject::connectSlotsByName(SerialOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *SerialOptionsDialog)
    {
        SerialOptionsDialog->setWindowTitle(QApplication::translate("SerialOptionsDialog", "SerialOptions", Q_NULLPTR));
        speedComboBox->clear();
        speedComboBox->insertItems(0, QStringList()
         << QApplication::translate("SerialOptionsDialog", "115200", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "57600", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("SerialOptionsDialog", "Port", Q_NULLPTR));
        portComboBox->clear();
        portComboBox->insertItems(0, QStringList()
         << QApplication::translate("SerialOptionsDialog", "/dev/ttyUSB0", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "/dev/ttyUSB1", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "/dev/ttyUSB2", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "/dev/ttyUSB3", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "/dev/ttyACM0", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "/dev/rfcomm0", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "/dev/rfcomm1", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM1", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM2", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM3", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM4", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM5", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM6", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM7", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM8", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM9", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM10", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM11", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM12", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM13", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM14", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM15", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM16", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM17", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM18", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM19", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM20", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM21", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM22", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM23", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM24", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM25", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM26", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM27", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM28", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM29", Q_NULLPTR)
         << QApplication::translate("SerialOptionsDialog", "COM30", Q_NULLPTR)
        );
        label->setText(QApplication::translate("SerialOptionsDialog", "Speed", Q_NULLPTR));
        disconnectPushButton->setText(QApplication::translate("SerialOptionsDialog", "&Disconnect", Q_NULLPTR));
        label_3->setText(QApplication::translate("SerialOptionsDialog", "OK connects automatically!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SerialOptionsDialog: public Ui_SerialOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALOPTIONS_H
