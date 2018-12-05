#include "banksimulmainwindow.h"
#include <QApplication>
#include "headers/banklibrary.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bankSimulMainWindow w;
    w.show();

    BankLibrary bLib;
    bLib.saldoPainettu();

    return a.exec();
}
