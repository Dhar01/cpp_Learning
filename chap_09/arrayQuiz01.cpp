#include <iostream>

namespace Animals
{
    enum Animals
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals
    };
}

int main()
{
    int animals[Animals::max_animals] { 2, 4, 4, 4, 2, 0 };

    std::cout << "The number of legs an elephant has: " << animals[Animals::elephant] << " legs.\n";

    return 0;
}