/*
  Given a positive integer N and a sequence of N strings.
  You have to display given sequence in reverse order.
  Note. The program is forbidden to declare arrays (only one char array in function is allowed), and use the loops (even for input).
*/

#include <iostream>
#include <string>

using namespace std;

int x, i = 0;
string y;

string func (string f) 
{
	if (i < x) {
		i++;
		cin >> y;
		cout << func(y) << endl;
	}
	else return y;

	return f;
}

int main () 
{
	cin >> x;
	func(y);
	return 0;
}
