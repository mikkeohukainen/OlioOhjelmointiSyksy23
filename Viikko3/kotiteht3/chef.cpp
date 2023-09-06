#include "chef.h"

Chef::Chef(string a)
{
    name = a;
    cout << "Chef " << name << " constructor\n";
}

Chef::~Chef()
{
    cout << "Chef " << name << " destructor\n";
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad\n";
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup\n";
}






