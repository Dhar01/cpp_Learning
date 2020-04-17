#include <iostream>

int sumTo(int x)
{
    int sum{};

    for(int count{ 0 }; count <= x; ++count)
	sum += count;

    return sum;
}

int main()
{
    std::cout << "Enter your integer: ";
    int num{};
    std::cin >> num;

    std::cout << sumTo( num ) << '\n';

    return 0;
}
