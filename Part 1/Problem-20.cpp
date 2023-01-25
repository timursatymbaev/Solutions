/*
  Given three natural numbers a, b, c which represent the day, month and year of some date. 
  For example: 1, 4, 1991 represents 1st April 1991. Output three numbers which represent the following date.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
  int day, month, year, leap;
  cin >> day >> month >> year;

  if (year % 4 != 0) {
    leap = 0;
  } else if (year > 99 && year % 100 == 0 && year % 400 != 0) {
    leap = 0;
  } else {
    leap = 1;
  }
  
  if (month == 2) {
    if (leap == 1) {
      if (day != 29) {
        day += 1;
      } else {
        day = 1;
        month += 1;
      }
    } else {
      if (day != 28) {
        day += 1;
      } else {
        day = 1;
        month += 1;
      }
    }
  } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    if (day != 31) {
      day += 1;
    } else {
      day = 1;
      month += 1;
    }
    if (month > 12) {
      month = 1;
      year += 1;
    }
  } else {
    if (day != 30) {
      day += 1;
    } else {
      day = 1;
      month += 1;
    }
  }

  cout << day << " " << month << " " << year;
  
  return 0;
}
