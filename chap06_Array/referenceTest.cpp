#include <iostream>

int main()
{
    int value{ 5 };
    int &ref{ value };

    value = 6;
    ref = 7;

    std::cout << value << '\n';
    ++ref;
    std::cout << value << '\n';

    return 0;
}
