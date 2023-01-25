/*
  Write a function bool myXor (bool x, bool y) that realizes the function of "exclusive OR" on two boolean variables x and y.
  myXor function have to return "true", if exactly one of its arguments x or y, but not both are "true".
*/

#include <iostream>

using namespace std;

int myXor (bool x, bool y) 
{
    if (x == 1 && y == 0) {
        return 1;
    } else if (x == 0 && y == 1) {
        return 1;
    } else {
        return 0;
    }
}
int main () 
{
    int x, y;
    cin >> x >> y;
    cout << myXor(x, y);
}
