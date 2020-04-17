// error case 4
// extraction succeeds but the user overflows a numeric value

// this program exterminate every error
#include <iostream>

double getDouble()
{
    while(true)
    {
        std::cout << "Enter a double value: ";
        double x;
        std::cin >> x;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return x;
        }       
    }
}


char getOperator()
{
    while(true)
    {
        std::cout << "Enter one of the following: +, -, *, /: ";
        char op;
        std::cin >> op;

        // check whether input is valid or not
        if (op == '+' || op == '-' || op == '*' || op == '/')
            return op;
        else
            std::cout << "oops, that input is invalid. Please, try again.\n";
        
    }
}

void printResult(double x, char op, double y)
{
    if (op == '+')
        std::cout << x << " + " << y << " is " << x+y << '\n';
    else if (op == '-')
        std::cout << x << " - " << y << " is " << x-y << '\n';
    else if (op == '*')
        std::cout << x << " * " << y << " is " << x*y << '\n';
    else if (op == '/')
        std::cout << x << " / " << y << " is " << x/y << '\n';
    else
        std::cout << "Something went wrong.";
    
}

int main()
{
    double x{ getDouble() };
    char op{ getOperator() };
    double y{ getDouble() };

    printResult(x, op, y);

    return 0;
}