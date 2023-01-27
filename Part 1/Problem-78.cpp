/*
  Exit from the maze.
  Robot is standing at the (0, 0) position of the matrix maze.
  Your task is to find the answer to the question - "Is it possible to find the exit from the given maze?".
  Exit exists only in case you can find the way from (0, 0) to (n - 1, m - 1) point walking only through blank places (".").
  Note. Use recursion for solving this problem.
*/

#include <iostream>
 
using namespace std;

char arr[6][6];
int sizeN, sizeM, io = 0;

int func (int x, int y) 
{
	if ((x < sizeN && y < sizeM) && (x >= 0 && y >= 0)) {
		if ((x == sizeN - 1) && (y == sizeM - 1)) {
			if (arr[x][y] == '.') {io = 1; return 1;}
			else return 0;
		}
		else {
			if (arr[x][y] == '.') {
				arr[x][y] = '#';
				func(x, y + 1);
				func(x, y - 1);
				func(x + 1, y);
				func(x - 1, y);
			}
			else return 0;
		}
	}
	else return 0;

	return func(x, y);
}
 
int main () 
{
	cin >> sizeN >> sizeM;

	for (int i = 0; i < sizeN; i++)
		for (int n = 0; n < sizeM; n++)
			cin >> arr[i][n];

	func(0, 0);

	cout << (io == 1 ? "YES" : "NO");

	return 0;
}
