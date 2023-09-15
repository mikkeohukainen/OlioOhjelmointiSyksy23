#include "italianchef.h"

ItalianChef::ItalianChef(string a, int x, int y)
    : Chef(a),  // Pass 'a' to base class constructor
      water(x), // Set the amount of water and flour
      flour(y)
{

}

ItalianChef::~ItalianChef()
{
    // Base class destructor will do the printing
}

string ItalianChef::getName()
{
    return name;    // Unused function?
}

void ItalianChef::makePasta()   // Method for making pasta with special recipe
{
    cout << "Chef " << name << " makes pasta with special recipe\n";
    cout << "Chef " << name << " uses flour = " << flour << endl;
    cout << "Chef " << name << " uses water = " << water << endl;
}



