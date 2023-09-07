#include "italianchef.h"

int main()
{
    // Create object Mario from class ItalianChef
    // Assign name: 'Mario', water: 100 and flour: 250 to the constructor

    ItalianChef Mario("Mario", 100, 250);

    // Call object Mario's makePasta() -method
    Mario.makePasta();

    return 0;
}
