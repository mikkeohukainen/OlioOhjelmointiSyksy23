#ifndef KERROS_H
#define KERROS_H
#include "asunto.h" // Sisällytetään Asunto-luokan tiedot


class Kerros
{
public:
    Kerros();
    virtual ~Kerros();

    virtual void maaritaAsunnot();  // Perivä luokka voi muokata näitä
    virtual double laskeKulutus(double);

private:
    Asunto * as1;   // Luodaan neljä pointeria pinosta,
    Asunto * as2;   // joihin voidaan tallentaa Asunto tyyppisen olion muistiosoite
    Asunto * as3;
    Asunto * as4;
};

#endif // KERROS_H
