#include <iostream>

inline namespace v1
{
    void doSomething()
    {
	std::cout << "v1\n";
    }
}

namespace v2
{
    void doSomething()
    {
	std::cout << "v2\n";
    }
}

int main()
{
    v1::doSomething();
    v2::doSomething();

    doSomething();

    return 0;
}
