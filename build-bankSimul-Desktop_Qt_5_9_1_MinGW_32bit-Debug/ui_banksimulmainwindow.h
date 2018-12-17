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
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bankSimulMainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QLabel *labelPinKoodi;
    QPushButton *pushButton_2_KirjauduSisaan;
    QLabel *labelLogoRahamaatti_8;
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
    QPushButton *pushButtonVaihdaValuutta;
    QWidget *page5;
    QLabel *labelLogoRahamaatti_4;
    QLabel *label_2LogoTilitapahtumat;
    QPushButton *pushButton_Peruuta_P5;
    QTableView *tableViewTilitapahtumat;
    QWidget *page6;
    QLabel *labelLogoRahamaatti_5;
    QLabel *label_2;
    QPushButton *pushButton_Peruuta_P5_2;
    QWidget *page4_1;
    QLabel *labelLogoRahamaatti_6;
    QLabel *label_NostitRahaa;
    QPushButton *pushButton_Peruuta_P4_1;
    QPushButton *pushButtonKirjauduUlos4_1;
    QLabel *labelLaskuriKirjauduUlos;
    QWidget *IdlePage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelLogoRahamaatti_7;
    QLabel *labelTervetuloa;
    QLabel *labelTextSyotaKortti;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bankSimulMainWindow)
    {
        if (bankSimulMainWindow->objectName().isEmpty())
            bankSimulMainWindow->setObjectName(QStringLiteral("bankSimulMainWindow"));
        bankSimulMainWindow->resize(800, 541);
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
        labelPinKoodi = new QLabel(page1);
        labelPinKoodi->setObjectName(QStringLiteral("labelPinKoodi"));
        labelPinKoodi->setGeometry(QRect(260, 120, 271, 31));
        QFont font;
        font.setPointSize(12);
        labelPinKoodi->setFont(font);
        labelPinKoodi->setAutoFillBackground(true);
        labelPinKoodi->setFrameShape(QFrame::Box);
        labelPinKoodi->setAlignment(Qt::AlignCenter);
        pushButton_2_KirjauduSisaan = new QPushButton(page1);
        pushButton_2_KirjauduSisaan->setObjectName(QStringLiteral("pushButton_2_KirjauduSisaan"));
        pushButton_2_KirjauduSisaan->setGeometry(QRect(560, 120, 111, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2_KirjauduSisaan->setFont(font1);
        labelLogoRahamaatti_8 = new QLabel(page1);
        labelLogoRahamaatti_8->setObjectName(QStringLiteral("labelLogoRahamaatti_8"));
        labelLogoRahamaatti_8->setGeometry(QRect(260, 10, 261, 41));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        labelLogoRahamaatti_8->setFont(font2);
        labelLogoRahamaatti_8->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        page2->setMinimumSize(QSize(800, 480));
        labelLogoRahamaatti = new QLabel(page2);
        labelLogoRahamaatti->setObjectName(QStringLiteral("labelLogoRahamaatti"));
        labelLogoRahamaatti->setGeometry(QRect(260, 10, 261, 41));
        labelLogoRahamaatti->setFont(font2);
        labelLogoRahamaatti->setAlignment(Qt::AlignCenter);
        pushButtonNostaRahaa = new QPushButton(page2);
        pushButtonNostaRahaa->setObjectName(QStringLiteral("pushButtonNostaRahaa"));
        pushButtonNostaRahaa->setGeometry(QRect(340, 100, 131, 23));
        pushButtonNaytaSaldo = new QPushButton(page2);
        pushButtonNaytaSaldo->setObjectName(QStringLiteral("pushButtonNaytaSaldo"));
        pushButtonNaytaSaldo->setGeometry(QRect(340, 160, 131, 23));
        pushButtonNaytaTilitapahtumat = new QPushButton(page2);
        pushButtonNaytaTilitapahtumat->setObjectName(QStringLiteral("pushButtonNaytaTilitapahtumat"));
        pushButtonNaytaTilitapahtumat->setGeometry(QRect(340, 220, 131, 23));
        pushButtonKirjauduUlos = new QPushButton(page2);
        pushButtonKirjauduUlos->setObjectName(QStringLiteral("pushButtonKirjauduUlos"));
        pushButtonKirjauduUlos->setGeometry(QRect(340, 340, 131, 23));
        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        page3->setMinimumSize(QSize(800, 480));
        labelLogoRahamaatti_2 = new QLabel(page3);
        labelLogoRahamaatti_2->setObjectName(QStringLiteral("labelLogoRahamaatti_2"));
        labelLogoRahamaatti_2->setGeometry(QRect(260, 10, 261, 41));
        labelLogoRahamaatti_2->setFont(font2);
        labelLogoRahamaatti_2->setAlignment(Qt::AlignCenter);
        labelLogoTilinSaldo = new QLabel(page3);
        labelLogoTilinSaldo->setObjectName(QStringLiteral("labelLogoTilinSaldo"));
        labelLogoTilinSaldo->setGeometry(QRect(330, 60, 131, 21));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        labelLogoTilinSaldo->setFont(font3);
        labelTilinSaldoTiedot = new QLabel(page3);
        labelTilinSaldoTiedot->setObjectName(QStringLiteral("labelTilinSaldoTiedot"));
        labelTilinSaldoTiedot->setGeometry(QRect(180, 110, 541, 91));
        QFont font4;
        font4.setPointSize(16);
        labelTilinSaldoTiedot->setFont(font4);
        pushButton_2_Peruuta = new QPushButton(page3);
        pushButton_2_Peruuta->setObjectName(QStringLiteral("pushButton_2_Peruuta"));
        pushButton_2_Peruuta->setGeometry(QRect(690, 400, 75, 23));
        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QStringLiteral("page4"));
        page4->setMinimumSize(QSize(800, 480));
        labelLogoRahamaatti_3 = new QLabel(page4);
        labelLogoRahamaatti_3->setObjectName(QStringLiteral("labelLogoRahamaatti_3"));
        labelLogoRahamaatti_3->setGeometry(QRect(260, 10, 261, 41));
        labelLogoRahamaatti_3->setFont(font2);
        labelLogoRahamaatti_3->setAlignment(Qt::AlignCenter);
        label = new QLabel(page4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 60, 311, 41));
        QFont font5;
        font5.setPointSize(20);
        label->setFont(font5);
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
        pushButtonVaihdaValuutta = new QPushButton(page4);
        pushButtonVaihdaValuutta->setObjectName(QStringLiteral("pushButtonVaihdaValuutta"));
        pushButtonVaihdaValuutta->setGeometry(QRect(520, 400, 91, 23));
        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QStringLiteral("page5"));
        page5->setMinimumSize(QSize(800, 480));
        labelLogoRahamaatti_4 = new QLabel(page5);
        labelLogoRahamaatti_4->setObjectName(QStringLiteral("labelLogoRahamaatti_4"));
        labelLogoRahamaatti_4->setGeometry(QRect(260, 10, 261, 41));
        labelLogoRahamaatti_4->setFont(font2);
        labelLogoRahamaatti_4->setAlignment(Qt::AlignCenter);
        label_2LogoTilitapahtumat = new QLabel(page5);
        label_2LogoTilitapahtumat->setObjectName(QStringLiteral("label_2LogoTilitapahtumat"));
        label_2LogoTilitapahtumat->setGeometry(QRect(280, 50, 211, 41));
        label_2LogoTilitapahtumat->setFont(font5);
        pushButton_Peruuta_P5 = new QPushButton(page5);
        pushButton_Peruuta_P5->setObjectName(QStringLiteral("pushButton_Peruuta_P5"));
        pushButton_Peruuta_P5->setGeometry(QRect(690, 400, 75, 23));
        tableViewTilitapahtumat = new QTableView(page5);
        tableViewTilitapahtumat->setObjectName(QStringLiteral("tableViewTilitapahtumat"));
        tableViewTilitapahtumat->setGeometry(QRect(80, 100, 581, 291));
        stackedWidget->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName(QStringLiteral("page6"));
        labelLogoRahamaatti_5 = new QLabel(page6);
        labelLogoRahamaatti_5->setObjectName(QStringLiteral("labelLogoRahamaatti_5"));
        labelLogoRahamaatti_5->setGeometry(QRect(260, 10, 261, 41));
        labelLogoRahamaatti_5->setFont(font2);
        labelLogoRahamaatti_5->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(page6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 60, 231, 31));
        QFont font6;
        font6.setPointSize(18);
        label_2->setFont(font6);
        pushButton_Peruuta_P5_2 = new QPushButton(page6);
        pushButton_Peruuta_P5_2->setObjectName(QStringLiteral("pushButton_Peruuta_P5_2"));
        pushButton_Peruuta_P5_2->setGeometry(QRect(690, 400, 75, 23));
        stackedWidget->addWidget(page6);
        page4_1 = new QWidget();
        page4_1->setObjectName(QStringLiteral("page4_1"));
        labelLogoRahamaatti_6 = new QLabel(page4_1);
        labelLogoRahamaatti_6->setObjectName(QStringLiteral("labelLogoRahamaatti_6"));
        labelLogoRahamaatti_6->setGeometry(QRect(260, 10, 261, 41));
        labelLogoRahamaatti_6->setFont(font2);
        labelLogoRahamaatti_6->setAlignment(Qt::AlignCenter);
        label_NostitRahaa = new QLabel(page4_1);
        label_NostitRahaa->setObjectName(QStringLiteral("label_NostitRahaa"));
        label_NostitRahaa->setGeometry(QRect(240, 160, 371, 51));
        QFont font7;
        font7.setPointSize(14);
        label_NostitRahaa->setFont(font7);
        pushButton_Peruuta_P4_1 = new QPushButton(page4_1);
        pushButton_Peruuta_P4_1->setObjectName(QStringLiteral("pushButton_Peruuta_P4_1"));
        pushButton_Peruuta_P4_1->setGeometry(QRect(690, 400, 75, 23));
        pushButtonKirjauduUlos4_1 = new QPushButton(page4_1);
        pushButtonKirjauduUlos4_1->setObjectName(QStringLiteral("pushButtonKirjauduUlos4_1"));
        pushButtonKirjauduUlos4_1->setGeometry(QRect(374, 400, 101, 23));
        labelLaskuriKirjauduUlos = new QLabel(page4_1);
        labelLaskuriKirjauduUlos->setObjectName(QStringLiteral("labelLaskuriKirjauduUlos"));
        labelLaskuriKirjauduUlos->setGeometry(QRect(320, 250, 221, 71));
        labelLaskuriKirjauduUlos->setFont(font5);
        stackedWidget->addWidget(page4_1);
        IdlePage = new QWidget();
        IdlePage->setObjectName(QStringLiteral("IdlePage"));
        verticalLayoutWidget = new QWidget(IdlePage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 10, 531, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelLogoRahamaatti_7 = new QLabel(verticalLayoutWidget);
        labelLogoRahamaatti_7->setObjectName(QStringLiteral("labelLogoRahamaatti_7"));
        labelLogoRahamaatti_7->setFont(font2);
        labelLogoRahamaatti_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelLogoRahamaatti_7);

        labelTervetuloa = new QLabel(verticalLayoutWidget);
        labelTervetuloa->setObjectName(QStringLiteral("labelTervetuloa"));
        labelTervetuloa->setFont(font2);
        labelTervetuloa->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTervetuloa);

        labelTextSyotaKortti = new QLabel(verticalLayoutWidget);
        labelTextSyotaKortti->setObjectName(QStringLiteral("labelTextSyotaKortti"));
        labelTextSyotaKortti->setFont(font2);
        labelTextSyotaKortti->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTextSyotaKortti);

        pushButton = new QPushButton(IdlePage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 170, 111, 23));
        stackedWidget->addWidget(IdlePage);
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

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(bankSimulMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *bankSimulMainWindow)
    {
        bankSimulMainWindow->setWindowTitle(QApplication::translate("bankSimulMainWindow", "bankSimulMainWindow", Q_NULLPTR));
        labelPinKoodi->setText(QApplication::translate("bankSimulMainWindow", "Sy\303\266t\303\244 PIN-Koodisi", Q_NULLPTR));
        pushButton_2_KirjauduSisaan->setText(QApplication::translate("bankSimulMainWindow", "Kirjaudu sis\303\244\303\244n", Q_NULLPTR));
        labelLogoRahamaatti_8->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
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
        pushButtonVaihdaValuutta->setText(QApplication::translate("bankSimulMainWindow", "Vaihda valuutta", Q_NULLPTR));
        labelLogoRahamaatti_4->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
        label_2LogoTilitapahtumat->setText(QApplication::translate("bankSimulMainWindow", "Tilitapahtumat", Q_NULLPTR));
        pushButton_Peruuta_P5->setText(QApplication::translate("bankSimulMainWindow", "Peruuta", Q_NULLPTR));
        labelLogoRahamaatti_5->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
        label_2->setText(QApplication::translate("bankSimulMainWindow", "Vaihda valuuttaa", Q_NULLPTR));
        pushButton_Peruuta_P5_2->setText(QApplication::translate("bankSimulMainWindow", "Peruuta", Q_NULLPTR));
        labelLogoRahamaatti_6->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
        label_NostitRahaa->setText(QString());
        pushButton_Peruuta_P4_1->setText(QApplication::translate("bankSimulMainWindow", "Paluu", Q_NULLPTR));
        pushButtonKirjauduUlos4_1->setText(QApplication::translate("bankSimulMainWindow", "Kirjaudu Ulos", Q_NULLPTR));
        labelLaskuriKirjauduUlos->setText(QString());
        labelLogoRahamaatti_7->setText(QApplication::translate("bankSimulMainWindow", "RAHAMAATTI", Q_NULLPTR));
        labelTervetuloa->setText(QApplication::translate("bankSimulMainWindow", "TERVETULOA", Q_NULLPTR));
        labelTextSyotaKortti->setText(QApplication::translate("bankSimulMainWindow", "SY\303\226T\303\204 PANKKIKORTTI", Q_NULLPTR));
        pushButton->setText(QApplication::translate("bankSimulMainWindow", "Ohi Kirjautumisen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bankSimulMainWindow: public Ui_bankSimulMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKSIMULMAINWINDOW_H
