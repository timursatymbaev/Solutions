// Given 3 positive real numbers x, y, z. Output "YES" if it is possible to construct a triangle with side lengths x, y, z. Output "NO" otherwise.

#include <iostream>

using namespace std;

int main () 
{
    double x, y, z;
    cin >> x >> y >> z;
    if ((x + y) > z && (y + z) > x && (z + x) > y) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
