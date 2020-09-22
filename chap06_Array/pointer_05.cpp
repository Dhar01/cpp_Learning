// std::nullptr_t from c++11

#include <iostream>
#include <cstddef>

void doSomething(std::nullptr_t ptr)
{
    std::cout << "in doSomething()\n";
}

int main()
{
    doSomething(nullptr);

    return 0;
}
