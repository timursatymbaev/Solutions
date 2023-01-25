// Write a function bool election (bool x, bool y, bool z) that returns the value (true or false), which is most common among the values of its arguments x, y, z.

#include <iostream>

using namespace std;

int election (bool x, bool y, bool z) 
{
    if (x == y || x == z) {
        cout << x;
    } else {
        if (y == z) {
            cout << y;
        }
    }
    return x;
}
int main () 
{
    bool x, y, z;
    cin >> x >> y >> z;
    election(x, y, z);
}
