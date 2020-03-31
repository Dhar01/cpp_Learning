#include <iostream>

int main()
{
    unsigned short us;
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;

    /* avoid using unsigned number:
        1. problems will be occur with subtraction like 3-5
        2. mixing signed and unsigned numbers can give unexpected
            result.
    */

    /* where to use unsigned numbers?
        1. dealing with bit manipulaton
        2. sometimes on array indexing
        3. in the time of developing embedded system processor
    */

    return 0;

}