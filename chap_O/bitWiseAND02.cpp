#include <iostream>
#include <bitset>

// previous bitwise AND can be written like this.

int main()
{
	std::cout << (std::bitset<4>{ 0b0001 } & std::bitset<4>{ 0b0011 } & std::bitset<4>{ 0b0111 });
 
	return 0;
}