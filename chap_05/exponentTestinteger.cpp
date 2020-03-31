#include <iostream>
#include <cstdint>      // for std::int_fast64_t

/* this function implements integer exponentiation using
    the non-intuitive 'exponentiation by squaring' 
    algorithm for efficiency. */

// note: exp must be non-negative
std::int_fast64_t powint(int base, int exp)
{
    std::int_fast64_t result{ 1 };
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}

int main()
{
    std::cout << powint(7, 12) << '\n';

    return 0;
}