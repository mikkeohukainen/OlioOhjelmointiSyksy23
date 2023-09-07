#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string, int, int);  // Constructor, takes 3 variables
    ~ItalianChef();                 // Destructor

    string getName();               // Method definitions
    void makePasta();
private:
    int water;           // Variables for secret recipe
    int flour;

};

#endif // ITALIANCHEF_H
