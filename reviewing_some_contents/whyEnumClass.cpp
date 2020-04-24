#include <iostream>

int main()
{
    enum Color
    {
	red,
	blue,
    };

    enum Fruit
    {
	banana,
	apple,
    };

    Color color{ red };
    Fruit fruit{ banana };

    if (color == fruit)	    // comparison of two values with different enumeration types.
	std::cout << "color and fruit are equal\n";
    else
	std::cout << "color and fruit are not equal\n";

    return 0;
}
