#include "banksimulmainwindow.h"
#include <QApplication>
#include <QtCore>
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

    //Timer
   // bankSimulMainWindow mtimer;
   // QObject::connect(&mtimer, SIGNAL(kirjauduUlos()),bankSimulMainWindow.activateWindow(), SLOT(mySlot()));
     //timer.show();


    return a.exec();
}
