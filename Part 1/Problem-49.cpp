/*
  Pascal's triangle.

  Pascal's triangle is built by the following rules:
  1 - The first line is consit of one number - 1;
  2 - The first and last of these numbers are 1 and all others are calculated as the sum of two numbers
  standing in the previous line above from the left to the right.
*/

#include <iostream>
using namespace std;

int main () 
{
  int rows;
  cin >> rows;
  for (int i = 0; i < rows; i++) {
        int value = 1;
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
  }
}
