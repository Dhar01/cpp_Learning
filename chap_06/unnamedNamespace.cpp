// unnamed namespace or anonymous namespace
#include <iostream>

namespace	// no name declared
{
    void doSomething()
    {
	std::cout << "v1\n";
    }
}

int main()
{
    doSomething();

    return 0;
}

/* unnamed namespace isn't useless
 * all identifiers inside an unnamed namespace are treated
 * as if they had internal linkage, which means that
 * the content of an unnamed namespace can't be seen
 * outside of the file
 */
