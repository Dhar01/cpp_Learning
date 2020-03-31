#include <iostream>
#include <iomanip>      // for std::setprecision()

int main()
{
    std::cout << std::setprecision(16) << '\n';
    std::cout << 3.3333333333333333333333333333333333333 << '\n';
    std::cout << 3.33333333333333333333333333333333333333f << '\n';

    return 0;
}

/* float gives error because they are less precise than
doubles.*/