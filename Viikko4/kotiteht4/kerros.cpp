#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu\n";
}

Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja\n";
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double a)
{
    return
            as1.laskeKulutus(a)
            + as2.laskeKulutus(a)
            + as3.laskeKulutus(a)
            + as4.laskeKulutus(a);
}
