#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using std::cin;
using std::cout;
using std::string;

// ABA
// A B A AB AB
// AAA
// A A A
// ABAB
// A B A B AB BA AB

template <class T>
uint64_t MergeCount(const std::vector<T> &a, size_t l, size_t r) {
  uint64_t answer = 0;
  if (l < r) {
    size_t m = (l + r) / 2;
    answer += MergeCount(a, l, m);
    answer += MergeCount(a, m + 1, r);
    
    struct {
        std::unordered_set<T> data;
        size_t l;
        size_t r;
    } unique_sequence;

    unique_sequence.r = m + 1;
    while (unique_sequence.r <= r &&
           !unique_sequence.data.count(a[unique_sequence.r])) {
      unique_sequence.data.insert(a[unique_sequence.r++]);
    }
    --unique_sequence.r;

    for (unique_sequence.l = m + 1; m + 1 <= unique_sequence.r; --unique_sequence.r) {
        while (0 < unique_sequence.l-- && l <= unique_sequence.l 
        && !unique_sequence.data.count(a[unique_sequence.l])) {
            unique_sequence.data.insert(a[unique_sequence.l]);
        }
        ++unique_sequence.l;

        if (l == unique_sequence.l) {
            answer += (m - l + 1) * (unique_sequence.r - m + 1 + 1);
            break;
        } else {
            answer += m + 1 - unique_sequence.l;
        }
    }
  } else if (l == r) {
    answer = 1;
  }
  return answer;
}

int main() {
  string s;
  cin >> s;
  cout << MergeCount(std::vector<char>(s.begin(), s.end()), 0, s.size() - 1);
}