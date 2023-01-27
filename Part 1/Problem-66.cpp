// Write a function that converts given sequence of characters from the lower case to upper case.

#include <iostream>
#include <cstring>

using namespace std;

char text[101] = "";
char toUpper (char* text)
{
    int i, n = 0, t = 0;
    for (i = 0; i < 101; i++) {
        if (islower(text[i])) text[i] = toupper(text[i]);
    }
    cout << text;
}
int main ()
{
    cin >> text;
    toUpper(text);
}
