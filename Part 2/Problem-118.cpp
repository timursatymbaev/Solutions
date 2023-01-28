/*
  You are given a line of symbols with whitespaces. Write a program that will remove from the given line all the extra spaces.
  Space have to be removed if:
  a) spaces are at the beginning of the line, until the first word;
  b) spaces are at the end of the line after the last word;
  c) there are several spaces between the two words (in other words, if the words are separated by more than one space, then all spaces except one have to be removed)
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main () 
{
	string str;

	getline(cin, str);

	str.erase(unique(str.begin(), str.end()), str.end());
	if (str[0] == ' ') str.erase(str.begin());
	if (str[str.length() - 1] == ' ') str.erase(str.end() - 1);

	cout << str << '\n';

	return 0;
}
