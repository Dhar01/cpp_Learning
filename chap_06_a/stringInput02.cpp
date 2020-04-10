/* mixing std::cin and std::getline will cause
    unexpected behaviour.*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    // to avoid unexpected behaviour
    // you can check by uncomment it
    std::cin.ignore(32767, '\n');

    std::cout << "Now enter your name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << ", you picked "
        << choice << '\n';

    return 0;
}