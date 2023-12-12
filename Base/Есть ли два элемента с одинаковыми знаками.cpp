#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int x, y;

  cin >> x;
  for (int i = 1; i < n; ++i) {
    cin >> y;
    if (!(x ^ y > 0)) {
      cout << "YES";
      return 0;
    }
    x = y;
  }

  cout << "NO";
}
// 01110
// ^
// 10100
// 11010

// 0 0  0
// 1 0  1
// 0 1  1
// 1 1  0
