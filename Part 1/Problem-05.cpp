// Two numbers are entered, you need to find if first number is multiple to second. First number must be bigger than second.

#include <iostream>

using namespace std;

int main () 
{
  int a, b;
  cin >> a >> b;
  cout << (a % b ? "no" : "yes");
}
