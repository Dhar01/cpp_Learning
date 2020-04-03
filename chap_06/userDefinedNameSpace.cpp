#include <iostream>

namespace foo       // defining namespace
{
    int doSomething(int x, int y)
    {
        return x+y;
    }
}

namespace goo
{
    int doSomething(int x, int y)
    {
        return x-y;
    }
}

int main()
{
    std::cout << foo::doSomething(4, 3) << '\n';
    // if you want to use namespace goo
    std::cout << goo::doSomething(4, 3) << '\n';

    return 0;
}