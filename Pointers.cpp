#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int *ptr = &x;

  cout << "The value of x is: " << x << endl;
  cout << "The memory address of x is: " << &x << endl;
  cout << "The value of ptr is: " << ptr << endl;
  cout << "The value of *ptr is: " << *ptr << endl;

  return 0;
}
