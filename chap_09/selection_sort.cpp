#include <iostream>
#include <iterator>
#include <utility>
#include <cstddef>

int main()
{
    int array[] { 30, 50, 20, 10, 40 };
    constexpr std::size_t length{ std::size(array) };

    for (std::size_t startIndex{ 0 }; startIndex < length-1; ++startIndex)
    {
        std::size_t smallestIndex{ startIndex };

        for (std::size_t currentIndex{ startIndex + 1}; currentIndex < length; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
            {
                smallestIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[smallestIndex]);
    }

    for (std::size_t index{ 0 }; index < length; ++index)
    {
        std::cout << array[index] << ' ';
    }

    std::cout << '\n';

    return 0;
}