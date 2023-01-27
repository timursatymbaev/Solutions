/*
  Julius Caesar used his way to encrypt text. Each letter is replaced by the following in alphabetical order by K positions in the circle.
  You are given a cypher. Your task is to write a program that outputs plain text.

  Note:
  Cypher - encrypted message.
  Plain text - decrypted message.
*/

#include <iostream>
#include <cstring>

using namespace std;

int func (char* str, int size, int x) 
{
  char s;

  for (int i = 0; i < size; i++) {
    s = char(int(str[i]) - x);
    if (s >= 'A') str[i] = s;
    else str[i] = char(int(s) + 26);
    cout << str[i];
  }

  return 0;
}

int main () 
{
  char str[100];
  int x, size;

  cin.getline(str, 100);
  cin >> x;

  size = strlen(str);

  func(str, size, x);

  return 0;
}
