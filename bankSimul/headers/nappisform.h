#ifndef NAPPISFORM_H
#define NAPPISFORM_H

#include <QWidget>

namespace Ui {
class NappisForm;
}

class NappisForm : public QWidget
{
    Q_OBJECT

public:
    explicit NappisForm(QWidget *parent = 0);
    ~NappisForm();

private:
    Ui::NappisForm *ui;
    int muisti = 0000;
    int paikka = 1;
    QString palautaTahti();

private slots:
    void on_numButton1_clicked();
    void on_numButton2_clicked();
    void on_numButton3_clicked();
    void on_numButton4_clicked();
    void on_numButton5_clicked();
    void on_numButton6_clicked();
    void on_numButton7_clicked();
    void on_numButton8_clicked();
    void on_numButton9_clicked();
    void on_numButton0_clicked();
    void on_numButtonC_clicked();
    void on_numButtonOk_clicked();

signals:
    void nappisOkPainettu();
};

#endif // NAPPISFORM_H
