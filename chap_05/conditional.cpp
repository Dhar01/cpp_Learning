#include <iostream>

int userInput()
{
    std::cout << "Enter an input: ";
    int x{};
    std::cin >> x;

    return x;
}

int main()
{
    int x{ userInput() };
    int y{ userInput() };

    if (x == y)
        std::cout << x << " equals " << y << '\n';
    if (x != y)
        std::cout << x << " does not equal " << y << '\n';
    if (x > y)
        std::cout << x << " is greater than " << y << '\n';
    if (x < y)
        std::cout << x << " is less than " << y << '\n';
    if (x >= y)
        std::cout << x << " is greater than or equal to " << y << '\n';
    if (x <= y)
        std::cout << x << " is less than or equal to " << y << '\n';
 
    return 0;
}