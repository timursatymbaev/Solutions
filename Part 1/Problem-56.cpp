// Write a function double power (double a, int n) that finds the result of the expression.

#include <iostream>
#include <cmath>

using namespace std;

int power (double a, int n) 
{
    double result = pow(a, n);
    cout << result;
    return result;
}
int main () 
{
    double a, n;
    cin >> a >> n;
    power(a, n);
}
