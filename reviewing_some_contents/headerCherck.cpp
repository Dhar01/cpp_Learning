#include <iostream>
#include "add.h"

// user defined header file should include
// using double quotes to differ from standard
// header files.

int main()
{
    std::cout << "The sum of 3 and 4 is " <<
        add(3, 4) << '\n';

    return 0;
}