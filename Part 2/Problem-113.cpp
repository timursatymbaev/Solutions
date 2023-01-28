/*
  Given a sequence of N round, square and curly brackets. 
  Find out whether you can add the numbers and arithmetic operations so you could obtain a correct arithmetic expression.
*/

#include <bits/stdc++.h>

using namespace std;
 
bool areBracketsBalanced (int n, string expr)
{
    stack <char> temp;
    for (int i = 0; i < n; i++) {
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
    int n;
    string expr;
    cin >> n >> expr;

    if (areBracketsBalanced(n, expr)) cout << "Yes";
    else cout << "No";
    
    return 0;
}
