#include <iostream>
#define MY_NAME "Loknath"

/* we should avoid doing these kinds of macros as there are better
ways to do this kind of thing. */

int main()
{
    std::cout << "My name is: " << MY_NAME;

    return 0;
}