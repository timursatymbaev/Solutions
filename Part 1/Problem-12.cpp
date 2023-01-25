// Given three real numbers x, y, z. Output "YES", if x < y < z. Output "NO", otherwise.

#include <iostream>

using namespace std;

int main ()
{
    float x, y, z;
    cin >> x >> y >> z;
    
    if (y > x && y < z) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
