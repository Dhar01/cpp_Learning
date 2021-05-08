#include <iostream>
#include <cstdlib>

/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

int main()
{
    srand(time(NULL));

    int computer { rand() % 3 + 1 };
    int user { 0 };

    std::cout << "++++++++++++++++++++++\n";
    std::cout << "Rock Paper Scissors\n";
    std::cout << "++++++++++++++++++++++\n";

    std::cout << "1) rock\n";
    std::cout << "2) paper\n";
    std::cout << "3) scissor\n";
    std::cout << "shoot! ";

    std::cin >> user;

    // user selection

    if (user == 1)
        std::cout << "You choose rock.\n";
    else if (user == 2)
        std::cout << "You choose paper.\n";
    else if (user == 3)
        std::cout << "You choose scissor.\n";
    else
        std::cout << "Choose: 1, 2 or 3\n";

    // computer selection

    if (computer == 1)
        std::cout << "Computer choose rock.\n";
    else if (computer == 2)
        std::cout << "Computer choose paper.\n";
    else if (computer == 3)
        std::cout << "Computer choose scissor.\n";
    else
        std::cout << "Computer goes mad.\n";

    // game logic

    if (user == computer)
        std::cout << "It's a tie!\n";
    else if (user == 1 && computer == 2)
        std::cout << "You lost!\n";
    else if (user == 2 && computer == 3)
        std::cout << "You lost!\n";
    else if (user == 1 && computer == 3)
        std::cout << "You win! Computer loses!\n";
    else if (user == 2 && computer == 1)
        std::cout << "You win!\n";
    else if (user == 3 && computer == 2)
        std::cout << "You win!\n";
    else if (user == 3 && computer == 1)
        std::cout << "You lose!\n";

    return 0;
}