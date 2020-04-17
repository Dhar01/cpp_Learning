// nested for loops

#include <iostream>

int main()
{
    for (char c{ 'a' }; c <= 'e'; ++c)  // outer loop for letters
    {
        std::cout << c; // print our letter first

        for (int i{ 0 }; i < 3; ++i)    // inner loop on all numbers
            std::cout << i;

        std::cout << '\n';
    }

    return 0;
}