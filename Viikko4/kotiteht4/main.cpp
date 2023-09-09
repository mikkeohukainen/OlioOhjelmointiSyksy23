#include <iostream>

using namespace std;

#include "katutaso.h"

int main()
{
    Katutaso katutasonOlio;

    //katutasonOlio.maaritaAsunnot();

    //katutasonOlio.Kerros::maaritaAsunnot();

    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1, on "
         << katutasonOlio.laskeKulutus(1) + katutasonOlio.Kerros::laskeKulutus(1) << endl;

    return 0;
}
