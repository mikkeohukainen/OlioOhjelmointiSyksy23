#include "italianchef.h"

ItalianChef::ItalianChef(string a) : Chef(a)
{
    //name = a;
    //cout << "Chef " << name << " constructor\n";
}

ItalianChef::~ItalianChef()
{
    //cout << "Chef " << name << " destructor\n";

}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta\n";
}



