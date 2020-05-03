// my original solution to Bubble sort

#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
    int array[] { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    int arrayLength{ static_cast<int>(std::size(array)) };

    // printing the unsorted array
    std::cout << "Unsorted array: ";
    for (int index{ 0 }; index < arrayLength; ++index)
	std::cout << array[index] << ' ';

    std::cout << '\n';

    // main work
    for (int startIndex{ 0 }; startIndex < arrayLength; ++startIndex)
    {
	int temp;
	for(int startIndex{ 0 }; startIndex < arrayLength -1; ++startIndex)
	{
	    while( array[startIndex] > array[startIndex+1] )
	    {
		temp                = array[startIndex];
		array[startIndex]   = array[startIndex+1];
		array[startIndex+1] = temp;
	    }
	}
    }

    // printing the sorted array
    std::cout << "Sorted array:\t";
    for (int index{ 0 }; index < arrayLength; ++index)
	std::cout << array[index] << ' ';

    return 0;
}
