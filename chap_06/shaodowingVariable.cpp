// shodowing of local variables

#include <iostream>

int main()
{   // outer block
    int apples{ 5 };
    {   // nested block
        std::cout << apples << '\n'; // print the outer block

        int apples{ 10 };
        //apples = 10;

        std::cout << apples << '\n';
    }

    std::cout << apples << '\n';

    return 0;
}