// Input two numbers and show one of the following symbols: '>', '<' or '='.

#include <iostream>

using namespace std;

int main () 
{
    int a, b;
    cin >> a >> b;
    
    if (a > b) {
        cout << ">";
    } else if (a < b) {
        cout << "<";
    } else if (a == b) {
        cout << "=";
    }
}
