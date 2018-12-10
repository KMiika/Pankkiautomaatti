#include "banksimulmainwindow.h"
#include "ui_banksimulmainwindow.h"
#include "headers/dbconnect.h"
#include "headers/banklibrary.h"


bankSimulMainWindow::bankSimulMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bankSimulMainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    dbYhteys = new DBConnect("abcde12345", 1234);
}

bankSimulMainWindow::~bankSimulMainWindow()
{
    delete ui;
    delete dbYhteys;
}

void bankSimulMainWindow::on_pushButton_2_KirjauduSisaan_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    dbYhteys->yhdistaTietokantaan();
}

void bankSimulMainWindow::on_pushButtonNostaRahaa_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void bankSimulMainWindow::on_pushButtonNaytaSaldo_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    dbYhteys->haeSaldo();
    //qDebug() << dbYhteys->getSaldo();
    ui->labelTilinSaldoTiedot->setText("Tilin saldo on tällä hetkellä: " + QString::number(dbYhteys->getSaldo()));
}

void bankSimulMainWindow::on_pushButtonKirjauduUlos_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void bankSimulMainWindow::on_pushButton_2_Peruuta_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void bankSimulMainWindow::on_pushButton_Peruuta_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void bankSimulMainWindow::on_pushButton_Peruuta_P5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void bankSimulMainWindow::on_pushButtonNaytaTilitapahtumat_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void bankSimulMainWindow::on_pushButtonVaihdaValuutta_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void bankSimulMainWindow::on_pushButton_Peruuta_P5_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void bankSimulMainWindow::on_pushButton_20e_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    //BankLibrary.nostoSummanValinta(20);

    dbYhteys->veloitaSumma(20);
    dbYhteys->haeSaldo();
    ui->label_NostitRahaa->setText("Tilillesi jäi euroina "+ QString::number(dbYhteys->getSaldo()));
   // ui->label_NostitRahaa->setText("Nostit tililtäsi ." +QString::number(dbYhteys->veloitaSumma(20)));

}

void bankSimulMainWindow::on_pushButton_2_40e_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    dbYhteys->veloitaSumma(40);
    dbYhteys->haeSaldo();
    ui->label_NostitRahaa->setText("Tilillesi jäi euroina "+ QString::number(dbYhteys->getSaldo()));
}

void bankSimulMainWindow::on_pushButton_4_60e_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    dbYhteys->veloitaSumma(60);
    dbYhteys->haeSaldo();
    ui->label_NostitRahaa->setText("Tilillesi jäi euroina "+ QString::number(dbYhteys->getSaldo()));
}

void bankSimulMainWindow::on_pushButton_5_80e_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    dbYhteys->veloitaSumma(80);
    dbYhteys->haeSaldo();
    ui->label_NostitRahaa->setText("Tilillesi jäi euroina "+ QString::number(dbYhteys->getSaldo()));
}

void bankSimulMainWindow::on_pushButton_6_100e_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    dbYhteys->veloitaSumma(100);
    dbYhteys->haeSaldo();
    ui->label_NostitRahaa->setText("Tilillesi jäi euroina "+ QString::number(dbYhteys->getSaldo()));
}

void bankSimulMainWindow::on_pushButton_7_MuuSumma_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    dbYhteys->haeSaldo();
    ui->label_NostitRahaa->setText("Tilillesi jäi euroina "+ QString::number(dbYhteys->getSaldo()));
}
