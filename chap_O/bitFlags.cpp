#include <bitset>       // for std::bitset
#include <iostream>

// std::bitset<8> mybitset{};  // 8 bits in size means room for 8 flags


int main()
{
    std::bitset<8> bits{ 0b0000'0101 };

    bits.set(3);    // set bit position 3 to 1
    bits.flip(4);   // flip bit 4
    bits.reset(4);  // set 4 back to 0

    std::cout << "All the bits: " << bits << '\n';
    std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
    std::cout << "Bit 4 has value: " << bits.test(4) << '\n';

    return 0;
}

/* std::bitset has 4 key functions:
    1. test() allows us to query whether a bit is a 0 or 1
    2. set() allows us to turn a bit on 
    3. reset() allows us to turn a bit off
    4. flip() allows us to flip a bit value from 0 to 1 or 1 to 0
*/
