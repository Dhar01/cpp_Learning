#define __STDC_WANT_LIB_EXT1__ 1
#include <iostream>
#include <cstring>

int main()
{
    char source[] { "Copy this" };
    char dest[5];

    strlcpy (dest, 5, source);
    std::cout << dest << '\n';

    return 0;
}
