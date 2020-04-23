#include <iostream>

enum Color
{
    BLACK,      // assigned 0
    WHITE,      // assigned 1
    RED,        // assigned 2
    BLUE,       // assigned 3
    GREEN,      // assigned 4
    YELLOW,     // assigned 5
};

enum Animal
{
    CAT = -3
    DOG,        // assigned -2
    PIG,        // assigned -1
    HORSE = 5,
    CHIKEN = 5, // shares same value as HORSE
    GIRAFFE,    // assigned 6
}

// sharing same value should be avoided

Color paint = WHITE;
Color house( BLUE );
Color apple{ RED };

// as enumerated values assigned to integers
// they can be assigned to integer variables

int mypet { HORSE };
std::cout << mypet;

// Thus
Animal animal = 5;      // cause compiler error

// to do so, follow this
Animal animal = static_cast<animal>(5); // ugly

// std::cin won't work on enumeration
// to read an integer, force the compiler
int inputColor;
std::cin >> inputColor;

Color color{ static_cast<Color>(inputColor) };

/* as enumerated type is considered distinct type,
trying to assign enumerators form one to another
cause compiler error */

Animal animal{ BLUE };      // error

// to use a different integer type for enumerators
enum Color : std::uint_least8_t
{
    BLACK,
    RED,
};

// you can use unsigned integer on enums
// we need to specify the enum base when we
// forward declaring an enum
enum Color;     // error
enum Color : int;       // okay




