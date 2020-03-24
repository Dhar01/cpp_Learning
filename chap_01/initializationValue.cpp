#include <iostream>

int main()
{
	int width;
	width = 5;	// copy assignment

	// copy initialization
	int width1 = 5;

	// direct initialization
	int height( 5 );

	/* we use direct initialization from c++11 in most
	 * cases because of the performance boost
	 */

	// brace initialization
	int brace{ 5 };		// direct brace initialization (preferred)
	int brace2 = { 5 };	// copy brace initialization

	/* direct initialization can't be used for all types of
	 * initialization such as initializing an object with a list of
	 * data.
	 */

	int brace3{};		// zero initialization to value 0

	int brace4 { 4.5 };	// double value not fit into int

	/* note: in the above snippet, the fractional part will show as an
	 * error on BRACE initialization. But on COPY and DIRECT initialization,
	 * they will drop the fractional part. That will be a mistake.
	 *
	 * It's a good point to use brace initialization.
	 */

	/*
	 * int x{0};	    // use when you want to use the value
	 *
	 * int x{}; 	// use if you want to change the value immediately
	 */

	// multiple assignment on BRACE
	int e{ 9 }, f{ 7 };

	int q, p{ 4 };

	return 0;
}
