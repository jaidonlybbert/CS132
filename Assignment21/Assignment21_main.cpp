// Jaidon Lybbert
// February 15, 2019
// Assignment 21: Dynamic Arrays

#include<iostream>

using namespace std;


int main() {
  int *x;
  int size, aboveAverage;
  double sum;

  cout << "\nEnter the size of the array: ";
  cin >> size;
  cout << endl;

  x = new int[size];

  for (int i = 0; i < size; i++) {
    cout << "Enter number at index " << i << ": ";
    cin >> *(x + i);
    sum += *(x + i);
  }

  for (int i = 0; i < size; i++) {
    if (*(x + i) > (sum / size)) {
      aboveAverage++;
    }
  }

  delete [] x;
  x = NULL;

  cout << "\nAverage: " << (sum / size) << endl;
  cout << "Numbers above average: " << aboveAverage << endl;

  return 0;
}
