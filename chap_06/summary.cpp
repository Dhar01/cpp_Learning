int x;      // local variable
static int s_x;     // static local variable
int *x{ new int };  // dynamic variable

void foo(int x);        // function parameter

int g_x;        // external non-constant global variable
static int g_x;         // internal non-constant global variable
constexpr int g_x{ 1 };     // internal constant global variable

extern constexpr int g_x{ 1 };      // external constant global variable
inline constexpr int g_x{ 1 };      // inline constant global variable


// FORWARD declartion summary
void foo(int y);        // function forward declartion

extern int g_x;     // non-constant global variable forward declaration

extern const int g_x;   // constant global variable forward decalration

// not allowed, constexpr cannot be forward declared
extern constexpr int g_x;       // constexpr global variable forward declaration
