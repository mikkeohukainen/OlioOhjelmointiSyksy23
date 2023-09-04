#include "game.h"

Game::Game(int a)   // Constructor takes an integer as a parameter
{
    numOfGuesses = 0;   // numOfGuesses initialized to 0
    maxNumber = a;      // Value of maxNumber is set
    cout << "GAME CONSTRUCTOR: object initialized with " << a << " as a maximum value\n";
}

Game::~Game()       // Destructor
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory\n";
}

void Game::play()   // play() -method
{
    srand(time(NULL));  // Initialize the random number generator

    randomNumber = rand() % maxNumber + 1;  // Generate a random number within the given limits

    while(true)         // Loop breaks below when the guess is right
    {
        cout << "Give your quess between 1-" << maxNumber << endl;
        while(!(cin >> playerGuess))    // Input with validation
        {
            cout << "*Invalid input!*\n";   // Error message
            cout << "Give your quess between 1-" << maxNumber << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        numOfGuesses ++;    // Add +1 to number of guesses

        if (playerGuess > randomNumber)
        {
            cout << "Your guess is too big\n";
        }
        else if (playerGuess < randomNumber)
        {
            cout << "Your guess is too small\n";
        }
        else    // Right answer -> call printGameResult() and break out of the loop
        {
            cout << "Your guess is right = " << randomNumber << endl;
            printGameResult();
            break;
        }
    }
}

void Game::printGameResult()        // Private method for printing the result
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses\n";
}
