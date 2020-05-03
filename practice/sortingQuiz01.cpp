#include <algorithm>
#include <iostream>
#include <iterator>

// sorting in descending order

int main()
{
    constexpr int length{ 5 };
    int array[] { 30, 50, 20, 10, 40 };

    for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
    {
	int smallestIndex{ startIndex };
	for (int currentIndex{ startIndex+1 }; currentIndex < length; ++currentIndex)
	{
	    if (array[currentIndex] > array[smallestIndex])
		smallestIndex = currentIndex;
	}
	std::swap(array[startIndex], array[smallestIndex]);
    }

    for (int index{ 0 }; index < length; ++index)
	std::cout << array[index] << ' ';

    std::cout << '\n';

    return 0;
}
