#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter you full name: ";
    std::string name;
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::string age;
    std::cin >> age;

    // this code will return error
    std::cout << "Your name is " << name << 
        " and your age is " << age << '\n';

    return 0;
}