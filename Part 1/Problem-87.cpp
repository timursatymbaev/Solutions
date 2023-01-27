/*
  Write a function that find the number of even numbers that are in range between the maximum and minimum elements of an given array.

  Note. The program have to use pointer.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int* arr = new int[n];
  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    int minimum =arr[0], minimumIndex = 0;
    int maximum =arr[0], maximumIndex = 0;
  
    for (int i = 1; i < n; i++){
        if (minimum  > arr[i]) {
            minimum = arr[i];
            minimumIndex = i;
        }
        if (maximum  < arr[i]) {
            maximum = arr[i];
            maximumIndex = i;
        }
    }
    int sum = 0;
    for (int i = minimumIndex+1 ; i < maximumIndex; i++) {
        if (arr[i] % 2 == 0)
            sum++;
    }
    cout << sum;
}
