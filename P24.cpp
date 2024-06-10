#include<iostream>
#include<array>
using namespace std;

int main() {
  array < int, 5 > arr { 1, 2, 3, 4, 5 };
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';
  cout << "Size of array is " << arr.size() << '\n';
  cout << "First element of array is " << arr.front() << '\n';
  cout << "Last element of array is " << arr.back() << '\n';
  cout << "Second element of array is " << arr.at(1) << '\n';
  cout << "First element of array using data method is " << * (arr.data()) << '\n';
  arr.fill(10);
  cout << "The new array is ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';
  if (arr.empty() == false) {
    cout << "array is not empty!";
  }
  return 0;
}