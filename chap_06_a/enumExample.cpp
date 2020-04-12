#include <iostream>

enum Color  // name start with a capital letter
{
    /* enumerators must be given names either
    using all caps like below OR
    
    prefixed with a k and intercapped.
    Example: kColorBlack */
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA,
};

Color paint = COLOR_WHITE;
Color house(COLOR_BLUE);
Color apple{ COLOR_RED };

enum Feeling
{
    HAPPY,
    SAD,
    COLOR_BLACK,    // error: same name in namespace
    // write like below, more acceptable
    FEELING_BLACK,
}