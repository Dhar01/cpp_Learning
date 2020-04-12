#include <iostream>

int main()
{
    struct Employee
    {
        short id;
        int age;
        double wage;
    };

    Employee joe;
    joe.id = 14;
    joe.age = 32;
    joe.wage = 24.15;

    Employee frank;
    frank.id = 15;
    frank.age = 28;
    frank.wage = 18.27;

    int totalAge{ joe.age + frank.age };

    if (joe.wage > frank.wage)
        std::cout << "Joe makes more than Frank.\n";
    else if (joe.wage < frank.wage)
        std::cout << "Joe makes less than Frank.\n";
    else
        std::cout << "Joe and Frank make the same amount.\n";

    // Frank got a promotion
    frank.wage += 2.50;

    // today is joe's birthday
    ++joe.age;

    // faster way to initialize value to struct
    Employee john{ 1, 32, 6000.23 };
    Employee tama{ 2. 26 };
    

    return 0;
}