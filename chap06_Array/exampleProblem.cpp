#include <cstring>
#include <iostream>
#include <iterator>	    // for std::size

int main()
{
    // ask the user to enter a stirng
    char buffer[255];
    std::cout << "Enter a string: ";
    std::cin.getline(buffer, std::size(buffer));

    int spacesFound{ 0 };
    int bufferLength{ static_cast<int>(std::strlen(buffer)) };

    for (int index{ 0 }; index < bufferLength; ++index)
    {
	if (buffer[index] == ' ')
	    ++spacesFound;
    }

    std::cout << "You typed " << spacesFound << " spaces!\n";

    return 0;
}
