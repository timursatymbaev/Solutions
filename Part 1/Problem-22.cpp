// Given natural number n. Calculate n!. n! = 1*2*3*...*n.

#include <iostream>

int main () 
{
    int n, result = 1;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) result *= i;
    std::cout << result;
}
