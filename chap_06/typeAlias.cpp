/* advantage of using type alias-
 * 1. they can be used to hide platform specific details.
 * 2. change the underlying type of an object without
 *	having to change lots of code.
 * 3. in advanced c++, long name data types can be alias
 *	for better code readability.
 */

#include <iostream>

// writing platform independent code

int main()
{
#ifdef INT_2_BYTES
    using int8_t = char;
    using int16_t = int;
    using int32_t = long;
#else
    using int8_t = char;
    using int16_t = short;
    using int32_t = int;
#endif

    return 0;
}
