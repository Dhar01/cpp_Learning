#include <iostream>

double getValue()
{
		std::cout << "Enter a double value: ";
		double x{};
		std::cin >> x;

		return x;
}

int main()
{
		double first_value { getValue() };
		double second_value { getValue() };

		std::cout << "Enter one of the following: +, -, *, or /: ";
		char ch{};
		std::cin >> ch;

		if (ch == '+')
				std::cout << first_value << " + " << second_value << " is " << first_value+second_value << '\n';
		else if (ch == '-')
				std::cout << first_value << " - " << second_value << " is " << first_value-second_value << '\n';
		else if (ch == '*')
				std::cout << first_value << " * " << second_value << " is " << first_value*second_value << '\n';
		else if (ch == '/')
				std::cout << first_value << " / " << second_value << " is " << first_value/second_value << '\n';
		else
				std::cout << "Nothing";

		return 0;
}
