// debuging tactics: using logger

/* example here is using plog.
    search online how to use it. */

#include <iostream>
#include <plog/Log.h>       // step-1: include the logger header

/* Log file has few advantages:
    1. information written to a LOG file separated from
        the program's output.
    2. log file can be sent easily to other people for diagnosis.
*/

int getUserInput()
{
    LOGD << "getUserInput() called";
    // LOGD is defined by the plog library

    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

int main()
{
    // step-2: initialize the logger
    plog::init(plog::debug, "Logfile.txt");

    // step-3: output to the log as if you were writing to the console
    LOGD << "main() called";

    int x{ getUserInput() };
    std::cout << "You entered: " << x;

    return 0;
}
