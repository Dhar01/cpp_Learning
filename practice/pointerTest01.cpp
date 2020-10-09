#include <iostream>
#include <iterator>

int* find(int *began, int *end, int value)
{
	for (int *p{ began }; p != end; ++p)
	{
		if (*p == value)
		{
			return p;
		}
	}

	return end;
}

int main()
{
	int arr[] { 2, 5, 4, 10, 8, 20, 16, 40 };

	// search the first element with value 20
	int *found{ find(std::begin(arr), std::end(arr), 20) };

	// if an element with value 20 was found, print it.
	if (found != std::end(arr) )
	{
		std::cout << *found << '\n';
	}

	return 0;
}
