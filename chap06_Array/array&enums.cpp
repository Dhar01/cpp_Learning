#include <iostream>

enum StudentNames
{
    KENNY,
    KYLE,
    STAN,
    BUTTERS,
    CARTMAN,
    MAX_STUDENTS
};

int main()
{
    int testScores[MAX_STUDENTS];
    testScores[STAN] = 76;

    return 0;
}