#include <iostream>

// simple solution: user must input 2, 3, 5, 7 prime number
// other prime numbers won't work in this solution

// checking whether the input is prime or not
bool primecheck(int x)
{
    if (x==2)
        return true;
    else if (x==3)
        return true;
    else if (x==5)
        return true;
    else if (x==7)
        return true;
    else
        return false;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (primecheck(x))
        std::cout << "The digit is prime.\n";
    else
        std::cout << "The digit is not prime.\n";

    return 0;
}