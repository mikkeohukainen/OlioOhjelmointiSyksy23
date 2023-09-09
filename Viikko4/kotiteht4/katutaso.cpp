#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu\n";
    Katutaso::maaritaAsunnot();
    Kerros::maaritaAsunnot();
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason (kerrokselta perittyja) asuntoja\n";
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double a)
{
    return
            as1.laskeKulutus(a)
            + as2.laskeKulutus(a);
}
