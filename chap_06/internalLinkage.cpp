// global variables with internal linkage

#include <iostream>

// to make non-constant global variable internal,
// we use static keyword.
static int g_x;

// const and constexpr have internal linkage by default
const int g_y{ 1 };

constexpr int g_z{ 2 };

int main()
{
    return 0;
}