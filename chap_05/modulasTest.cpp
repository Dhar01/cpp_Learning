#include <iostream>

int userInput()
{
    std::cout << "Enter your number: ";
    int x{};
    std::cin >> x;

    return x;
}

int main()
{
    int x{ userInput() };
    int y{ userInput() };

    std::cout << "The reminder is: " << x%y << '\n';

    if (( x%y ) == 0)
        std::cout << x << " is evenly divisible by " << y << '\n';
    else
        std::cout << x << " is not evenly divisible by " << y << '\n';

    return 0;
}