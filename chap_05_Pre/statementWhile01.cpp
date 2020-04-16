// infinite loop

#include <iostream>

int main()
{
    int count{};
    while (count < 10)
        std::cout << count << ' ';
    
    return 0;
}

// press ctrl+c for keyboard interrupt