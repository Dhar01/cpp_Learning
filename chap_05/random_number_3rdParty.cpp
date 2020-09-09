#include <iostream>
#include "random.hpp"

using Random = effolkronium::random_static;

int main()
{
    std::cout << Random::get(1, 6) << '\n';
    return 0;
}
