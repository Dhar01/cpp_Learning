#include <iostream>

int main()
{
	std::cout << "Enter a integer: ";
	int smaller{};
	std::cin >> smaller;

	std::cout << "Enter a large integer: ";
	int larger{};
	std::cin >> larger;

	// if user input wrong
	if (smaller > larger)
	{
		std::cout << "Swapping the values\n";

		int temp{ larger };
		larger = smaller;
		smaller = temp;
	} // temp dies here

	std::cout << "The smaller value is: " << smaller << '\n';
	std::cout << "The larger value is: " << larger << '\n';

	return 0;
} // smaller and larger die here
