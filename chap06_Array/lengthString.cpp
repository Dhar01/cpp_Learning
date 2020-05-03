#include <iostream>
#include <cstring>
#include <iterator>

int main()
{
    char name[20]{ "Alex" };
    std::cout << "My name is: " << name << '\n';
    std::cout << name << " has " << std::strlen(name) << " letters.\n";

    std::cout << name << " has " << std::size(name) << " characters in the array.\n";

    return 0;
}
