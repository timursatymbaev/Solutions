/*
  Your task is to idetify if the given K is prime or not.
  Prime number is the number that can be divided by 1 and by itself ONLY.
  If given number is prime output "YES", otherwise ouput "NO".
*/

#include <iostream>

using namespace std;

int main () 
{
    int n;
    cin >> n;
  
    if (n == 0 || n == 1) {
        cout << "NO";
        return 0;
    }
  
    for (int i = 2; i < n; i++){
        if (n % i == 0) {
            cout << "NO";
        }
    }
  
    cout << "YES";
  
    return 0;
}
