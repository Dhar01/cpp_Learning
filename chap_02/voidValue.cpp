#include <iostream>

void returnNothing()
{
    std::cout << "Hi" << '\n';
}

// this program won't compile because of the void function

int main()
{
    returnNothing();

    std::cout << returnNothing();

    return 0;
}