// with b.cpp
#include <iostream>

extern int g_x;
extern const int g_y;

int main()
{
    std::cout << g_x;
    return 0;
}

/* to run this program
    write on terminal-
        g++ -0 name b.cpp main2.cpp     */