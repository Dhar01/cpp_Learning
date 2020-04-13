#include <iostream>
#include <cstdlib>      // needed for exit

void cleanup()
{

}

int main()
{
    std::cout << 1;
    cleanup();

    exit(0);

    std::cout << 2;
    return 0;
}