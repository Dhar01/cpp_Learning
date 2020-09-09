// a simple calculator project with input validation

#include <iostream>

double getDouble()
{
    while (true)
    {
        std::cout << "Enter a double value: ";
        double x{};
        std::cin >> x;

        // input error checking
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
        {
            std::cin.ignore(32767, '\n');
        }

        return x;
    }
}

char getOperator()
{
    while(true)
    {
        std::cout << "Enter one of the following: +, -, *, / : ";
        char operation{};
        std::cin >> operation;

        switch (operation)
        {
            case '+':
            case '-':
            case '*':
            case '/':
                return operation;
            default:
                std::cout << "Oops, that input is invalid. Please try again.\n";
        }
    }
}

void printResult(double x, char operation, double y)
{
    switch (operation)
    {
        case '+':
            std::cout << x << " + " << y << " = " << x+y << '\n';
            break;
        case '-':
            std::cout << x << " - " << y << " = " << x-y << '\n';
            break;
        case '*':
            std::cout << x << " * " << y << " = " << x*y << '\n';
            break;
        case '/':
            std::cout << x << " / " << y << " = " << x/y << '\n';
            break;
        default:
            std::cerr << "Something went wrong: printResult() got an invalid operator.\n";
    }
}

int main()
{
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };

    printResult(x, operation, y);

    return 0;
}