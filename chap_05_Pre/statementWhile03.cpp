#include <iostream>

int main()
{
    int count{ 1 };
    while (count <= 50)
    {
        /* printing pad numbers under 10 with
            a leading 0 for formatting. */
        if (count < 10)
            std::cout << "0" << count << ' ';
        else
            std::cout << count << ' ';
        
        // if loop variable is divisible by 10
        // print newline
        if (count % 10 == 0)
            std::cout << '\n';

        ++count;
    }

    return 0;
}