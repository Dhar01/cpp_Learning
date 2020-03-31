#include <iostream>


void isEven(int x)
{
    if (( x%2 ) == 0)
	std::cout << x << " is even.";
    else
	std::cout << x << " is odd.";
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    isEven(x);

    return 0;
}
