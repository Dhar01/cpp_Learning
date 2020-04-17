// error case 2
// extraction succeeds but with extraneous input

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;
    std::cin.ignore(32767, '\n');

    return x;
}