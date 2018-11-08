/********************************************************************************
** Form generated from reading UI file 'WotEventsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOTEVENTSDIALOG_H
#define UI_WOTEVENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_WotEventsDialog
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *jumpButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WotEventsDialog)
    {
        if (WotEventsDialog->objectName().isEmpty())
            WotEventsDialog->setObjectName(QStringLiteral("WotEventsDialog"));
        WotEventsDialog->resize(542, 605);
        gridLayout = new QGridLayout(WotEventsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(WotEventsDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        frame = new QFrame(WotEventsDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        jumpButton = new QPushButton(frame);
        jumpButton->setObjectName(QStringLiteral("jumpButton"));

        horizontalLayout->addWidget(jumpButton);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addWidget(frame, 1, 0, 1, 1);


        retranslateUi(WotEventsDialog);

        QMetaObject::connectSlotsByName(WotEventsDialog);
    } // setupUi

    void retranslateUi(QDialog *WotEventsDialog)
    {
        WotEventsDialog->setWindowTitle(QApplication::translate("WotEventsDialog", "Dialog", Q_NULLPTR));
        jumpButton->setText(QApplication::translate("WotEventsDialog", "jump to", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WotEventsDialog: public Ui_WotEventsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOTEVENTSDIALOG_H
