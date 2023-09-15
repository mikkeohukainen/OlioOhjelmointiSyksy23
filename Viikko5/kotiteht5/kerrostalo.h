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
    Katutaso * ekaKerros;   // Luodaan yksi Katutaso-tyyppinen pointeri pinosta
    Kerros * tokaKerros;    // Luodaan kaksi Kerros-tyyppistä pointeria pinosta
    Kerros * kolmasKerros;
};

#endif // KERROSTALO_H
