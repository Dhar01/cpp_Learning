#include <iostream>

int main()
{
    int count{ 1 };
    int sum{ 0 };

    while (count <= 5)
    {
        int x{};

        std::cout << "Enter integer #" << count << ':';
        std::cin >> x;

        sum += x;

        ++count;
    }

    std::cout << "The sum of all numbers entered is: " << 
        sum << '\n';

    return 0;
}