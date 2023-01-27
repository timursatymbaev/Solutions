/*
  Your friend has lost his keys.
  You wanted to make a joke and hide friend's keys and left a description of how to find.
  Description consists of rows of the form:
  "North 5", where the word is one of the "North", "South", "East", "West", sets the direction, and the number of steps in that direction.
  Your friend is very lazy, and he doesn't want to follow the steps from description, so, 
  help him to write a program that determines the exact coordinates of the keys from the given description, 
  assuming that the origin is in the beginning, the OX axis directed to the east, the axis OY to the north.
*/

#include <iostream>

using namespace std;

string word;
int number;

int keys () 
{
    int a = 0, b = 0;
    int* c;
    int* d;
    while (cin >> word >> number) {
        if (word == "North") {
            a += number;
        }
        if (word == "East") {
            b += number;
        }
        if (word == "West") {
            b -= number;
        }
        if (word == "South") {
            a -= number;
        }
        if (!cin) {
            break;
        }
    }
    c = &b;
    d = &a;
    cout << *c << ' ' << *d;
}
int main () 
{
    keys();
}
