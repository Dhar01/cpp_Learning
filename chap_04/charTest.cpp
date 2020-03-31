#include <iostream>

int main()
{
    char ch2{ 'a' };    // preferred
    char ch1{ 97 };     // not preferred

    std::cout << 'c' << '\n';

    char ch3{ 'a' };
    std::cout << ch3 << '\n';
    
    char ch4{ 98 };
    std::cout << ch4 << '\n';

    return 0; 
}