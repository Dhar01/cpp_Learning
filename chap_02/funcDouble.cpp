#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    return input;
}

int main()
{
    // creating a variable and calling function in it through
    // uniform initialization
    int num{ getValueFromUser() };

    std::cout << num << " doubled is: " << num*2 << '\n';

    return 0;
}