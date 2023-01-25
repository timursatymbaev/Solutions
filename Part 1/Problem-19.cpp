/*
  Teacher’s day is celebrated each year on the first Sunday of the October. 
  Given natural number n, that represents the number of the year. Output the date of the Teacher’s day of that year.
*/

#include <iostream>

using namespace std;

int main () 
{
	int x, n, i;

	cin >> n;
	x = n;
	n = 8;

	for (i = 1; i <= x; i++) {
		if (((i % 100 != 0) && (i % 4 == 0)) || (i % 400 == 0)) {
			n = n - 2;

			if (n == -1) n = 6;
			if (n == 0) n = 7;
		} else {
			n--;

			if (n <= 0) n = 7;
		}
	}

	cout << n;

	return 0;
}
