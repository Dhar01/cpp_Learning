// global variables with external linkage
#include <iostream>

int g_x{ 2 };

extern const int g_y{ 3 };
extern constexpr g_z{ 3 };

int main()
{
    return 0;
}