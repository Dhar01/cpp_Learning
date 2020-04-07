// external global variable definations

// define non-initialized external global variable
int g_x;

// define initialized const external global variable
extern const int g_x{ 1 };

// define initialized constexpr external global variable
extern constexpr int g_x{ 2 };

// FORWARD declarations

// for non-constant global variable
extern int g_y;

// for const global variable
extern const int g_y;

// constexpr variables can't be forward declared
extern constexpr int g_y;   // not allowed