#include "banksimulmainwindow.h"
#include <QApplication>
#include "headers/banklibrary.h"
#include "headers/dbconnect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bankSimulMainWindow w;
    w.show();

    BankLibrary bLib;
    bLib.saldoPainettu();
   // bLib.katteenTarkistus();

    return a.exec();
}
