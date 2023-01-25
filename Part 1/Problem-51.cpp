/*
  Snake problem.
  Given integers n and m. Create an array A [n] [m] and fill it with numbers in a snake form (look at example).
*/

#include <iostream>

using namespace std;

int main ()
{
  int n, m;
  bool snake = true;
  cin >> n >> m;
  for (int i = 0; i < n * m; i += m) {
    if (snake) {
      for (int j = i; j < i + m; ++j) {
        cout << j << " ";
      }
    } else {
      for (int j = i + m - 1; j >= i; --j) {
        cout << j << " ";
      }
    }
    snake = !snake;
    cout << endl;
  }

  return 0;
}
