// Given three real numbers x, y, z. Output the minimum and the maximum values of them. First output the minimum, then the maximum value.

#include <iostream>

using namespace std;

int main () 
{
	float x, y, z, minimum, maximum;

	cin >> x >> y >> z;

	if (x + y <= z * 2) {
		maximum = z;

		if (x >= y) {
			minimum = y;
		} else {
			minimum = x;
		}
  } else {
		minimum = z;

		if (x >= y) {
			maximum = x;
		} else {
			maximum = y;
		}
	}

	cout << minimum << " " << maximum;

	return 0;
}
