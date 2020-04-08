// automatic duration of local variables

#include <iostream>

void incrementAndPrint()
{
    int value{ 1 };     // automatic duration by default
    ++value;
    std::cout << value << '\n';
}

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    return 0;
}