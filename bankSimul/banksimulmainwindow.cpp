#include "banksimulmainwindow.h"
#include "ui_banksimulmainwindow.h"

bankSimulMainWindow::bankSimulMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bankSimulMainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

bankSimulMainWindow::~bankSimulMainWindow()
{
    delete ui;
}

void bankSimulMainWindow::on_pushButton_2_KirjauduSisaan_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void bankSimulMainWindow::on_pushButtonNostaRahaa_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void bankSimulMainWindow::on_pushButtonNaytaSaldo_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
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
