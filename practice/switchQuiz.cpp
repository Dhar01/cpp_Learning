#include <iostream>

int calculate(int x, int y, char op)
{
    switch(op)
    {
	case '+':
	    return x+y;
	case '-':
	    return x-y;
	case '*':
	    return x*y;
	case '/':
	    return x/y;
	case '%':
	    return x%y;
	default:
	    std::cout << "no inputs";
	    return 0;
    }
}


int userInput()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    return x;
}

int main()
{
    int num1{ userInput() };
    int num2{ userInput() };

    std::cout << "Enter your operation: ";
    char ch{};
    std::cin >> ch;

    std::cout << calculate(num1, num2, ch);

    return 0;
}
