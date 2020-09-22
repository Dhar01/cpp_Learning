#include <iostream>

void changeArray(int *ptr)
{
    *ptr = 5;
}

int main()
{
    int array[] { 1, 1, 2, 3, 5, 8, 13, 21 };
    std::cout << "Element 0 has value: " << array[0] << '\n';

    changeArray(array);

    std::cout << "Element 0 has value: " << array[0] << '\n';

    return 0;
}
