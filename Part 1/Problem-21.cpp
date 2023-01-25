// Given natural number n. Compute 2 to the power of n. Do not use pow() function.

#include <iostream>

using namespace std;

int main () 
{
	int n;

	cin >> n;

	cout << (1 << n);

	return 0;
}
