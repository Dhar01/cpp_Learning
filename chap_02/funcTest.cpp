#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";
    doPrint();                          // calling functions
    std::cout << "Ending main()\n";

    return 0;
}