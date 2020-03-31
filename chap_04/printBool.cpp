#include <iostream>

int main()
{
    std::cout << true << '\n';
    std::cout << !true << '\n';

    bool b{false};
    std::cout << b << '\n';
    std::cout << !b << '\n';

    std::cout << std::boolalpha;    // print bools as true/false
    // std::cout << std::noboolalpha;   // to turn it back of

    std::cout << true << '\n';
    std::cout << false << '\n';

    return 0;
}