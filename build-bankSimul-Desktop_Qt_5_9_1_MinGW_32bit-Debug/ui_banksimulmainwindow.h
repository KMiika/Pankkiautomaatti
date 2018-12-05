/********************************************************************************
** Form generated from reading UI file 'banksimulmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKSIMULMAINWINDOW_H
#define UI_BANKSIMULMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bankSimulMainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QLabel *labelTextSyotaKortti;
    QLabel *labelTervetuloa;
    QLabel *labelPinKoodi;
    QPushButton *pushButton_2_KirjauduSisaan;
    QWidget *page2;
    QLabel *labelLogoRahamaatti;
    QPushButton *pushButtonNostaRahaa;
    QPushButton *pushButtonNaytaSaldo;
    QPushButton *pushButtonNaytaTilitapahtumat;
    QPushButton *pushButtonKirjauduUlos;
    QWidget *page3;
    QLabel *labelLogoRahamaatti_2;
    QLabel *labelLogoTilinSaldo;
    QLabel *labelTilinSaldoTiedot;
    QPushButton *pushButton_2_Peruuta;
    QWidget *page4;
    QLabel *labelLogoRahamaatti_3;
    QLabel *label;
    QPushButton *pushButton_20e;
    QPushButton *pushButton_2_40e;
    QPushButton *pushButton_4_60e;
    QPushButton *pushButton_5_80e;
    QPushButton *pushButton_6_100e;
    QPushButton *pushButton_7_MuuSumma;
    QPushButton *pushButton_Peruuta;
    QWidget *page5;
    QLabel *labelLogoRahamaatti_4;
    QLabel *label_2LogoTilitapahtumat;
    QLabel *label_3_Tilitapahtumat;
    QPushButton *pushButton_Peruuta_P5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bankSimulMainWindow)
    {
        if (bankSimulMainWindow->objectName().isEmpty())
            bankSimulMainWindow->setObjectName(QStringLiteral("bankSimulMainWindow"));
        bankSimulMainWindow->resize(800, 531);
        centralWidget = new QWidget(bankSimulMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(800, 480));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 480));
        stackedWidget->setMinimumSize(QSize(800, 480));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        page1->setMinimumSize(QSize(800, 480));
        labelTextSyotaKortti = new QLabel(page1);
        labelTextSyotaKortti->setObjectName(QStringLiteral("labelTextSyotaKortti"));
        labelTextSyotaKortti->setGeometry(QRect(250, 80, 341, 91));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        labelTextSyotaKortti->setFont(font);
        labelTextSyotaKortti->setAlignment(Qt::AlignCenter);
        labelTervetuloa = new QLabel(page1);
        labelTervetuloa->setObjectName(QStringLiteral("labelTervetuloa"));
        labelTervetuloa->setGeometry(QRect(320, 0, 211, 61));
        labelTervetuloa->setFont(font);
        labelTervetuloa->setAlignment(Qt::AlignCenter);
        labelPinKoodi = new QLabel(page1);
        labelPinKoodi->setObjectName(QStringLiteral("labelPinKoodi"));
        labelPinKoodi->setGeometry(QRect(260, 230, 181, 31));
        QFont font1;
        font1.setPointSize(12);
        labelPinKoodi->setFont(font1);
        labelPinKoodi->setAutoFillBackground(true);
        labelPinKoodi->setFrameShape(QFrame::Box);
        labelPinKoodi->setAlignment(Qt::AlignCenter);
        pushButton_2_KirjauduSisaan = new QPushButton(page1);
        pushButton_2_KirjauduSisaan->setObjectName(QStringLiteral("pushButton_2_KirjauduSisaan"));
        pushButton_2_KirjauduSisaan->setGeometry(QRect(450, 230, 111, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2_KirjauduSisaan->setFont(font2);
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        page2->setMinimumSize(QSize(800, 480));
        labelLogoRahamaatti = new QLabel(page2);
        labelLogoRahamaatti->setObjectName(QStringLiteral("labelLogoRahamaatti"));
        labelLogoRahamaatti->setGeometry(QRect(320, 10, 201, 41));
        labelLogoRahamaatti->setFont(font);
        labelLogoRahamaatti->setAlignment(Qt::AlignCenter);
        pushButtonNostaRahaa = new QPushButton(page2);
        pushButtonNostaRahaa->setObjectName(QStringLiteral("pushButtonNostaRahaa"));
        pushButtonNostaRahaa->setGeometry(QRect(360, 100, 111, 23));
        pushButtonNaytaSaldo = new QPushButton(page2);
        pushButtonNaytaSaldo->setObjectName(QStringLiteral("pushButtonNaytaSaldo"));
        pushButtonNaytaSaldo->setGeometry(QRect(360, 160, 111, 23));
        pushButtonNaytaTilitapahtumat = new QPushButton(page2);
        pushButtonNaytaTilitapahtumat->setObjectName(QStringLiteral("pushButtonNaytaTilitapahtumat"));
        pushButtonNaytaTilitapahtumat->setGeometry(QRect(360, 220, 111, 23));
        pushButtonKirjauduUlos = new QPushButton(page2);
        pushButtonKirjauduUlos->setObjectName(QStringLiteral("pushButtonKirjauduUlos"));
        pushButtonKirjauduUlos->setGeometry(QRect(360, 340, 111, 23));
        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        page3->setMinimumSize(QSize(800, 480));
        labelLogoRahamaatti_2 = new QLabel(page3);
        labelLogoRahamaatti_2->setObjectName(QStringLiteral("labelLogoRahamaatti_2"));
        labelLogoRahamaatti_2->setGeometry(QRect(320, 10, 201, 41));
        labelLogoRahamaatti_2->setFont(font);
        labelLogoRahamaatti_2->setAlignment(Qt::AlignCenter);
        labelLogoTilinSaldo = new QLabel(page3);
        labelLogoTilinSaldo->setObjectName(QStringLiteral("labelLogoTilinSaldo"));
        labelLogoTilinSaldo->setGeometry(QRect(360, 70, 131, 21));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        labelLogoTilinSaldo->setFont(font3);
        labelTilinSaldoTiedot = new QLabel(page3);
        labelTilinSaldoTiedot->setObjectName(QStringLiteral("labelTilinSaldoTiedot"));
        labelTilinSaldoTiedot->setGeometry(QRect(230, 120, 361, 231));
        pushButton_2_Peruuta = new QPushButton(page3);
        pushButton_2_Peruuta->setObjectName(QStringLiteral("pushButton_2_Peruuta"));
        pushButton_2_Peruuta->setGeometry(QRect(690, 400, 75, 23));
        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QStringLiteral("page4"));
        page4->setMinimumSize(QSize(800, 480));
        labelLogoRahamaatti_3 = new QLabel(page4);
        labelLogoRahamaatti_3->setObjectName(QStringLiteral("labelLogoRahamaatti_3"));
        labelLogoRahamaatti_3->setGeometry(QRect(320, 10, 201, 41));
        labelLogoRahamaatti_3->setFont(font);
        labelLogoRahamaatti_3->setAlignment(Qt::AlignCenter);
        label = new QLabel(page4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 60, 311, 41));
        QFont font4;
        font4.setPointSize(20);
        label->setFont(font4);
        pushButton_20e = new QPushButton(page4);
        pushButton_20e->setObjectName(QStringLiteral("pushButton_20e"));
        pushButton_20e->setGeometry(QRect(230, 130, 75, 23));
        pushButton_2_40e = new QPushButton(page4);
        pushButton_2_40e->setObjectName(QStringLiteral("pushButton_2_40e"));
        pushButton_2_40e->setGeometry(QRect(230, 210, 75, 23));
        pushButton_4_60e = new QPushButton(page4);
        pushButton_4_60e->setObjectName(QStringLiteral("pushButton_4_60e"));
        pushButton_4_60e->setGeometry(QRect(230, 290, 75, 23));
        pushButton_5_80e = new QPushButton(page4);
        pushButton_5_80e->setObjectName(QStringLiteral("pushButton_5_80e"));
        pushButton_5_80e->setGeometry(QRect(520, 130, 75, 23));
        pushButton_6_100e = new QPushButton(page4);
        pushButton_6_100e->setObjectName(QStringLiteral("pushButton_6_100e"));
        pushButton_6_100e->setGeometry(QRect(520, 210, 75, 23));
        pushButton_7_MuuSumma = new QPushButton(page4);
        pushButton_7_MuuSumma->setObjectName(QStringLiteral("pushButton_7_MuuSumma"));
        pushButton_7_MuuSumma->setGeometry(QRect(520, 290, 75, 23));
        pushButton_Peruuta = new QPushButton(page4);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        pushButton_Peruuta->setGeometry(QRect(690, 400, 75, 23));
        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QStringLiteral("page5"));
        page5->setMinimumSize(QSize(800, 480));
        labelLogoRahamaatti_4 = new QLabel(page5);
        labelLogoRahamaatti_4->setObjectName(QStringLiteral("labelLogoRahamaatti_4"));
        labelLogoRahamaatti_4->setGeometry(QRect(320, 10, 201, 41));
        labelLogoRahamaatti_4->setFont(font);
        labelLogoRahamaatti_4->setAlignment(Qt::AlignCenter);
        label_2LogoTilitapahtumat = new QLabel(page5);
        label_2LogoTilitapahtumat->setObjectName(QStringLiteral("label_2LogoTilitapahtumat"));
        label_2LogoTilitapahtumat->setGeometry(QRect(330, 60, 181, 31));
        label_2LogoTilitapahtumat->setFont(font4);
        label_3_Tilitapahtumat = new QLabel(page5);
        label_3_Tilitapahtumat->setObjectName(QStringLiteral("label_3_Tilitapahtumat"));
        label_3_Tilitapahtumat->setGeometry(QRect(260, 110, 341, 301));
        pushButton_Peruuta_P5 = new QPushButton(page5);
        pushButton_Peruuta_P5->setObjectName(QStringLiteral("pushButton_Peruuta_P5"));
        pushButton_Peruuta_P5->setGeometry(QRect(690, 400, 75, 23));
        stackedWidget->addWidget(page5);
        bankSimulMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(bankSimulMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        bankSimulMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(bankSimulMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        bankSimulMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(bankSimulMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        bankSimulMainWindow->setStatusBar(statusBar);

        retranslateUi(bankSimulMainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(bankSimulMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *bankSimulMainWindow)
    {
        bankSimulMainWindow->setWindowTitle(QApplication::translate("bankSimulMainWindow", "bankSimulMainWindow", Q_NULLPTR));
        labelTextSyotaKortti->setText(QApplication::translate("bankSimulMainWindow", "SY\303\226T\303\204 PANKKIKORTTI", Q_NULLPTR));
        labelTervetuloa->setText(QApplication::translate("bankSimulMainWindow", "TERVETULOA", Q_NULLPTR));
        labelPinKoodi->setText(QApplication::translate("bankSimulMainWindow", "Sy\303\266t\303\244 t\303\244h\303\244n PIN-Koodisi", Q_NULLPTR));
        pushButton_2_KirjauduSisaan->setText(QApplication::translate("bankSimulMainWindow", "Kirjaudu sis\303\244\303\244n", Q_NULLPTR));
        labelLogoRahamaatti->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
        pushButtonNostaRahaa->setText(QApplication::translate("bankSimulMainWindow", "Nosta Rahaa", Q_NULLPTR));
        pushButtonNaytaSaldo->setText(QApplication::translate("bankSimulMainWindow", "N\303\244yt\303\244 Saldo", Q_NULLPTR));
        pushButtonNaytaTilitapahtumat->setText(QApplication::translate("bankSimulMainWindow", "N\303\244yt\303\244 Tilitapahtumat", Q_NULLPTR));
        pushButtonKirjauduUlos->setText(QApplication::translate("bankSimulMainWindow", "Kirjaudu Ulos", Q_NULLPTR));
        labelLogoRahamaatti_2->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
        labelLogoTilinSaldo->setText(QApplication::translate("bankSimulMainWindow", "Tilisi Saldo", Q_NULLPTR));
        labelTilinSaldoTiedot->setText(QString());
        pushButton_2_Peruuta->setText(QApplication::translate("bankSimulMainWindow", "Peruuta", Q_NULLPTR));
        labelLogoRahamaatti_3->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
        label->setText(QApplication::translate("bankSimulMainWindow", "Valitse nostettava summa", Q_NULLPTR));
        pushButton_20e->setText(QApplication::translate("bankSimulMainWindow", "20\342\202\254", Q_NULLPTR));
        pushButton_2_40e->setText(QApplication::translate("bankSimulMainWindow", "40\342\202\254", Q_NULLPTR));
        pushButton_4_60e->setText(QApplication::translate("bankSimulMainWindow", "60\342\202\254", Q_NULLPTR));
        pushButton_5_80e->setText(QApplication::translate("bankSimulMainWindow", "80\342\202\254", Q_NULLPTR));
        pushButton_6_100e->setText(QApplication::translate("bankSimulMainWindow", "100\342\202\254", Q_NULLPTR));
        pushButton_7_MuuSumma->setText(QApplication::translate("bankSimulMainWindow", "Muu summa", Q_NULLPTR));
        pushButton_Peruuta->setText(QApplication::translate("bankSimulMainWindow", "Peruuta", Q_NULLPTR));
        labelLogoRahamaatti_4->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
        label_2LogoTilitapahtumat->setText(QApplication::translate("bankSimulMainWindow", "Tilitapahtumat", Q_NULLPTR));
        label_3_Tilitapahtumat->setText(QString());
        pushButton_Peruuta_P5->setText(QApplication::translate("bankSimulMainWindow", "Peruuta", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bankSimulMainWindow: public Ui_bankSimulMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKSIMULMAINWINDOW_H
