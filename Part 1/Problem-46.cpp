/*
  For given n output the array in down-to-up and right-to-left way. Look at the example for n = 4:
  
  16 12 8 4
  15 11 7 3
  14 10 6 2
  13  9 5 1
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    int n;
    cin >> n;
    int result = pow(n, 2);
    for (int i = result; i >= result - n + 1; --i) {
        for (int j = i; j >= i - n * (n - 1); j -= n) {
            cout << j << " ";
        }
        cout << endl;
    }
}
