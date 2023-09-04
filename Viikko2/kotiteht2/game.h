#ifndef GAME_H
#define GAME_H
#include <iostream>     // Include necessary libraries
#include <cstdlib>
#include <ctime>

using namespace std;

class Game              // Class definition
{
public:
    Game(int a);        // Constructor
    ~Game();            // Destructor
    void play();        // play() -method
private:
    int maxNumber;      // Private variables
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult(); // Private method
};

#endif // GAME_H
