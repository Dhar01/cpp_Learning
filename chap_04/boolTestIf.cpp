#include <iostream>

// checking if the inputs are equal or not
bool isEqual(int x, int y)
{
    return (x==y);
}

// taking user input
int userInput()
{
    std::cout << "Enter an input (integer): ";
    int x{};
    std::cin >> x;

    return x;
}

// main part
int main()
{
    int x{ userInput() };
    int y{ userInput() };

    std::cout << std::boolalpha;

    if (isEqual(x, y))
        std::cout << x << " and " << y << " are equal.\n";
    else
        std::cout << x << " and " << y << " are not equal.\n";
    
    return 0;
}