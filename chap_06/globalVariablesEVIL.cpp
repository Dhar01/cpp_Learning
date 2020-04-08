// non-constant global variables are evil

#include <iostream>

int g_mode;

void do_Something()
{
    g_mode = 2;
}

int main()
{
    g_mode = 1;
    do_Something();

    /* as we expect to find the result is 1,
        it will return 2 */
    if (g_mode == 1)
        std::cout << "No threat detected.\n";
    else
        std::cout << "Launching nuclear missiles...\n";

    return 0;
}