#ifndef BANKLIBRARY_H
#define BANKLIBRARY_H

#include "banklibrary_global.h"
#include <QDebug>

class BANKLIBRARYSHARED_EXPORT BankLibrary
{

public:
    BankLibrary();
    void saldoPainettu();
    void katteenTarkistus();
    void nostoSummanValinta(int value);

    int veloitaSumma;
    int value;
};

#endif // BANKLIBRARY_H
