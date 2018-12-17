/********************************************************************************
** Form generated from reading UI file 'nappisform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAPPISFORM_H
#define UI_NAPPISFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NappisForm
{
public:
    QLabel *labelTesti;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *numButton8;
    QPushButton *numButton1;
    QPushButton *numButtonOk;
    QPushButton *numButton3;
    QPushButton *numButton2;
    QPushButton *numButton4;
    QPushButton *numButton9;
    QPushButton *numButton0;
    QPushButton *numButton6;
    QPushButton *numButton7;
    QPushButton *numButtonC;
    QPushButton *numButton5;

    void setupUi(QWidget *NappisForm)
    {
        if (NappisForm->objectName().isEmpty())
            NappisForm->setObjectName(QStringLiteral("NappisForm"));
        NappisForm->resize(374, 369);
        labelTesti = new QLabel(NappisForm);
        labelTesti->setObjectName(QStringLiteral("labelTesti"));
        labelTesti->setGeometry(QRect(130, 0, 51, 16));
        label = new QLabel(NappisForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 320, 47, 13));
        widget = new QWidget(NappisForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 90, 271, 201));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        numButton8 = new QPushButton(widget);
        numButton8->setObjectName(QStringLiteral("numButton8"));

        gridLayout->addWidget(numButton8, 3, 1, 1, 1);

        numButton1 = new QPushButton(widget);
        numButton1->setObjectName(QStringLiteral("numButton1"));

        gridLayout->addWidget(numButton1, 1, 0, 1, 1);

        numButtonOk = new QPushButton(widget);
        numButtonOk->setObjectName(QStringLiteral("numButtonOk"));

        gridLayout->addWidget(numButtonOk, 4, 2, 1, 1);

        numButton3 = new QPushButton(widget);
        numButton3->setObjectName(QStringLiteral("numButton3"));

        gridLayout->addWidget(numButton3, 1, 2, 1, 1);

        numButton2 = new QPushButton(widget);
        numButton2->setObjectName(QStringLiteral("numButton2"));

        gridLayout->addWidget(numButton2, 1, 1, 1, 1);

        numButton4 = new QPushButton(widget);
        numButton4->setObjectName(QStringLiteral("numButton4"));

        gridLayout->addWidget(numButton4, 2, 0, 1, 1);

        numButton9 = new QPushButton(widget);
        numButton9->setObjectName(QStringLiteral("numButton9"));

        gridLayout->addWidget(numButton9, 3, 2, 1, 1);

        numButton0 = new QPushButton(widget);
        numButton0->setObjectName(QStringLiteral("numButton0"));

        gridLayout->addWidget(numButton0, 4, 1, 1, 1);

        numButton6 = new QPushButton(widget);
        numButton6->setObjectName(QStringLiteral("numButton6"));

        gridLayout->addWidget(numButton6, 2, 2, 1, 1);

        numButton7 = new QPushButton(widget);
        numButton7->setObjectName(QStringLiteral("numButton7"));

        gridLayout->addWidget(numButton7, 3, 0, 1, 1);

        numButtonC = new QPushButton(widget);
        numButtonC->setObjectName(QStringLiteral("numButtonC"));

        gridLayout->addWidget(numButtonC, 4, 0, 1, 1);

        numButton5 = new QPushButton(widget);
        numButton5->setObjectName(QStringLiteral("numButton5"));

        gridLayout->addWidget(numButton5, 2, 1, 1, 1);


        retranslateUi(NappisForm);

        QMetaObject::connectSlotsByName(NappisForm);
    } // setupUi

    void retranslateUi(QWidget *NappisForm)
    {
        NappisForm->setWindowTitle(QApplication::translate("NappisForm", "Form", Q_NULLPTR));
        labelTesti->setText(QApplication::translate("NappisForm", "TESTI", Q_NULLPTR));
        label->setText(QApplication::translate("NappisForm", "Keijo", Q_NULLPTR));
        numButton8->setText(QApplication::translate("NappisForm", "8", Q_NULLPTR));
        numButton1->setText(QApplication::translate("NappisForm", "1", Q_NULLPTR));
        numButtonOk->setText(QApplication::translate("NappisForm", "Ok", Q_NULLPTR));
        numButton3->setText(QApplication::translate("NappisForm", "3", Q_NULLPTR));
        numButton2->setText(QApplication::translate("NappisForm", "2", Q_NULLPTR));
        numButton4->setText(QApplication::translate("NappisForm", "4", Q_NULLPTR));
        numButton9->setText(QApplication::translate("NappisForm", "9", Q_NULLPTR));
        numButton0->setText(QApplication::translate("NappisForm", "0", Q_NULLPTR));
        numButton6->setText(QApplication::translate("NappisForm", "6", Q_NULLPTR));
        numButton7->setText(QApplication::translate("NappisForm", "7", Q_NULLPTR));
        numButtonC->setText(QApplication::translate("NappisForm", "Cancel", Q_NULLPTR));
        numButton5->setText(QApplication::translate("NappisForm", "5", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NappisForm: public Ui_NappisForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAPPISFORM_H
