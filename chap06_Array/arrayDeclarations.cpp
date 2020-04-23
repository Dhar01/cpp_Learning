// using a literal constant
int array[5];

// declaring fixed array
int prime[5] = { 2, 3, 5, 7, 11 };

// uniform initialization
int prime[] { 4, 5, 5}      //okay

// using a symbolic constant
const int arrayLength = 5;
int array[arrayLength];

// using an enumerator
enum ArrayElements
{
    MAX_ARRAY_LENGTH = 5
};

int array[MAX_ARRAY_LENGTH];



// okay but don't do this
// using a macro symbolic constant

#define ARRAY_LENGTH 5
int array[ARRAY_LENGTH];