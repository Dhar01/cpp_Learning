#include <iostream>

int main()
{
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin, name);

	std::cout << "Enter your age: ";
	double age{};
	std::cin >> age;

	double letter{ static_cast<double>(name.length()) };
	double count{ age / letter };

	std::cout << "You've lived " << count << " years for each letter in your name" << '\n';
	
	return 0;
}
