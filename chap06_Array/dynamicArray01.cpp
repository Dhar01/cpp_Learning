#include <iostream>
#include <cstddef>

int main()
{
    std::cout << "Enter a positive integer: ";
    std::size_t length{};
    std::cin >> length;

    // use array new.
    // Note: length does not need to be constant!
    int *array{ new int[length]{} };
    std::cout << "I just allocated an array of integers of length " << length << '\n';

    // set element 0 to value 5
    array[0] = 5;

    // use array delete to deallocate memory.
    delete[] array;

    // we don't need to use nullptr here cause it's going to go out of scope
    // immediately after this anyway.

    return 0;
}
