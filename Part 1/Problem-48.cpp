/*
  Write a program which implements a very simple computerized telephone directory.
  The two-dimensional array numbers holds pairs of names and numbers.
  Array elements are following:

  "Tom", "555-3322",
  "Mary", "555-8976",
  "Jon", "555-1037",
  "Rachel", "555-1400",
  "Sherry", "555-8873"

  To find a number, you enter the name. The number is displayed. Otherwise output "Not found".
  Your program have to check only given names.
*/

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main () 
{
  char tom[4] = "Tom", mary[5] = "Mary", john[4] = "Jon", rachel[7] = "Rachel", sherry[7] = "Sherry";
  char x[32];

  cin >> x;

  if (!strcmp(tom, x)) cout << "555-3322";
  else {
    if (!strcmp(mary, x)) cout << "555-8976";
    else {
      if (!strcmp(john, x)) cout << "555-1037";
      else {
        if (!strcmp(rachel, x)) cout << "555-1400";
        else {
          if (!strcmp(sherry, x)) cout << "555-8873";
          else cout << "Not found";
        }
      }
    }
  }
}
