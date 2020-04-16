#include <iostream>

int main()
{
    int outer{ 5 };

    while (outer >= 1)
    {
	/* outer loop is assigned to inner loop for maintaining
	 * the consistancy */
	int inner = outer;
	while (inner >= 1)
	    std::cout << inner-- << ' ';

	std::cout << '\n';
	--outer;
    }

    return 0;
}
