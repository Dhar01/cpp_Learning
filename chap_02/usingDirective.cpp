#include <iostream>
using namespace std;

/* 
by using the "using" directive, we don't have to write
std always. But this is a bad practice.

why? 
*/

int main()
{
    cout << "Hello, world!";
    return 0;
}

/*
Because namespace was create to not to use this.

we should Avoid using directives (such as using namespace std;) 
at the top of our program. They violate the reason why namespaces
were added in the first place.
*/