#-------------------------------------------------
#
# Project created by QtCreator 2018-12-03T09:32:01
#
#-------------------------------------------------

QT       += core gui sql serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bankSimul
TEMPLATE = app
#LIBS += "./dll/DBConnect.dll"
#LIBS += "./dll/Nappis.dll"
#LIBS += "./dll/rfidDLL.dll"
#LIBS += "./dll/BankLibrary.dll"

# Tämän sielunelämästä ei ikinä tiedä. Mikäli valittaa dll patheista buildissa. Siirrä kommentit ylempiin libs kohtiin ja buildaa kerran suoralla pathilla ja sen jälkeen väännä
# takaisin relatiiviseen viitaukseen niin toimii!

LIBS += "C:/Users/Juho/Desktop/TVT18KMO/OAMK/Vuosi 1/Syksy 18/Jakso 2/Ohjelmistokehityksen sovellusprojekti/Koodit/Sovellusprojekti/Pankkiautomaatti/bankSimul/dll/BankLibrary.dll"
LIBS += "C:/Users/Juho/Desktop/TVT18KMO/OAMK/Vuosi 1/Syksy 18/Jakso 2/Ohjelmistokehityksen sovellusprojekti/Koodit/Sovellusprojekti/Pankkiautomaatti/bankSimul/dll/DBConnect.dll"
LIBS += "C:/Users/Juho/Desktop/TVT18KMO/OAMK/Vuosi 1/Syksy 18/Jakso 2/Ohjelmistokehityksen sovellusprojekti/Koodit/Sovellusprojekti/Pankkiautomaatti/bankSimul/dll/Nappis.dll"
LIBS += "C:/Users/Juho/Desktop/TVT18KMO/OAMK/Vuosi 1/Syksy 18/Jakso 2/Ohjelmistokehityksen sovellusprojekti/Koodit/Sovellusprojekti/Pankkiautomaatti/bankSimul/dll/rfidDLL.dll"



# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        banksimulmainwindow.cpp

HEADERS += \
        banksimulmainwindow.h \
    headers/banklibrary.h \
    headers/banklibrary_global.h \
    headers/dbconnect.h \
    headers/dbconnect_global.h \
    headers/banklibrary.h \
    headers/banklibrary_global.h \
    headers/dbconnect.h \
    headers/dbconnect_global.h \
    headers/nappis.h \
    headers/nappis_global.h \
    headers/nappisform.h \
    headers/rfiddll.h \
    headers/rfiddll_global.h \
    headers/ui_nappisform.h

FORMS += \
        banksimulmainwindow.ui
