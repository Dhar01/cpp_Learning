#include <iostream>
#include <iterator>
#include <limits>

int main()
{
    // taking input from the user

    int number{};
    
    do
    {
        std::cout << "Enter a number between (1-9): ";
        std::cin >> number;

        if (std::cin.fail())
        {
            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (number < 1 || number > 9);
    
    // printing the array

    constexpr int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    constexpr int arraysize{ std::size(array) };

    for (int element{ 0 }; element < arraysize; ++element)
    {
        std::cout << array[element] << ' ';
    }
    
    std::cout << '\n';

    // seearching the array

    for (int element{ 0 }; element < arraysize; ++element)
    {
        if (array[element] == number)
        {
            std::cout << "The number " << number << " has index " << element << '\n';
            break;
        }
    }

    return 0;
}