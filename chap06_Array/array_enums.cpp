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

/* 
why use max_students on enum?

Because if we want to add another students
in the enumeration, the code in main() func
still works. 

this goes for only enum.

for enum class, you have convert it into the
integer with static_cast 
*/