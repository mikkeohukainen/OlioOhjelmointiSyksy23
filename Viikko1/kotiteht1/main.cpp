#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funktion prototyyppi
int game(int maxnum);

// Pääohjelma
int main()
{
    int korkeinLuku;    // Korkein etsittävä luku
    int arvaukset;      // Arvausten kokonaismäärä

    cout << "Anna korkein luku: ";

    while(!(cin >> korkeinLuku))            // Luetaan käyttäjän syöte
    {                                       // Mikäli ei kokonaisluku ->
        cout << "Anna kokonaisluku: ";      // Virheilmoitus
        cin.clear();                        // Nollataan cin -vikatila
        cin.ignore(100, '\n');              // Tyhjennetään bufferi
    }

    arvaukset = game(korkeinLuku);          // Kutsutaan game() -funktiota
                                            // ja asetetaan samalla sen paluuarvo arvausten määräksi

    cout << "Arvauksia " << arvaukset << " kappaletta.\n";  // Tulostetaan arvausten määrä

    return 0;
}

// Funktion toteutus
int game(int maxnum)
{
    int randomNumber;                       // Muuttujat satunnaisluvulle,
    int arvaus;                             // arvaukselle
    int montakoArvausta = 0;                // ja arvausten määrälle

    srand(time(NULL));                      // Alustetaan satunnailukugeneraattori

    randomNumber = rand() % maxnum + 1;     // Arvotaan satunnaisluku väliltä 1 - käyttäjän syöte

    while(true)                             // Ikilooppi pyörii kunnes vastaus on oikea
    {
        cout << "Anna arvaus: ";

        while(!(cin >> arvaus))             // Sama rakenne kuin yllä main() -funktiossa
        {
            cout << "Anna arvaus kokonaislukuna: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
        montakoArvausta++;                  // Lisätään arvausten määrään 1

        if (arvaus > randomNumber)
        {
            cout << "Luku on pienempi\n";
        }
        else if (arvaus < randomNumber)
        {
            cout << "Luku on suurempi\n";
        }
        else
        {
            cout << "Oikea vastaus!\n";     // arvaus == randomNumber
            break;
        }
    }

    return montakoArvausta;                 // Palautetaan arvausten kokonaismäärä
}
