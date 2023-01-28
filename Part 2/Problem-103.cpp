/*
  Given a sequence than consist only out of the following characters : ' > ', ' < ' and ' - '.
  Your task is to find the number of arrows, which are hidden in this sequence.
  Arrow it's a substring in the following format: '>>-->' or '<--<<'.
*/

#include <iostream>
#include <string>

using namespace std;

int main () 
{
  string s;
  int cnt = 0;
  cin >> s;
  
  if (s.size() >= 5) {
    for (int i = 0; i < s.size()-4; ++i) {
      if (s[i] == '>' && s[i+1] == '>' && s[i+2] == '-' && s[i+3] == '-' && s[i+4] == '>' || s[i] == '<' && s[i+1] == '-' && s[i+2] == '-' && s[i+3] == '<' && s[i+4] == '<') {
        cnt++;
      }
    }
  }
  
  cout << cnt;
  return 0;
}
