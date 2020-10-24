#include <iostream>
#include <iterator>

void printElements( int (&arr)[4])
{
    int length{ static_cast<int>(std::size(arr)) };

    for ( int i{ 0 }; i < length; ++i )
    {
        std::cout << arr[i] << '\n';
    }
}

int main()
{
    int arr[] { 99, 20, 14, 80 };
    printElements(arr);

    return 0;
}