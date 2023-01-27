/*
  Write a function that have to read the numbers from 1 to n and store them into array. As the result your program have to output the numbers.

  Note. The program have to use pointer.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int func (int *arr, int size) 
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	return 0;
}

int main () 
{
	int size;
	
	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	func(arr, size);

	return 0;
}
