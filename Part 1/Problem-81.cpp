/*
  Given two numbers, your task is to output numbers by changing them with each other.
  You have to develop "swap2" function.
  Note. The program have to use pointer.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int func (unsigned int *x)
{
	swap(x[0], x[1]);

	cout << x[0] << " " << x[1];

	return 0;
}

int main () 
{
	unsigned int *x = new unsigned int[2];

	cin >> x[0] >> x[1];

	func(x);

	delete x;

	return 0;
}
