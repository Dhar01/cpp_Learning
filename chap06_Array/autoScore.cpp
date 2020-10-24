#include <iostream>

int main()
{
    constexpr int scores[] { 84, 92, 78, 81, 56 };
    int maxScore{ 0 };

    for (auto score : scores)
    {
        if (scores > maxScore)
        {
            maxScore = score;
        }
    }

    std::cout << "The best score was " << maxScore << '\n';

    return 0;
}