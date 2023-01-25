/*
  You given N and one line of length N (1 <= N <= 1000) then consist of letter in interval A..Z.
  Your task is to find out how often each letter from the alphabet is found in the line.
*/

#include <iostream>

using namespace std;

int main ()
{
	int size, i, n = 0, times[26] = {0};
	char y[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cin >> size;
	char x[size];

	if (size >= 1 && size <= 1000) {

		for (i = 0; i <= (size - 1); i++)
			cin >> x[i];

		while (n <= 25) {
			for (i = (size - 1); i >= 0; i--)
				if (x[i] == y[n]) times[n]++;
			n++;
		}

		n = 0;

		for (i = 0; i <= 25; i++)
			if (times[i] > (0)) n++;

		cout << n << endl;

		for (i = 0; i <= 25; i++)
			if (times[i] != (0)) cout << y[i] << " " << times[i] << endl;
	}
	
	return 0;
}
