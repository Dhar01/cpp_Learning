#include <iostream>

int main()
{
    bool b;

    bool b1{ true };
    bool b2{ false };
    b1 = false;
    bool b3 {};     // default initialize to false

    bool b4{ !true }    // false
    bool b5{ !false }   // true

    return 0;
}