#include <iostream>

void value;     // won't work

// this func doesn't have any return value
void writeValue(int x)
{
    std::cout << "The value of x is: " << x << '\n';
}

// no return value
void noReturn(int x)
{
    return 5;   // error
}

// deprecated function

int getValue(void)      // void here means no parameter
{
    int x;
    std::cin >> x;
    return x;
}

// equivalent and preferred function
int getValue1()     // empty func param is an implicit void
{
    int x;
    std::cin >> x;
    return x;
}

/* use an empty paremeter list instead of void to indicate that
    a function has no parameter */