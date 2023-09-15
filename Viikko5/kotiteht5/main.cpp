#include "kerrostalo.h"

int main()
{
    Kerrostalo * kerrostalo;        // Luodaan pinosta Kerrostalo-tyyppinen pointeri
    kerrostalo = new Kerrostalo;    // Luodaan keosta Kerrostalo-olio ja asetetaan sen muistiosoite pointeriin

    cout << "Kerrostalon kulutus: " << kerrostalo->laskeKulutus(1) << endl;     // Tulostetaan kerrostalon kulutus
                                                                                // kutsumalla jäsenfunktiota ja välitetään sille parametrina 1
    delete kerrostalo;              // Tuhotaan olio, johon pointeri osoittaa
    kerrostalo = nullptr;           // ja asetetaan pointeri osoittamaan 'nulliin'

    return 0;
}
