/*
  ABBA's tribal leader does not know how to count. In exchange for one of his lands another tribe asked him to choose one of three heaps of gold coins. 
  But the ABBA's tribal leader wants to get as much as possible gold coins. Help the leader to make the right decision!
  Note. The program have to use pointer.
*/

#include <iostream>
#include <string>

using namespace std;

string a, b, c;

string compare (string first, string second) 
{
  if (first.size() > second.size()) return first;
  if (second.size() > first.size()) return second;
  string ans = first;

  for (int i = 0; i < ans.size(); ++i) {
    if (first[i] < second[i]) return second;
  }

  return first;
}

int main () 
{
  cin >> a >> b >> c;
  cout << compare(a, compare(b, c));
  return 0;
}
