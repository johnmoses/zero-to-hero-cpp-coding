// Count function

#include <iostream>
using namespace std;

int count(int array[], int size, int number) {
  int n = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] == number) {
      n++;
    }
  }
  return n;
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(array) / sizeof(array[0]);
  int number = 5;
  int n = count(array, size, number);
  cout << "The number " << number << " appears " << n << " times in the array." << endl;
  return 0;
}