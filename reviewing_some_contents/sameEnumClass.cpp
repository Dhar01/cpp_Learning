// comparing value from same enum class
#include <iostream>

int main()
{
    enum class Color
    {
	red,
	blue,
    };

    Color color{ Color::red };

    if (color == Color::red)
	std::cout <<  "The color is red!\n";
    else if (color == Color::blue)
	std::cout << "The color is blue\n";

    return 0;
}
