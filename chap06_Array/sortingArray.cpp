#include <algorithm>    // for std::swap
#include <iostream>

int main()
{
    int x{ 2 };
    int y{ 4 };

    std::cout << "Before swap: x = " << x <<
        ", y = " << y << '\n';
    std::swap(x, y);    // swaping the values
    std::cout << "After swap: x = " << x <<
        ", y = " << y << '\n';

    return 0;
}
