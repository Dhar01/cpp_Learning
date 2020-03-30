// debuging tactics: conditionalizing code

#include <iostream>

#define ENABLE_DEBUG    // comment out to disable debugging

int getUserInput()
{

#ifdef ENABLE_DEBUG
std::cerr << "getUserInput() called\n";
#endif

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{

#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif

    int x{ getUserInput() };
    std::cout << "You entered: " << x;

    return 0;
}

/* why we don't use this?
 *  1. this makes code even more clutter
 *  2. if we misspell or forget to include header line, that'll be problem
 */
