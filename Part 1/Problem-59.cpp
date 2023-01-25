/*
  One of the most basic arithmetic operation is comparison.
  In this problem you need to write a function char getSign (int, int) that will compare two given integers and return only "<" , ">" or "=".
*/

#include <iostream>

using namespace std;

int getSign (int a, int b)
{
  if (a < b) cout << "<";
  else {
    if (a > b) cout << ">";
    else cout << "=";
  }
  return a;
}
int main ()
{
    int a, b;
    cin >> a >> b;
    getSign(a, b);
}
