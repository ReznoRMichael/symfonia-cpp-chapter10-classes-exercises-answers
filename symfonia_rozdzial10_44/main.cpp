#include <iostream>

using namespace std;

// error: non-member 'a' cannot be declared 'mutable'
mutable int a;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
