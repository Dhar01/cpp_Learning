#include <iostream>

// block nesting levels
int main()
{   // nesting level 1
    std::cout << "Enter an integer: ";
    int value{};
    std::cin >> value;

    if (value > 0)
    {   // nesting level 2
        if ((value % 2) == 0)
        {   // nesting level 3
            std::cout << value << " is positive and even.\n";
        }
        else
        {
            std::cout << value << " is positive and odd\n";
        }
    }

    return 0;
}

/* keep the nesting level of functions 2 or less.
    if functions need more, consider refactoring. */