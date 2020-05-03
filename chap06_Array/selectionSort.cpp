#include <algorithm>
#include <iostream>

int main()
{
    // fixed array, fixed length
    constexpr int length{ 5 };
    int array[length] { 30, 50, 20, 10, 40 };

    // main work
    // length-1 because when we get there,
    // the last index will be sorted already
    for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
    {
        int smallestIndex{ startIndex };
        for (int currentIndex{ startIndex+1 }; currentIndex < length; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }
        std::swap(array[startIndex], array[smallestIndex]);
    }

    // printing the sorted array
    for(int index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';

    std::cout << '\n';

    return 0;
}
