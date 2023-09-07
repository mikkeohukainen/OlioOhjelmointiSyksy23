#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>   // For string class
using namespace std;

class Chef
{
public:
    Chef(string a); // Constructor, takes a string
    ~Chef();        // Destructor

    void makeSalad();   // Method definitions
    void makeSoup();
protected:
    string name;    // Protected variable 'name'
};

#endif // CHEF_H
