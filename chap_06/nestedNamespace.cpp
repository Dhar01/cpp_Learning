#include <iostream>

// nested namespace

namespace foo
{
    namespace goo
    {
        int add(int x, int y)
        {
            return x+y;
        }
    }
}

int main()
{
    std::cout << foo::goo::add(4, 3) << '\n';

    return 0;
}