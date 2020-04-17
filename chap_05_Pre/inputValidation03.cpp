// error case 3
// extraction falis

// detect extraction and fixing
if(std::cin.fail())
{
    std::cin.clear();
    std::cin.ignore(32767, '\n');
}

// merging to the previous code - inputValidation2
double getDouble()
{
    while(true)
    {
        std::cout << "Enter a double value: ";
        double x;
        std::cin >> x;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return x;
        }       
    }
}