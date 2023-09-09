#ifndef KERROS_H
#define KERROS_H
#include "asunto.h" // Sisällytetään luokan Asunto -tiedot

class Kerros
{
public:
    Kerros();
    virtual ~Kerros();  // Virtuaalinen metodi vaatii virtuaalisen tuhoajan

    virtual void maaritaAsunnot();  // Perivä luokka voi muokata tätä metodia
    double laskeKulutus(double);    // Koko kerroksen kulutus

    Asunto as1;             // Luodaan neljä oliota luokasta Asunto
    Asunto as2;
    Asunto as3;
    Asunto as4;
};

#endif // KERROS_H
