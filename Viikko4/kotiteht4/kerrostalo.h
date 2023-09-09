#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"   // katutaso.h riittää, koska siihen sisältyy kaikki muut luokat

class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);    // Koko kerrostalon kulutus

private:
    Katutaso kerros1;               // Luodaan yksi olio luokasta: Katutaso
    Kerros kerros2;                 // Luodaan kaksi oliota luokasta: Kerros
    Kerros kerros3;
};

#endif // KERROSTALO_H
