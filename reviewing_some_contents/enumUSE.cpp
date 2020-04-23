// where we should use enum
// instead of using magic numbers
// use enum
#include <iostream>

enum ParseResult
{
    SUCCESS = 0,
    ERROR_OPENING_FILE = -1,
    ERROR_READING_FILE = -2,
    ERROR_PARSING_FILE = -3
};

ParseResult readFileContents()
{
    if (!openFile())
        return ERROR_OPENING_FILE;
    else if (!readFile())
        return ERROR_READING_FILE;
    else if (!parseFile())
        return ERROR_PARSING_FILE;
    else
        return SUCCESS;
}

if (readFileContents() == SUCCESS)
{
    // do something
}
else
{
    // print error message
}
