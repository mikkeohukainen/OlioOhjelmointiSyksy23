#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu\n";
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;

    cout << "Asunto maaritetty: asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double a)
{
    double kulutus = a * asukasMaara * neliot;
    return kulutus;
}
