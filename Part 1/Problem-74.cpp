/*
  Given a positive integer N and a sequence of N elements.
  You have to display given sequence in reverse order.
  Note. The program is forbidden to declare arrays, and use the loops (even for input).
*/

#include <iostream>

using namespace std;

int x, y, z = 0;

int func (int f) 
{
	if (z < x) {
		z++;
		cin >> y;
		cout << func(y) << " ";
	}
	else return y;
	
	return f;
}

int main () 
{
	cin >> x;
	func(x);
	return 0;
}
