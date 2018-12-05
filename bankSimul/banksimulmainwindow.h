#ifndef BANKSIMULMAINWINDOW_H
#define BANKSIMULMAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_pushButton_2_KirjauduSisaan_clicked();
    void on_pushButtonNostaRahaa_clicked();
    void on_pushButtonNaytaSaldo_clicked();
    void on_pushButtonKirjauduUlos_clicked();
    void on_pushButton_2_Peruuta_clicked();
    void on_pushButton_Peruuta_clicked();
    void on_pushButton_Peruuta_P5_clicked();
    void on_pushButtonNaytaTilitapahtumat_clicked();
};

#endif // BANKSIMULMAINWINDOW_H
