#include <iostream>

void dosomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    int x{ 0 };         // x's lifetime begins here
    dosomething();      // x is still alive during function call
    return 0;
}       // x's lifetime ends here