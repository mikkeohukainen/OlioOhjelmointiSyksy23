#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu\n";
}

void Katutaso::maaritaAsunnot()     // Määritetään asunnot luotujen olioiden jäsenfunktioiden avulla
{
    cout << "Maaritetaan 2kpl katutason asuntoja\n";
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout << "Maaritetaan katutason kerrokselta perityt 4kpl asuntoja:\n";
    Kerros::maaritaAsunnot();       // HUOM! Kerros -luokan perimisen yhteydessä muodostuu 4kpl asuntoja lisää
}

double Katutaso::laskeKulutus(double a) // Koko katutason kulutus
{
    return
            as1.laskeKulutus(a)
            + as2.laskeKulutus(a)
            + Kerros::laskeKulutus(a);  // Lisätään perityn Kerros -luokan kulutus
}
