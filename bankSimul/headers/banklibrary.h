#ifndef BANKLIBRARY_H
#define BANKLIBRARY_H

#include "headers/banklibrary_global.h"
#include <QDebug>
#include <QString>

class BANKLIBRARYSHARED_EXPORT BankLibrary
{

public:
    BankLibrary();
    void saldoPainettu();
    void katteenTarkistus();
    void nostoSummanValinta(QString value);
    int getVeloitaSumma();

private:
    int veloitaSumma;
};

#endif // BANKLIBRARY_H
