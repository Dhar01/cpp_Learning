#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{   
    // intro

    int array[] { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    constexpr int length{ static_cast<int>(std::size(array)) };

    // Bubble sorting part
    for (int iteration{ 0 }; iteration < length-1; ++iteration)
    {
        for ( int currentIndex{ 0 }; currentIndex < length-1; ++currentIndex)
        {
            if (array[currentIndex] > array[currentIndex+1])
                std::swap(array[currentIndex], array[currentIndex+1]);
        }
    }

    // Result: print the array.
    for (int index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';

    std::cout << '\n';

    return 0;
}