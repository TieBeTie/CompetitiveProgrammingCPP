#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool f(int k, int n) {
  if (k == n) return true;
  if (k > n) return false;
 

  if (f(k + 3, n) || f(k + 5, n)) {
    return true;
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  if (f(1, n)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}