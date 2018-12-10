#ifndef BANKSIMULMAINWINDOW_H
#define BANKSIMULMAINWINDOW_H

#include <QMainWindow>
#include "headers/dbconnect.h"
#include "headers/dbconnect_global.h"

namespace Ui {
class bankSimulMainWindow;
}

class bankSimulMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit bankSimulMainWindow(QWidget *parent = 0);
    ~bankSimulMainWindow();

private:
    Ui::bankSimulMainWindow *ui;
    DBConnect *dbYhteys;

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
};

#endif // BANKSIMULMAINWINDOW_H
