#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    float age{};	// float for the fractions
    std::cin >> age;

    std::cout << "You've lived " << age/name.length() <<
	" years for each letter in your name.\n";

    return 0;
}
