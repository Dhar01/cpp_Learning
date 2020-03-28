// learning debugging tactics: validating code flow.

#include <iostream>

int getValue()
{

std::cerr << "getValue() called\n";

    return 4;
}

/*
*   when adding temporary debug statements, it can be helpful
*   not to indent them. This makes them easier to find for later
*   removal. 
*/

int main()
{

std::cerr << "main() called\n";

    // std::cout << getValue;       // here was the problem
    std::cout << getValue();        // solution: parenthesis.

    return 0;
}
