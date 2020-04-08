// another example of fault of using namespace

int cout()
{
    return 5;
}

int main()
{
    using namespace std;

    cout << "Hello, world!\n";

    return 0;
}