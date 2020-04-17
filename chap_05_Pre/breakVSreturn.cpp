#include <iostream>

int breakOrReturn()
{
    while(true)
    {
        std::cout << "Enter 'b' to break or 'r' to return: ";
        char ch;
        std::cin >> ch;

        if (ch == 'b')
            break;
        
        if (ch == 'r')
            return 1;
        /* it will cause the function to immediately
            return to the caller */
    }

    std::cout << "We broke out of the loop\n";

    return 0;
}

int main()
{
    int returnValue{ breakOrReturn() };
    std::cout << "Function breakOrReturn returned " << returnValue << '\n';

    return 0;
}