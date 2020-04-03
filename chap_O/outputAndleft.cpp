#include <iostream>
#include <bitset>

/* if we want to use both output and left shift,
    we have to use parentesis */

int main()
{
    std::bitset<4> x{ 0b0110 };

    std::cout << x << 1 << '\n';
    std::cout << (x << 1 ) << '\n';

    return 0;
}