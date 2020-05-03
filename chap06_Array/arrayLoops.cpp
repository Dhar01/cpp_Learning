#include <iostream>
#include <iterator>

int main()
{
    int score[] { 84, 92, 76, 81, 56 };
    int numStudents{ static_cast<int>(std::size(score)) };

    int totalScore{ 0 };

    for (int student{ 0 }; student < numStudents; ++student)
        totalScore += score[student];
    
    auto averageScore{ static_cast<double>(totalScore) / numStudents };

    std::cout << averageScore << '\n';

    return 0;
}