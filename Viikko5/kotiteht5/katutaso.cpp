#include "katutaso.h"

Katutaso::Katutaso()
{
    asunto1 = new Asunto();     // Luodaan keosta kaksi Asunto -tyyppistä oliota
    asunto2 = new Asunto();     // ja asetetaan niiden muistiosoitteet
                                // aiemmin luotuihin pointereihin
    cout << "Katutaso luotu\n";
}

Katutaso::~Katutaso()
{
    delete asunto1; asunto1 = nullptr;  // Tuhotaan oliot, joihin pointerit osoittavat
    delete asunto2; asunto2 = nullptr;  // ja asetettaan pointerit osoittamaan 'nulliin'
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja\n";

    asunto1->maarita(2, 100);   // Määritetään katutason omat asunnot
    asunto2->maarita(2, 100);

    cout << "Maaritetaan katutason *kerrokselta perityt* asunnot:\n";

    Kerros::maaritaAsunnot();   // Määritetään perityt asunnot kutsumalla perityn luokan metodia
}

double Katutaso::laskeKulutus(double a)
{
    return                              // Lasketaan koko katutason kulutus (myös perityt asunnot)
            asunto1->laskeKulutus(a)+
            asunto2->laskeKulutus(a)+
            Kerros::laskeKulutus(a);    // Kutsutaan perityn luokan metodia
}
