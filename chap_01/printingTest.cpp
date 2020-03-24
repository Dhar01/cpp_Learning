#include <iostream>

int main()
{
    std::cout << 5 << std::endl;

    /* endl does two jobs:
    
    1. it moves the cursor to the next line
    2. it flushes the output (shows up on the screen immediately)
    
    when writing text to the console using std::cout usually flushes
    output anyway. so using endl is rarely important.
    */

    int x{ 5 };
    std::cout << x << '\n';

    /* 
    using '\n' is better cause it just moves the cursor to the
    next line. So it performs better.
    */

    std::cout << "x is equal to: " << x << '\n';

    return 0;
}