/*
  You given two one-dimension arrays with N numbers inside.
  Your task is to find out the array in which total number of positive elements is bigger.
*/

#include <iostream>

using namespace std;

void check (int arrSize) 
{
    int a = 0;
    int b = 0;
    int arr1[arrSize];
    int arr2[arrSize];
    for (int i = 0; i < arrSize; i++) {
        cin >> arr1[i];
        if (arr1[i] < 0) a++;
    }
    for (int i = 0; i < arrSize; i++) {
        cin >> arr2[i];
        if (arr2[i] < 0) b++;
    }
    if (a < b) {
        cout << "Number of positives in the first array is greater";
    } else if (a > b) {
        cout << "Number of positives in the second array is greater";
    } else {
        cout << "Numbers are equal";
    }
}

int main () 
{
    int arrSize;
    cin >> arrSize;
    check(arrSize);
}
