/*
  Passenger's luggage is characterized by a number of things and weight of things. 
  Suppose we are given an array that contains information about the luggage of several passengers.
  Find the luggage that exceeding baggage of each other by weight, but not by quantity.
  struct Luggage {
    char *description;
    int count;
    double weight;
  };
  struct Passenger {
    int luggageSize;
    char *name;
    Luggage *luggage;
  };
  Note: Pointers, dynamic arrays and structures have to be used by default.
*/

#include <iostream>
#include <algorithm>
#define incar (inCar + i)

using namespace std;

struct Luggage {
  char *description;
  int count;
  double weight;
};

struct Passenger {
  int luggageSize;
  char *name;
  Luggage *luggage;
};

int main () 
{
  int size, indexMax, indexMax2, MAX = 0;

  cin >> size;

  Passenger *inCar = new Passenger[size];

  for (int i = 0; i < size; i++) {
    incar->name = new char[64];
    cin >> incar->name;
    cin >> incar->luggageSize;

    incar->luggage = new Luggage[inCar[i].luggageSize];
    for (int j = 0; j < incar->luggageSize; j++) {
      (incar->luggage + j)->description = new char[64];
      cin >> (incar->luggage + j)->description >> (incar->luggage + j)->count >> (incar->luggage + j)->weight;
    }
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < incar->luggageSize; j++) {
      if ((incar->luggage + j)->count * (incar->luggage + j)->weight > MAX) {
        MAX = (incar->luggage + j)->count * (incar->luggage + j)->weight;
        indexMax = i;
        indexMax2 = j;
      }
    }
  }

  int i = indexMax;

  cout << incar->name << endl;
  cout << (incar->luggage + indexMax2)->description << endl;

  for (int i = 0; i < size; i++) {
    delete []incar->name;
    delete []incar->luggage;
  }

  delete []inCar;

  return 0;
}
