/*
  Input two real numbers (x and y) and calculate the following mathematical expression:
  
  (x - 2y) * x
  -------------
       -2y
*/

#include <iostream>

using namespace std;

int main () 
{
    float x, y;
    cin >> x >> y;
    cout << ((x - (2 * y)) * x) / -(2 * y);
}
