/*
  Given real numbers a, b, c. Double each number if the following inequality holds: а <= b <= с. 
  Change every number to it’s absolute value, otherwise. For each test, output a, b, c.
*/

#include <iostream>

using namespace std;

int main() {
  double a, b, c;

	cin >> a >> b >> c;

  if(a <= b && b <= c) {
		a *= 2;
		b *= 2;
		c *= 2;
	} else {
		if (a < 0) {
			a = a * (-1);
		}
		if (b < 0) {
			b = b * (-1);
		}
		if (c < 0) {
			c = c * (-1);
		}
	}
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}
