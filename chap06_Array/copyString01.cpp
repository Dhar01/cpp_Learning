#define __STDC_WANT_LIB_EXT1__ 1
#include <cstring>
#include <iostream>

// I understand nothing

int main()
{
    char source[]{ "Copy this!" };
    char dest[5];

    strcpy_s(dest, 5, source);

    std::cout << dest << '\n';

    return 0;
}
