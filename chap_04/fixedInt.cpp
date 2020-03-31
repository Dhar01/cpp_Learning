#include <iostream>
#include <cstdint>

int main()
{
    std::int16_t i{ 5 };  // direct initialization
    std::cout << "i = " << i << '\n';

    /* two downside of fixed-width integer:
        1. may not be supported on architectures where those
            type can't be represented.
        2. may also be less performant than the built-in types
            on some architectures
    */

    return 0;
}