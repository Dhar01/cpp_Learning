#include <iostream>

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

// namespace aliases

int main()
{
    namespace boo = foo::goo;

    std::cout << boo::add(4, 3) << '\n';

    return 0;
}

/* advantage: if we ever want to move the functionality within
    foo::goo to a different place, we can just update the boo
    alias. 
    
    avoid deeply nested namespaces. */