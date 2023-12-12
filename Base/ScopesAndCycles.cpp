#include <cmath>
#include <iostream>


using namespace std;

int i = 12;

int main() {
  cout << i << ' ';
  int i = 0;
  int size = 10;
  {

  } {}
  while (i < size) {
    cout << i << ' ';
    i += 1;
  }
  cout << '\n';

  for (; i < size;) {
    cout << i << ' ';
    i += 1;
  }
  i = 5;
  for (int i = 0; i < 10; ++i) {
  }

  i = 0;
  {
    int i = ::i;

    while (i < 10) {
      ++i;
    }
  }

  i++;

  do {
  } while (i < -14);
}
