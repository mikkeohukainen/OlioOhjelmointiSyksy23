#include "kerros.h"

Kerros::Kerros()
{
    as1 = new Asunto();     // Luodaan keosta neljä Asunto -tyyppistä oliota
    as2 = new Asunto();     // ja asetetaan niiden muistiosoitteet
    as3 = new Asunto();     // aiemmin luotuihin pointereihin
    as4 = new Asunto();

    cout << "Kerros luotu\n";
}

Kerros::~Kerros()
{
    delete as1; as1 = nullptr;  // Tuhotaan oliot, joihin pointerit osoittavat
    delete as2; as2 = nullptr;  // ja asetettaan pointerit osoittamaan 'nulliin'
    delete as3; as3 = nullptr;  // eli ei mihinkään
    delete as4; as4 = nullptr;
}

void Kerros::maaritaAsunnot()   // Määritetään asunnot luotujen olioiden jäsenfunktioiden avulla
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja\n";

    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double Kerros::laskeKulutus(double a)   // Lasketaan kerroksen kokonaiskulutus jäsenfunktioiden avulla
{
    return
            as1->laskeKulutus(a)+
            as2->laskeKulutus(a)+
            as3->laskeKulutus(a)+
            as4->laskeKulutus(a);
}
