#include <iostream>
#include <cstddef>
#include <limits>
#include <string>
#include <algorithm>

void getNames(std::string* names, std::size_t length)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for ( std::size_t iii{0}; iii < length; ++iii )
	{
		std::cout << "Enter name #" << iii + 1 << ": ";
		std::getline(std::cin, names[iii]);
	}
}

void printNames(std::string* names, std::size_t length)
{
	std::cout << "Here is your sorted list:\n";

	for ( std::size_t iii{0}; iii < length; ++iii )
		std::cout << "Name #" << iii + 1 << ": " << names[iii] << '\n';
}

int main()
{
	std::cout << "How many names do you like to enter? ";
	std::size_t length{};
	std::cin >> length;

	// allocate an array to hold the names
	auto* names{ new std::string[length]{} };

	getNames(names, length);
	
	// sorting the names
	std::sort(names, names+length);

	printNames(names, length);
	
	return 0;
}
