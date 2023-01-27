/*
  Write a program that finds the row in the given NxM matrix with longest sequence that contains same values.
  The "sequence" in this context means the elements that are located one after one.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n, m, line = 0;

int func (int n, int m) 
{
    int *num1 = new int (n);
    int *num2 = new int (n);
    int **arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int [m];
    }
    for (int i = 0; i < n; i++) {
        num1[i] = 0;
        num2[i] = 0;
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
        num2[i] = *adjacent_find(arr[i], arr[i] + m);
        num1[i] = count(arr[i], arr[i] + m, num2[i]);
        line = *max_element(num1, num1 + n);
        if (line != 1) {
            for (int j = 0; j < n; j++) {
                if (num1[j] == line) {
                    line = j;
                    break;
                }
            }
        }
    }
    if (line != 0) cout << "Longest series is in the string " << line << endl;
    else cout << "No series of equal elements";
}
int main ()
{
    cin >> n >> m;
    func (n, m);
}
