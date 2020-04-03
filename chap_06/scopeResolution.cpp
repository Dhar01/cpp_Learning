#include <iostream>
 
void print() // this print lives in the global namespace
{
	std::cout << " there\n";
}
 
namespace foo
{
	void print() // this print lives in the foo namespace
	{
		std::cout << "Hello";
	}
}
 
int main()
{
	foo::print();   // call foo::print()
	::print();      // calling global namespace print()
    
	return 0;
}