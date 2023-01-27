/*
  You are given a mathematical expression. The mathematical expression consists of digits ('0' to '9'), '+', '-', '*' and '/'. 
  The expression may be correct, so that one could calculate the resultant value of the expression, and the expression may be incorrect. 
  The expression may be incorrect, when the operation signs follow each other, like "1+-2" or when there are other symbols in the expression, like "1*2x3".
*/

#include <iostream>

using namespace std;

char func (char str[], int size) 
{
	int io = 0;

	for (int i = 0; i < size; i++) {
		if ((int(str[i]) >= 42 && int(str[i]) <= 57) && (int(str[i]) != 44 && int(str[i]) != 46))
			if ((int(str[i]) >= 42 && int(str[i]) <= 47) && (int(str[i]) != 44 && int(str[i]) != 46) && io == 0) io = 1;
			else
				if (int(str[i]) >= 48 && int(str[i]) <= 57) io = 0;
				else {cout << "NO"; goto l;}
		else {cout << "NO"; goto l;}
	}

	cout << "YES";

	l:

	return 0;
}

int main () 
{
	char str[1001];
	int size;

	cin >> size;
	cin >> str;

	func(str, size);

	return 0;
}
