/*
  A chessboard pattern is a pattern that satisfies the following conditions:

  - The pattern has a rectangular shape.
  - The pattern contains only the characters '.' (a dot) and 'X' (an uppercase letter X).
  - No two symbols that are horizontally or vertically adjacent are the same.
  - The symbol in the lower left corner of the pattern is '.' (a dot).

  You are given two numbers. N is a number of rows and M is a number of columns. 
  Write a program that generates the chessboard pattern with these dimensions, and outputs it.
*/

#include <iostream>
using namespace std;

int n, m;

int main () 
{

  cin >> n >> m;
  bool first = n % 2, second = m % 2;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (first) cout << '.';
      else cout << 'X';
      first = !first;
    }
    cout << endl;
    if (!second) first = !first;
  }

  return 0;
}
