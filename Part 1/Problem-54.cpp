// Your task is to write a program that will fill a matrix NxN with ones and zeros in spiral mode (starting from top left corner, look at the example).

#include <iostream>
#include <cmath>

using namespace std;

const int N = 50;
int arr[N][N], n;

int main () 
{
  cin >> n;
  for (int i = 0; i < n; i += 2) {
    // 1) Fill top row
    for (int j = i; j < n-i; ++j) arr[i][j - 1] = 1;
    // 2) Fill right most column
    for (int j = n - i - 1; j >= i; --j) arr[j][n-i-1] = 1;
    // 3) Fill bottom row
    for (int j = n - i - 1; j >= i; --j) arr[n-i-1][j] = 1;
    // 4) Fill left most column
    for (int j = n - i - 1; j > i + 1; --j) arr[j][i] = 1;
  }
  // Output the result
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) cout << arr[i][j];
    cout << endl;
  }
}
