// Find and show the result of next expression: "x^2 + y - z / 2", where 'z' is even number.

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << pow(x, 2) + y - (z / 2);
}
