/*
  You given N(1<=N<=100) number - total amount of elements in the sequence.
  Then you are given a sequence itself.
  Your task is to find index of the minimum element in array, assuming that all sequences are started from 0.
*/

#include <iostream>

using namespace std;

int main () 
{
	int size, i, min = 2000, index;

	cin >> size;
	int x[size];

	if (size >= 1 && size <= 1000) {

		for (i = 0; i <= (size - 1); i++)
			cin >> x[i];

		for (i = (size - 1); i >= 0; i--) {
			if (x[i] <= min) {
				index = i;
				min = x[i];
			}
		}

		cout << index;
	}
	return 0;
}
