// Write a program that will find the first occurance of the given keyword in the given text ignoring the case sensitivity ('a' == 'A').

#include <iostream>
#include <string>
 
using namespace std;
 
int main () 
{
	int res = 0;
	string str, needFind, out;

	getline(cin, str);
	cin >> needFind;

	transform(str.begin(), str.end(), str.begin(), ::toupper);
	transform(needFind.begin(), needFind.end(), needFind.begin(), ::toupper);

	res = str.find(needFind);

	cout << (res == 0 ? -1 : res) << endl;

	return 0;
}
