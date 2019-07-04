#include <iostream>

using namespace std;

class Tclass
{

public:

    int seconds;

    // constructor and it's overloading

    Tclass(int s)
    {
        seconds = s;
    }
    Tclass(int m, int s)
    {
        seconds = (60 * m) + s;
    }
    Tclass(int h, int m, int s)
    {
        seconds = (60 * h) + (60 * m) + s;
    }

    // destructor

    ~Tclass()
    {
        cout << "The seconds amount were: " << seconds << endl;
    }

    // destructors cannot be overloaded!
    // destructors cannot accept parameters!

    ~Tclass(int s)
    {
        cout << "The seconds amount were: " << seconds << " (overloaded destructor)" << endl;
    }
};

Tclass testSeconds(100);
Tclass testMinutes(100, 0);
Tclass testHours(1, 100, 0);

int main()
{
    // destructors cannot accept parameters!

    testSeconds.~Tclass(10);

    return 0;
}
