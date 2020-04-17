// error case 1
// extraction succeeds but input is meaningless

char getOperator()
{
    while(true)
    {
        std::cout << "Enter one of the following: +, -, *, /: ";
        char op;
        std::cin >> op;

        // check whether input is valid or not
        if (op == '+' || op == '-' || op == '*' || op == '/')
            return op;
        else
            std::cout << "oops, that input is invalid. Please, try again.\n";
        
    }
}