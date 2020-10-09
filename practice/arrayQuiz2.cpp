#include <iostream>
#include <iterator> // for std::size

int main()
{
    int number{};

    do{
        std::cout << "Enter number between 1 and 9: ";
        std::cin >> number;

        // for invalid input
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
    } while(number < 1 || number > 9);

    constexpr int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5};
    constexpr int arrayLength{ std::size(array) };

    for(int index{0}; index < arrayLength; ++index)
    {
        if (array[index] == number)
        {
            std::cout << "The number " << number << " has index " << index << '\n';
            break;
        }
    }
    return 0;
}