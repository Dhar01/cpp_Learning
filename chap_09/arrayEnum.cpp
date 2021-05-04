#include <iostream>

enum Students
{
    kenny,
    kyle,
    stan,
    butters,
    cartman,
    max_students
};

int main()
{
    int testScores[max_students] {};
    testScores[stan] = 76;

    return 0;
}