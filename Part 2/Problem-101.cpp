/*
  Your friend is the person who does not like any limitations in the life. 
  And when you said to him that it is totally impossible to work with integer numbers bigger than 4 294 967 296 in C++ 
  he blamed you in time-wasting during the university study. So to prove that you hadn't waste 2 months of your life 
  studying C++ in university you have to solve this issue.
  Your task is to write a program that which can add two integer numbers that are not more than 101000 to each other.
  Your program have to implement void addVeryLongIntegers(char *a, char *b, char *c) function.
  Note. The program have to use pointer.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string a, b;

string addVeryLongInteger (string first, string second) 
{
  string res = "", num1 = first, num2 = second;
  if (num1.length() > num2.length()) swap(num1, num2);
  reverse(num1.begin(), num1.end());
  reverse(num2.begin(), num2.end());
  int remainder = 0;
  for (int i = 0; i < num1.length(); ++i) {
    int sum = (num1[i] - '0') + (num2[i] - '0') + remainder;
    res.push_back(sum % 10 + '0');
    remainder = sum / 10;
  }
  for (int i = num1.length(); i < num2.length(); ++i) {
    int sum = (num2[i] - '0') + remainder;
    res.push_back(sum % 10 + '0');
    remainder = sum / 10;
  }
  if (remainder) res.push_back(remainder + '0');
  reverse(res.begin(), res.end());
  return res;
}

int main () 
{
  cin >> a >> b;
  string ans = addVeryLongInteger(a, b);
  cout << ans;
  return 0;
}
