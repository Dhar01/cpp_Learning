#include <iostream>
#include <bitset>

int main()
{
    std::cout << std::bitset<4>{ ~0b0100u } << ' ' <<
                            std::bitset<8>{ ~0b0100u } << '\n';

    return 0;
}