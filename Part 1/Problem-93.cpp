/*
  You have some set of tickets. First ticket is numbered M, last – N.
  M and N have the following limitations: 10000000 ≤ M < N ≤ 99999999.
  Your task is to identify total number of "lucky" tickets in the given range.
  We say that ticket is "lucky", if the sum of first 4 digits equals to the sum of last 4 digits.
*/

#include <iostream>
#include <cmath>

using namespace std;

int lucky (int *a, int *b) 
{
    int count = 0, temp, result_1 = 0, result_2 = 0;
    int var1 = *a;
    for (int i = 0; i < 4; i++) {
        temp = var1 % 10;
        var1 /= 10;
        result_1 += temp;
    }
    for (int i = 0; i < 4; i++) {
        temp = var1 % 10;
        var1 /= 10;
        result_2 += temp;
    }
    if (result_1 == result_2) {
        count++;
    }
    return count;
}   
int main () 
{
    int a, b;
    int *qa, *qb;
    qa = &a;
    qb = &b;
    int count_2 = 0, count_3 = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (lucky(&a, &b) > count_2) {
            count_3++;
        }
        a++;
    }
    cout << count_3 << endl;
}
