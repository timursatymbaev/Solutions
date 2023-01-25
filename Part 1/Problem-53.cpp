/*
  Square life.
  There is living micro-organisms in cells of the NxN square (no more than one micro-organisms per cell).
  Each one of the following events take place on the NxN square:
          1.All micro-organisms that have less than 2 neighbors die because of boredom 
          (the "neighbors" are called the micro-organisms that live in cells with common sides or vertexes);
          2.All micro-organisms that have more than 3 neighbors die because of overcrowding;
          3.At all empty cells that have or had exactly 3 cells with micro-organisms, new micro-organisms are born.
  All changes take place simultaneously for each cell (at the same time for all cells), firstly the final position is found and only then changes are applied.

  Your task is to find the final position on NxN square after T seconds.
*/

#include <iostream>

using namespace std;

const int N = 12;
int n, t, arr[N][N], ans[N][N];

int main () 
{
  cin >> n >> t;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) cin >> arr[i][j];
  }
  for (int q = 0; q < t; ++q) {
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= n; ++j) {
        ans[i][j] = arr[i][j];
        int neighbors = 0; // Checking all cells around
        for (int x = i - 1; x <= i + 1; ++x) {
          for (int y = j - 1; y <= j + 1; ++y) {
            if (x != i || y != j) { // Skip the given cell
              neighbors += arr[x][y];
            }
          }
        }
        if (arr[i][j]) { // Living cell
          if (neighbors < 2 || neighbors > 3) ans[i][j] = 0; // Cell dies
        } else { // Empty cell
          if (neighbors == 3) ans[i][j] = 1; // New cell appears
        }
      }
    }
    // Save changes
    bool changed = false;
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= n; ++j) {
        if (arr[i][j] != ans[i][j]) changed = true;
        arr[i][j] = ans[i][j];
      }
    }
    if (!changed) break;
  }
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) cout << ans[i][j] << ' ';
    cout << endl;
  }
}
