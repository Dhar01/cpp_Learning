#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;

    // this type of nested statements enclose
    // within a blocl
    if (x >= 10)
        if (x <= 20)
            std::cout << x << " is between 10 and 20\n";
        else
            std::cout << x << " is greater than 20\n";
    
    return 0;
}
        