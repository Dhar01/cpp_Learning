#include <iostream>
#include <iterator>     // for std::size

int main()
{
    int scores[] { 84, 92, 81, 56 };
    int numStudents{ static_cast<int>(std::size(scores)) };

    int maxScore{ 0 };
    for(int student{ 0 }; student < numStudents; ++student)
        if (scores[student] > maxScore)
            maxScore = scores[student];
        
    std::cout << "The best scores was " << maxScore << '\n';

    return 0;
}