#include <iostream>

int main()
{
    float fValue;
    double dValue;
    long double ldValue;

    int x{ 5 };
    double y{ 5.2 };    // no suffix means double type
    float z{ 5.4f };    // f suffix means float type

    std::cout << 5.0 << '\n';
    std::cout << 6.7f << '\n';
    std::cout << 9876543.21 << '\n';

    std::cout << y << '\n';
    std::cout << z << '\n';

    return 0;
}