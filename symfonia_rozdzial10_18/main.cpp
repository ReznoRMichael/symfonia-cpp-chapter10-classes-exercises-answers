#include <iostream>

using namespace std;

char* fff( int ) { return "global function fff( int )"; }

class Tclass
{
    char* fff( char ) { return "class member function fff( char )"; }

    char* fff( int ) { return "class member function fff( int )"; }

    public:

    void otherFunction()
    {
        cout << fff( 1 ) << endl;
    }
};

int main()
{
    Tclass object;

    object.otherFunction();

    return 0;
}
