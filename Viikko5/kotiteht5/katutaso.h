#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"     // Tätä tarvitaan, koska Katutaso perii Kerros -luokan

class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();

    virtual void maaritaAsunnot() override; // Kerrotaan kääntäjälle, että tätä metodia aiotaan muokata
    double laskeKulutus(double);

private:
    Asunto * asunto1;   // Luodaan kaksi pointeria pinosta,
    Asunto * asunto2;   // joihin voidaan tallentaa Asunto tyyppisen olion muistiosoite
};

#endif // KATUTASO_H
