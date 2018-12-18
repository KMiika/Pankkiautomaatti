#ifndef BANKSIMULMAINWINDOW_H
#define BANKSIMULMAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include "headers/dbconnect.h"
#include "headers/banklibrary.h"
#include "headers/nappis.h"
#include "headers/rfiddll.h"
#include "headers/ui_nappisform.h"
#include <qtimer.h>


namespace Ui {
class bankSimulMainWindow;
}

class bankSimulMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit bankSimulMainWindow(QWidget *parent = 0);
    ~bankSimulMainWindow();
    // void alustaTimer();


private:
    Ui::bankSimulMainWindow *ui;
    DBConnect *dbYhteys;
    BankLibrary *nostonValinta;
    NappisForm *Nappaimisto;
    Ui_NappisForm *NM;
    RfidDLL *RFID;

    unsigned int aikaaJaljella = 20;
    QTimer * timer;


public slots:
    void Timer();
    void paivitaAika();

private slots:
    void on_pushButton_2_KirjauduSisaan_clicked();
    void on_pushButtonNostaRahaa_clicked();
    void on_pushButtonNaytaSaldo_clicked();
    void on_pushButtonKirjauduUlos_clicked();
    void on_pushButton_2_Peruuta_clicked();
    void on_pushButton_Peruuta_clicked();
    void on_pushButton_Peruuta_P5_clicked();
    void on_pushButtonNaytaTilitapahtumat_clicked();
    void on_pushButtonVaihdaValuutta_clicked();
    void on_pushButton_Peruuta_P5_2_clicked();
    void on_pushButton_20e_clicked();
    void on_pushButton_2_40e_clicked();
    void on_pushButton_4_60e_clicked();
    void on_pushButton_5_80e_clicked();
    void on_pushButton_6_100e_clicked();
    void on_pushButton_7_MuuSumma_clicked();
    void on_pushButton_Peruuta_P4_1_clicked();

    void on_pushButtonKirjauduUlos4_1_clicked();

    void on_pushButton_clicked();
    void tarkastaTilinKate();
    void testiSlot();
    void testiNappisPin();



signals:
    void kirjauduUlos();
};

#endif // BANKSIMULMAINWINDOW_H
