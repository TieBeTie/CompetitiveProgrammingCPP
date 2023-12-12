#include <cmath>
#include <iostream>


using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  a += a % 2;

  for (; a <= b; a += 2) {
    cout << a << ' ';
  }
}