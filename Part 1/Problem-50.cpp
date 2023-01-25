/*
  JOSEPHUS FLAVIUS Task.
  
  One of the talents that Josephus Flavius possessed was the mathematical skill, which according to legend saved his life. 
  When the Romans trapped 40 of Flavius's followers and him, they made a death pact in which the Romans would not get them, they rather be dead. 
  They took deadly counts in a circle of soldiers. Each third was killed. The count continued until one man was left. It was man who took 31st place in that circle. 
  Yes, it was Flavius. He had another opinion about life, death and his special assignment in this war. 
  Below you see the tool, which can calculate for you any amount of numbers for any picked out number and for any number left (less than total, of course). 
  Just remember, Flavius quickly solved such a problem in his head without any computer program. 
  Hopefully you will never be at needs to use this tool for saving your life but maybe you'll find another reason to use it.

  Task: find the location (index) of the single person who remained alive.
*/

#include <bits/stdc++.h>

using namespace std;

int josephus (int n, int k) 
{
    if (n == 1) return 0;
    if (k == 1) return n-1;
    if (k > n) return (josephus(n-1, k) + k) % n;
    int cnt = n / k;
    int res = josephus(n - cnt, k);
    res -= n % k;
    if (res < 0) res += n;
    else res += res / (k - 1);
    return res;
}

int main () 
{
    int k, n;
    cin >> n >> k;
    cout << josephus(n, k) + 1;
}
