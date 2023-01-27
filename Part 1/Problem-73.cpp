/*
  Given a positive integer n. Find the n-th number of Fibonnaci sequence.
  Here is Fibonnaci sequence : 0 1 1 2 3 5 8 13 ...
*/

#include <iostream>

using namespace std;

int x, y = 0, fibX= 0, fibY = 0;

int func (int fib) 
{
	if (y <= x) {
		if (fibX == 0) fibX++;
		else {
			fib = fibX + fibY;
			fibX = fibY;
			fibY = fib;
		}
		y++;
	}
	else return fib;

	fib = func(fib);

	return fib;
}

int main () 
{
	cin >> x;

	cout << func(0);

	return 0;
}
