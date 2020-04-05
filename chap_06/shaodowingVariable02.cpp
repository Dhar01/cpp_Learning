// shadowing of global variables

#include <iostream>

int value{ 5 };

void foo()
{
    std::cout << "global variable value: " << value << '\n';
}

// avoid variable shodowing
// use 'g_' prefix on global variable

int main()
{
    int value{ 7 };

    ++value;        // increments local value, not global

    /* as global variable are part of the global namespace, we
        can use the scope operator(::) with no prefix to tell
        the compiler, we mean the global variable instead of the
        local variable. */
    --(::value);

    std::cout << "local variable value: " << value << '\n';
    std::cout << "global variable value: " << ::value << '\n';

    foo(); // it will also print the minus value because of prefix minus

    return 0;
}