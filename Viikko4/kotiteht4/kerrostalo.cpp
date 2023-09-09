#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu\n";
    cout << "Maaritetaan koko kerrostalon kaikki asunnot:\n";
    kerros1.maaritaAsunnot();   // Määritetään katutason asunnot + kerrokselta perityt
    kerros2.maaritaAsunnot();   // Määritetään 2 kerroksen asunnot
    kerros3.maaritaAsunnot();   // Määritetään 3 kerroksen asunnot
    cout << "Kerrostalon kulutus: " << laskeKulutus(1) << endl; // Tulostetaan koko talon kulutus
}

double Kerrostalo::laskeKulutus(double a)   // Lasketaan koko talon kulutus
{
    return
            kerros1.laskeKulutus(a)         // Katutason + kerrokselta perittyjen asuntojen kulutus
            + kerros2.laskeKulutus(a)       // 2 kerroksen kulutus
            + kerros3.laskeKulutus(a);      // 3 kerroksen kulutus
                                            // Palautetaan kaikki laskettuna yhteen
}
