#include <iostream>
#include <string>
#include <string_view>

int main()
{
	constexpr std::string_view array[] { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

	std::cout << "Enter a name: ";
	std::string name{};
	std::cin >> name;

	bool found{ false };

	for (auto element : array)
	{
		if (element == name)
		{
			found = true;
			break;
		}
	}

	if (found)
		std::cout << name << " was found.\n";
	else
		std::cout << name << " was not found.\n";

	return 0;
}
