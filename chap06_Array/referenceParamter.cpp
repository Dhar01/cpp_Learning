#include <iostream>

// ref is a reference to the argument passed in, not a copy

void changeN(int &ref)
{
    ref = 6;
}

int main()
{
    int n{ 5 };

    std::cout << n << '\n';

    changeN(n);

    std::cout << n << '\n';

    return 0;
}