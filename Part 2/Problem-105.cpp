/*
  Most modern text editors are able to give some statistics about the text they are editing. 
  One nice statistic is the average word length in the text. A word is a maximal continuous sequence of letters ('a'-'z', 'A'-'Z'). 
  Words can be separated by spaces, digits, and punctuation marks. The average word length is the sum of all the words' lengths divided by the total number of words.

  For example, in the text "This is div2 easy problem". There are 5 words: "This" "is" "div" "easy" and "problem". 
  The sum of the word lengths is 4 + 2 + 3 + 4 + 7 = 20, so the average word length is 20 / 5 = 4.

  Given a text, return the average word length in it. If there are no words in the text, return 0.0.
*/
	
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string s;
double words = 0, len = 0, temp = 0;
bool check = false;

int main () 
{
  getline(cin, s);

  for (int i = 0; i < s.size(); ++i) {
    if (isalpha(s[i])) {
      temp++;
      check = true;
    } else {
      len += temp;
      temp = 0;
      words += check;
      check = false;
    }
  }
  double avg = len / words;
  cout << setprecision(10) << avg;
  return 0;
}
