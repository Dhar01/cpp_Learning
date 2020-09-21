#include <iostream>

int main()
{
    constexpr int numRows{ 10 };
    constexpr int numCols{ 10 };

    // declaring a 10x10 array
    int product[numRows][numCols] {};

    // calculate a multiplication table
    for (int row{ 1 }; row < numRows; ++row)
        for (int col{ 1 }; col < numCols; ++col)
            product[row][col] = row*col;

    // print the table
    for (int row{1}; row < numRows; ++row)
    {
        for (int col{1}; col < numCols; ++col)
            std::cout << product[row][col] << '\t';
        
        std::cout << '\n';
    }
    
    return 0;
}