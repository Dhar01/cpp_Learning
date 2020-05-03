// array quiz 6.3 - number 1

#include <iostream>
#include <iterator>

int main()
{
    int x{};

    do
    {
	std::cout << "Enter an input between 1-9: ";
	std::cin >> x;

	// if the user enter invalid character
	if (std::cin.fail())
	    std::cin.clear();	// reset any error flag

	// ignore extra character in the input buffer
	std::cin.ignore(32767, '\n');

    } while (x < 1 && x > 9);

    int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int arrayLength{ static_cast<int>(std::size(array)) };

    std::cout << "Array: ";

    for (int iii{ 0 }; iii < arrayLength; ++iii)
	std::cout << " " << array[iii];

    std::cout << '\n';

    for (int iii{ 0 }; iii < arrayLength; ++iii)
    {
	if (array[iii] == x){
	    std::cout << "The number " << x << " has index " << iii << '\n';
	    break;
	}
    }

    return 0;
}
