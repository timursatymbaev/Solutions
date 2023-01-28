/*
  You are given a text string. Consider all strings that can be obtained from the given string by repeatedly applying circular shifts. 
  Find the maximum in lexicographical order (dictionary order) of these lines, and output it.
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main () 
{
	string str, maxStr;

	cin >> str;
	maxStr = str;

	for (int i = 0; i < str.length(); i++) {
		if (str > maxStr) maxStr = str;
		str.insert(str.begin(), str[str.length() - 1]);
		str.erase(str.end() - 1);
	}

	cout << maxStr;

	return 0;
}
