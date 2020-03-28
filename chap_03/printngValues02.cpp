// learning debuging tactics: printing values

#include <iostream>

int add(int x, int y)
{
std::cerr << "add() called (x=" << x <<", y=" << y << ")" << '\n';
	return x+y;
}

void printResult(int z)
{
std::cerr << "printResult() called (z=" << z << ")\n";
	std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{
std::cerr << "getUserInput() called\n";

	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
std::cerr << "getUserInput::x = " << x << '\n';

	/* return --x; */
	return x;
}

/* printing values debuging tactics isn't good.
 * 1. clutter the whole code
 * 2. clutter the output
 * 3. statements must be romved
 * 4. requires modification of code and remove which can introduce
 *	new bugs.
 */

int main()
{
std::cerr << "main() called\n";

	int x{ getUserInput() };
std::cerr << "main::x = " << x << '\n';

	int y{ getUserInput() };
std::cerr << "main::y = " << y << '\n';

	std::cout << x << " + " << y << '\n';

	int z{ add(x, 5) };
std::cerr << "main::z = " << z << '\n';

	printResult(z);

	return 0;
}
