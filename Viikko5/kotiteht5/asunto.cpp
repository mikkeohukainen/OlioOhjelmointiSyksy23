#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu\n";
}

void Asunto::maarita(int a, int b)  // Asetetaan parametrien arvot jäsenmuuttujiin
{
    asukasMaara = a;
    neliot = b;

    cout << "Asunto maaritetty: asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double a)   // Kulutus = hinta * asukkaiden määrä * neliömäärä
{
    return a * asukasMaara * neliot;    // Palautetaan kulutus
}


