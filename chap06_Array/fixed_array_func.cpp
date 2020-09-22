#include <iostream>

void printSize(int *array)
{
    // array is treated as a pointer here
    std::cout << sizeof(array) << '\n';
}

int main()
{
    int array[] { 1, 1, 2, 3, 5, 8, 13, 21 };
    std::cout << sizeof(array) << '\n';

    printSize(array);

    return 0;
}
