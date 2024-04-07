#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#include <vector>


int main() {
	int n;
	cin >> n;
	int A[105][105];

	int ** a = new int* [105];
	for (int i = 0; i < n; i++) {
		a[i] = new int[105];
	}
	// i j    i j    i j    i j
	// 0 3    1 2    2 1    3 0
	// i == 4 - j - 1

	vector<vector<int>> v(105, vector<int> (105, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; ++j) {
			if (i == n - j - 1) {
				a[i][j] = 1; // диагональ
			} else if (i < n - j - 1) {
				a[i][j] = 0; // выше диагонали
			} else if (i > n - j - 1) {
				a[i][j] = 2; // ниже диагонали
			}
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
