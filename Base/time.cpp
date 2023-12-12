#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;
  long long h = n / 3600 % 24;
  int mm = n % 3600 / 60;
  int ss = n % 60;
  cout << h << ':' << (mm >= 10 ? "" : "0") << mm << ':'
       << (ss >= 10 ? "" : "0") << ss;
}
