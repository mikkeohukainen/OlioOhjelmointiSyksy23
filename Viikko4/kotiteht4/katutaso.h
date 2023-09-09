#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"     // Tätä tarvitaan, koska Katutaso perii Kerros -luokan
#include "asunto.h"     // Tätä tarvitaan, koska Katutaso luo olioita Asunto -luokasta

class Katutaso : public Kerros  // Peritään Kerros -luokka julkisesti
{                               // Tässä yhteydessä muodostuu 4kpl asuntoja lisää!
public:
    Katutaso();

    virtual void maaritaAsunnot() override;     // Kerrotaan kääntäjälle, että tätä metodia muokataan
    double laskeKulutus(double);                // Koko katutason kulutus

    Asunto as1;                     // Luodaan kaksi oliota luokasta Asunto
    Asunto as2;
};

#endif // KATUTASO_H
