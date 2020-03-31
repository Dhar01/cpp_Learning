#include <iostream>

// returns true or false
bool isEqual(int x, int y)
{
    return (x == y);
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{ 0 };
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{ 0 };
    std::cin >> y;

    // for printing true or false
    std::cout << std::boolalpha;

    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x , y) << '\n';

    return 0;
}