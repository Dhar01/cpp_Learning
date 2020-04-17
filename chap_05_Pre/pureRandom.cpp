// using system clock to generate random number

#include <iostream>
#include <cstdlib>      // srand(), rand()
#include <ctime>        // std::time()

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int count{ 1 }; count <= 100; ++count)
    {
        std::cout << std::rand() << '\t';

        if (count % 5 == 0)
            std::cout << '\n';
    }

    return 0;
}