#include <iostream>

// bad practice

int main()
{
    char name[255];

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "You entered: " << name << '\n';

    return 0;
}