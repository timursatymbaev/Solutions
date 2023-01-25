/*
  Given N (2 <= N <= 10000) number, find and output the prime numbers between 2 and given N.
  Prime number is the number that can be divided by 1 and by itself ONLY.
*/

#include <iostream>
 
using namespace std;
 
bool a[10000];
 
int main () 
{  
	int x;

	a[0]=true;
	a[1]=true;

	cin >> x;
 
	for (long long i = 2; i <= x; ++i) {
		if (a[i] == false) {
			if (i * i <= x) {
				for (long long j = i * i; j <= x; j += i)
					a[j] = true;
			}
		}
	}
 
	for (long long i = 1; i <= x; ++i)
		if (a[i] == false) cout << i << " ";

	return 0;
}
