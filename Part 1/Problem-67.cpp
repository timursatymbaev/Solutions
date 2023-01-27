/*
  Write a function that converts given sequence by the following rules:
  1 - If the letter is in upper case make it lower case;
  2 - If the letter is in lower case make it upper case;
  3 - If it's not a letter left it as is.
*/

#include <iostream>
#include <cstring>

using namespace std;

char text[101] = "";
char check (char* text) 
{
    int i, n = 0;
    for (i = 0; i < 101; i++) {
        if (isupper(text[i])) text[i] = tolower(text[i]);
        else text[i] = toupper(text[i]);
    }
    cout << text;
}
int main ()
{
    cin >> text;
    check (text);
}
