#include <bits/c++config.h>
#include <iostream>
#include <iterator> 

int main()
{
    constexpr int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    constexpr int arrayLength{ std::size(array) };

    for (int i{ 0 }; i < arrayLength; ++i)
    {
        std::cout << array[i] << '\n';
    }

    return 0;
}