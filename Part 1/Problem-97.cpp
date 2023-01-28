/*
  Write a function that will find and return most recent word in the given text.
  The prototype of the function have to be the following: void mostRecent (char *text, char *word)
  In char *word your function have to return the most recent word that occur in the text.
  Your program have to be not case-sensitive (ignore case - "Can" and "CAN" are the same words)
  Also note that WORD is sequence of letters separated by whitespace.
  Note. The program have to use pointer.
*/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int N = 1000;
char s[N], res[N];

void recent (char *text, char *word)
{
  vector <string> words;
  vector <string>* ptrWords = &words; // pointer to vector
  string temp;
  for (int i = 0; i < strlen(text); ++i) {
    if (*(text + i) == ' ') {
      ptrWords -> push_back(temp);
      temp.clear();
    }
    else temp += toupper(*(text + i));
  }
  ptrWords -> push_back(temp);
  temp.clear();
  int max_cnt = 0;
  for (int i = 0; i < ptrWords -> size(); ++i) {
    int cnt = 0;
    for (int j = 0; j < words.size(); ++j) cnt += (ptrWords->at(i) == ptrWords->at(j));
    if (cnt > max_cnt) {
      max_cnt = cnt;
      temp = ptrWords->at(i);
    }
  }
  for (int i = 0; i < temp.size(); ++i) *(word + i) = temp[i];
}
int main () 
{
  cin.getline(s, N);
  recent(s, res);
  cout << res;
  return 0;
}
