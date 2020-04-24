#include <iostream>

int main()
{
    enum class Color
    {
	red,
	blue,
    };

    Color color{ Color::blue };

    /* std::cout << color;	    // won't work */
    std::cout << static_cast<int>(color);

    return 0;
}


// using enum class no longer implicitly convert enumerator values to int
