#include <iostream>

namespace a
{
    int x{ 10 };
}

namespace b
{
    int x{ 20 };
}

/* this is the example of fault in using namespace
    it will cause an error as compiler isn't sure
    about which input they will take. */

int main()
{
    using namespace a;
    using namespace b;

    std::cout << x << '\n';

    return 0;
}