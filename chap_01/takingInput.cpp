#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x{};

    std::cin >> x;

    std::cout << "You entered " << x << ".\n";

    // using '.\n' caused an error.
    // use '\n' alone

    return 0;
}