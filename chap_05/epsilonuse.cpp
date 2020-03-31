#include <cmath>    // for std::abs()

// not great
// epsilon is an absolute value
bool isAlsmostEqual(double a, double b, double epsilon)
{
    return std::abs(a - b) <= epsilon;
}

/* std::abs() is function that returns the absolute value of its
    argument */

#include <cmath>
#include <algorithm>    // std::mas

bool approximatelyEqual(double a, double b, double epsilon)
{
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
}