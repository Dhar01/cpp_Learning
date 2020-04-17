#include <iostream>
#include <random>       // for std::mt19937
#include <ctime>        // fot std::time

// returns true if user won
// returns false if user lost
bool playGame(int guesses, int number)
{
    // loop through all of the guesse
    for (int count{ 1 }; count <= guesses; ++count)
    {
        std::cout << "Guess #" << count << ": ";
        int guess;
        std::cin >> guess;

        if (guess >> number)
            std::cout << "Your guess is too high.\n";
        else if (guess < number)
            std::cout << "Your guess is too low.\n";
        else
            return true;
    }

    return false;
}

bool playAgain()
{
    char ch;
    do
    {
        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> ch;
    } while (ch != 'y' && ch != 'n');

    return (ch == 'y');
}

int main()
{
    std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::uniform_int_distribution die{ 1, 100 };

    constexpr int guesses{ 7 };

    do
    {
        int number{ die(mersenne) };
        std::cout << "Let's play a game. I'm thinking of a number. You have "
            << guesses << " tries to guess what it is.\n";

        bool won{ playGame(guesses, number) };
        if (won)
            std::cout << "Correct! You win!\n";
        else
            std::cout << "Sorry, you lose. The correct number was "
                << number << '\n';    
    }   while ( playGame() );

    std::cout << "Thank you for playing.\n";

    return 0;
}