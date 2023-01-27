/*
  You given NxM matrix with NxM numbers inside.
  Your task is to find out the row in which total number of positive elements is bigger.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int check (int sizeN, int sizeM)
{
    int i, n, l, m = 1;
    int **check = new int* [sizeN];
    for (int counter = 0; counter < sizeN; counter++) {
        check[counter] = new int [sizeM];
    }
    int* id = new int [sizeN];
    for (i = 0; i < sizeN; i++) {
        id[i] = 0;
        for (n = 0; n < sizeM; n++) {
            cin >> check[i][n];
            if (check[i][n] > 0) id[i]++;
        }
    }
    l = *max_element(id, id + sizeN);
    for (i = 0; i < sizeN; i++) {
        if (id[i] == l) n = i;
        if (i > 0) {
            if (id[i] == id[i - 1]) m++;
        }
    }
    if (m == sizeN) cout << "Numbers are equal";
    else cout << n + 1;
}
int main () 
{
    int sizeN, sizeM;
    cin >> sizeN >> sizeM;
    check (sizeN, sizeM);
}
