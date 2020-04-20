// using a literal constant
int array[5];

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