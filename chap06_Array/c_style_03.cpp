#include <iostream>
#include <iterator>

int main()
{
    char name[255];
    std::cout << "Enter your name: ";
    std::cin.getline(name, std::size(name));

    std::cout << "You entered: " << name << '\n';

    return 0;
}