// Given real number a, natural number n. Calculate: a(a + 1)...(a + n - 1)

#include <iostream>

using namespace std;

int main () 
{
	int n, i;
	double a, b = 1;

	cin >> a >> n;

	for (i = 0; i < n; i++)
		b = (a + i)*b;

	cout << b;

	return 0;
}
