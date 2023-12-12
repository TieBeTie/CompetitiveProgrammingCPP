#include <cmath>
#include <iostream>


using namespace std;

int main() {
  long long a, b, h;
  cin >> h >> a >> b;
  long long step = a - b;

  cout << ceill((h - a) / (double)step) + 1;
}
