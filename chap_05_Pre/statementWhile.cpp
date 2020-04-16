#include <iostream>

int main()
{
    int count{};
    while (count < 10)
    {
        std::cout << count << ' ';
        ++count;
    }
    std::cout << "done!";

    return 0;
}