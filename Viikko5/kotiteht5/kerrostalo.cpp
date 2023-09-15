#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    ekaKerros = new Katutaso;   // Luodaan keosta yksi Katutaso-tyyppinen olio
    tokaKerros = new Kerros;    // ja kaksi Kerros-tyyppistä oliota,
    kolmasKerros = new Kerros;  // sekä asetetaan niiden muistiosoitteet pointereihin

    cout << "Kerrostalo luotu\n";
    cout << "Maaritetaan koko kerrostalon kaikki asunnot:\n";

    ekaKerros->maaritaAsunnot();    // Määritetään Katutason ja kerrosten asunnot
    tokaKerros->maaritaAsunnot();
    kolmasKerros->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete ekaKerros; ekaKerros = nullptr;          // Tuhotaan oliot, joihin pointerit osoittavat
    delete tokaKerros; tokaKerros = nullptr;        // ja asetettaan pointerit osoittamaan 'nulliin'
    delete kolmasKerros; kolmasKerros = nullptr;
}

double Kerrostalo::laskeKulutus(double a)
{
    return                                  // Lasketaan koko kerrostalon kulutus
            ekaKerros->laskeKulutus(a)+     // luotujen olioiden jäsenfunktioiden avulla
            tokaKerros->laskeKulutus(a)+
            kolmasKerros->laskeKulutus(a);
}
