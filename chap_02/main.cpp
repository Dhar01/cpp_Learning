#include <iostream>

// int add(int x, int y);

#include "add.h"

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';

    return 0;
}


/*
This was an example of mult-file program.

I was using g++ to compile files. To run this program, I
compiled it like this: g++ add.cpp main.cpp -o main

we are accessing another file's function.
And also we need forware declaration here.
*/