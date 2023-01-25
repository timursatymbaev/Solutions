// Write a function int min (int a, int b, int c, int d) that find the minimum out of four given numbers.

#include <iostream>
#include <algorithm>

using namespace std;

int minNum (int a, int b, int c, int d) 
{
    int x[4], min;
    x[0] = a;
    x[1] = b;
    x[2] = c;
    x[3] = d;
    min = *min_element(x, x + 4);
    return min;
}
int main () 
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << minNum(a, b, c, d);
}
