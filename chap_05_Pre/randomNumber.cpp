// generating pseudo-random number generation
#include <iostream>

unsigned int PRNG()
{
    // initial starting seed is 5323
    static unsigned int seed{ 5323 };

    /* taking the current seed and generating a new 
    value from it. Due to our use of large constants
    and overflow, it would be hard for someone causally
    predict what the next number is going to be from the
    previous one */
    seed = 8253729 * seed + 2396403;

    return seed % 32768;
}

int main()
{
    for (int count{ 1 }; count <= 100; ++count)
    {
        std::cout << PRNG() << '\t';

        if (count % 5 == 0)
            std::cout << '\n';
    }

    return 0;
}