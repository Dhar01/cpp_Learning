#include "square.h"
#include <iostream>

int main()
{
    std::cout << "a square has " << 
        getSquareSides() << " sides.\n";
    std::cout << "a square of length 5 has perimter length "
        << getSquarePerimeter(5) << '\n';

    return 0;
}

/* to run the code 
    1. g++ square.h square.cpp squareCheck.cpp -o test 
    2. ./test
*/