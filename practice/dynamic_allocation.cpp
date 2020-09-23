#include <iostream> // for input & output
#include <cstddef>  // for std::size_t
#include <limits>   // std::numeric_limits
#include <algorithm>>	// std::sort
#include <string>

std::size_t getNameCount()
{
    std::cout << "How many names would you like to enter? ";
    std::size_t length{};
    std::cin >> length;

    return length;
}

// for getting all names
void getNames(std::string* names, std::size_t length)
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (std::size_t i{ 0 }; i<length; ++i)
    {
	std::cout << "Enter name #" << i+1 << ": ";
	std::getline(std::cin, names[i]);
    }
}

// print the sorted names
void printNames(std::string* names, std::size_t length)
{
    std::cout << "\nHere is your sorted list:\n";

    for (std::size_t i{0}; i<length; ++i)
	std::cout << "Name #" << i+1 << ": " << names[i] << '\n';
}

int main()
{
    std::size_t length{ getNameCount() };

    // allocate an array to hold names
    auto* names{ new std::string[length]{} };

    getNames(names, length);

    printNames(names, length);

    // delete used array
    delete[] names;

    return 0;
}
