/*
  Calculate the profitability of the enterprise for the month using the formula "rent = (profit / cost) * 100%". 
  If the cost of production in the current month decreased by 5% compared to the previous one. 
  Enter the value of profit and cost for the last month from the screen. Round up the final value.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    float profit, cost;
    cin >> profit >> cost;
    cout << ceil((profit / cost) * 105.5);
}
