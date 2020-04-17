// multiple decalaration of for loop
#include <iostream>

int main()
{
    int iii{};
    int jjj{};

    for(iii = 0, jjj = 9; iii < 10; +++iii, --jjj)
        std::cout << iii << ' ' << jjj << '\n';

    return 0;
}