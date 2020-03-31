#include <iostream>

int main()
{
    /* you can't initialize a boolean with an integer using
        uniform initialization. */

    // to run code, uncomment the two line below
    bool b{ 4 };    // error
    std::cout << b;

    std::cout << std::boolalpha;

    // copy initialization allows implicit conversion
    bool b1 = 4;
    std::cout << b1 << '\n';

    bool b2 = 0;
    std::cout << b2 << '\n';

    return 0;
}