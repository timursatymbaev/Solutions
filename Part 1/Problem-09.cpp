// Input two numbers (k and c) and calculate the value of y for x = 0.1, 1, 5, where y = kx + c.

#include <iostream>

using namespace std;

int main ()
{
    float x1 = 0.1, x2 = 1, x3 = 5, k, c;
    cin >> k >> c;

    cout << "x = " << x1 << " : y = " << (k * x1) + c << endl;
    cout << "x = " << x2 << " : y = " << (k * x2) + c << endl;
    cout << "x = " << x3 << " : y = " << (k * x3) + c << endl;
} 
