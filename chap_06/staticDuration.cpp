// static duration of local variables

#include <iostream>

void incrementAndPrint()
{
    static int s_value{ 1 };
    ++s_value;
    std::cout << s_value << '\n';
}

/* using static keyword on local variables,
    it's behave like global variables
    
    Also to declare static variables,
    please use 's_' prefix */

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    return 0;
}

/* one of the most common uses for static duration
    local variables is for unique ID generators.

    int gerateID()
    {
        static int s_itemID{ 0 };
        return s_itemID++;
    }

    static variables offer some benefit of global
    variables while limiting their visibility to
    block scope.

    it can't tapered with by other functions.
*/