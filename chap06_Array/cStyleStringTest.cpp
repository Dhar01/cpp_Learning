#include <iostream>
#include <iterator>     // for std::size

// figuring out the actual sting length

int main()
{
    char myString[] { "String" };
    const int length{ static_cast<int>(std::size(myString)) };

    std::cout << myString << " has " << length << " characters.\n";

    for(int index{ 0 }; index < length; ++index)
        std::cout << static_cast<int>(myString[index]) << " ";

    std::cout << '\n';

    return 0;
}