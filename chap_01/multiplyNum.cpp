#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num{ 0 };
    std::cin >> num;

    /*
    num = num * 2  < works but not a good solution.

    If we again want to use the user's input number, we won't do
    anything because the value will be changed here.
    */

    /* 
    int doublenum{ num * 2} is mostly a good solution.
    */

    //preferred solution is below:
    std::cout << "Double that number is: " << num * 2 << '\n';

    // from quiz part: modifying this code
    std::cout << "Triple " << num << " is: " << num * 3 << '\n';

    return 0;
}