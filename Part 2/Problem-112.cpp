// You are given a set of round braces. Your task is to find out if the given set of braces is valid or not.

#include <bits/stdc++.h>

using namespace std;
 
bool areBracketsBalanced (string expr)
{
    stack <char> temp;
    for (int i = 0; i < expr.length(); i++) {
        if (temp.empty()) {
            temp.push(expr[i]);
        } else if ((temp.top() == '(' && expr[i] == ')') || (temp.top() == '{' && expr[i] == '}') || (temp.top() == '[' && expr[i] == ']')) {
            temp.pop();
        } else {
            temp.push(expr[i]);
        }
    }
    if (temp.empty()) {
        return true;
    }
    return false;
}
 
int main ()
{
    string expr;
    cin >> expr;
    
    if (areBracketsBalanced(expr)) cout << "VALID";
    else cout << "INVALID";
    
    return 0;
}
