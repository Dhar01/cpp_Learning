// array quiz 6.3 - number 1

#include <iostream>
#include <iterator>

int main()
{
    int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int arrayLength{ static_cast<int>(std::size(array)) };

    /* for (int iii=0; iii < static_cast<int>(std::size(array)); ++iii) */
	/* std::cout << " " << array[iii]; */

    for (int iii{ 0 }; iii < arrayLength; ++iii)
	std::cout << " " << array[iii];

    return 0;
}
