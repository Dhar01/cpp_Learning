#include <iostream>
#include <typeinfo>	// for typeid()

int main()
{
    short a{ 4 };
    short b{ 5 };
    std::cout << typeid( a+b ).name() << " " << a+b << '\n';
    return 0;
}
