#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"     // Tätä tarvitaan, koska Katutaso perii Kerros -luokan

class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();

    virtual void maaritaAsunnot() override;         // Kerrotaan kääntäjälle, että näitä aiotaan muokata
    virtual double laskeKulutus(double) override;

private:
    Asunto * asunto1;   // Luodaan kaksi pointeria pinosta,
    Asunto * asunto2;   // joihin voidaan tallentaa Asunto tyyppisen olion muistiosoite
};

#endif // KATUTASO_H
