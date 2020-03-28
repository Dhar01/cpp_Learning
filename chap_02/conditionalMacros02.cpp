#include <iostream>

int main()
{
    std::cout << "Joe\n";

#if 0       // won't compile from here to
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif      // until this point

    return 0;
}

// it's more like commenting out the code