// array data type

#include <iostream>

int main()
{
    double array[3];

    array[0] = 2.0;
    array[1] = 3.0;
    array[2] = 4.3;

    std::cout << "The average is " << (array[0]
        + array[1] + array[2]) / 3 << '\n';
    
    return 0;
}