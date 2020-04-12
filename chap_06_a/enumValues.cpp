#include <iostream>

int main()
{
    enum Color
    {
        COLOR_BLACK,    // 0
        COLOR_RED,      // 1
        COLOR_WHITE,    // 2
    };

    Color paint(COLOR_WHITE);
    std::cout << paint << '\n';

    Color color = static_cast<Color>(5);

    int inputColor;
    std::cin >> inputColor;

    Color color{ static_cast<Color>(inputColor) };

    // if we want to use another integer type
    enum Color : std::uint_least8_t
    {
        COLOR_BLACK,
        COLOR_RED,
    };

    // we can use unsigned integer safely on enumerator
    enum Color : int;
    {
        COLOR_RED,
        COLOR_WHITE,
    };

    return 0;
}