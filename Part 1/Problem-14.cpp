/*
  Given real numbers a, b, c, where a is not 0. Find if a quadratic inequality ах^2 + bx + с = 0 has real roots. 
  If it does, output them. If there are no solutions, output "no solution". Output roots on one line, separated by a whitespace.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
	double a, b, c, result, x, y;

	cin >> a >> b >> c;

	res = b * b - 4 * a * c;

	if (result < 0) {
		cout << "no solution";
	} else {
		result = sqrt(result);

		x = ((-1) * b + result) / (2 * a);
		y = ((-1) * b - result) / (2 * a);

		if (x == y) {
			cout << x;
		} else {
			cout << x << " " << y;
		}
	}

	return 0;
}
