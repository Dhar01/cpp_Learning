#include <iostream>

/* since C-style stings are arrays, we can change
    individual characters in the string. */

int main()
{
    char myString[] { "String" };
    myString[1] = 'p';

    std::cout << myString << '\n';

    return 0;
}