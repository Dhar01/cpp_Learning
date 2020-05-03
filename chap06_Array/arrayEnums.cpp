#include <iostream>

enum StudentNames
{
    KENNY,
    KYLE,
    STAN,
    BUTTERS,
    CARTMAN,
    MAX_STUDENTS,   // 5
};

int main()
{
    int testScores[MAX_STUDENTS];
    testScores[STAN] = 76;

    return 0;
}