#include <iostream>

int add(int x, int y)
{
    return x+y;
}

int main()
{
    // using auto keyword
    auto sum { add(5, 6) };

    std::cout << sum << '\n';
    return 0;
}
