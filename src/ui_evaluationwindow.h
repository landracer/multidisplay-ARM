/********************************************************************************
** Form generated from reading UI file 'evaluationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVALUATIONWINDOW_H
#define UI_EVALUATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EvaluationMainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *PlotFrame;
    QFrame *ButtonFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *OkButton;

    void setupUi(QWidget *EvaluationMainWindow)
    {
        if (EvaluationMainWindow->objectName().isEmpty())
            EvaluationMainWindow->setObjectName(QStringLiteral("EvaluationMainWindow"));
        EvaluationMainWindow->resize(466, 392);
        verticalLayout = new QVBoxLayout(EvaluationMainWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PlotFrame = new QFrame(EvaluationMainWindow);
        PlotFrame->setObjectName(QStringLiteral("PlotFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(PlotFrame->sizePolicy().hasHeightForWidth());
        PlotFrame->setSizePolicy(sizePolicy);
        PlotFrame->setFrameShape(QFrame::StyledPanel);
        PlotFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(PlotFrame);

        ButtonFrame = new QFrame(EvaluationMainWindow);
        ButtonFrame->setObjectName(QStringLiteral("ButtonFrame"));
        ButtonFrame->setMinimumSize(QSize(0, 0));
        ButtonFrame->setFrameShape(QFrame::StyledPanel);
        ButtonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(ButtonFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        OkButton = new QPushButton(ButtonFrame);
        OkButton->setObjectName(QStringLiteral("OkButton"));
        OkButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(OkButton);


        verticalLayout->addWidget(ButtonFrame);


        retranslateUi(EvaluationMainWindow);

        QMetaObject::connectSlotsByName(EvaluationMainWindow);
    } // setupUi

    void retranslateUi(QWidget *EvaluationMainWindow)
    {
        EvaluationMainWindow->setWindowTitle(QApplication::translate("EvaluationMainWindow", "EvaluationWindow", Q_NULLPTR));
        OkButton->setText(QApplication::translate("EvaluationMainWindow", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EvaluationMainWindow: public Ui_EvaluationMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALUATIONWINDOW_H
