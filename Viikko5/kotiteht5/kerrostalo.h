#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"   // katutaso.h riittää, koska siihen sisältyy kaikki muut luokat

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();

    double laskeKulutus(double);

private:
    Kerros * ekaKerros;   // Luodaan kolme Kerros-tyyppistä pointeria pinosta
    Kerros * tokaKerros;
    Kerros * kolmasKerros;
};

#endif // KERROSTALO_H
