#include <iostream>
#include <string>

int main()
{
    std::string firstName{};
    std::string lastName{};

    std::cout << "First name: ";
    std::cin >> firstName;

    std::cout << "Last name: ";
    std::cin >> lastName;

    // fullName is accessible in the entire if-statement
    if (std::string fullName{ firstName + ' ' + lastName}; fullName.length() > 20)
    {
        std::cout << '"' << fullName << "\" is too long!\n";
    }
    else
    {
        std::cout << "Your name is " << fullName << '\n';
    }

    return 0;
}