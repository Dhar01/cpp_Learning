#include <iostream>

int userInput()
{
    std::cout << "Enter integer: ";
    int x{};
    std::cin >> x;

    return x;
}

int main()
{
    int x{ userInput() };
    int y{ userInput() };

    int selection{};

    do
    {
        std::cout << "Please make a selection: \n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cin >> selection;
    }
    while(selection != 1 && selection != 2 &&
        selection != 3 && selection != 4);
        
    switch(selection)
    {
        case 1:
            std::cout << x+y << '\n';
            break;
        case 2:
            std::cout << x-y << '\n';
            break;
        case 3:
            std::cout << x*y << '\n';
            break;
        case 4:
            std::cout << x/y << '\n';
            break;
        default:
            std::cout << "Unknown\n";
            break;
    }

    std::cout << "You selected option #" << selection << '\n';

    return 0;
}