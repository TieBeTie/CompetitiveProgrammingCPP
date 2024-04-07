// Find cliques
// Meet-in-the-Middle solution O(n/2)
#include <algorithm>
#include <iostream>
#include <vector>
#include <assert.h>
#include <fstream>
#include <cstdint>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int mx;
    cin >> a[0];
    mx = a[0];
    for (int i = 1; i < n; ++i) {
		cin >> a[i];
        mx = max(mx, a[i]);
	}
    vector<int> count(mx + 1, 0);
    for (int i = 0; i < n; ++i) {
		count[a[i]] = count[a[i]] + 1;
	}

    for (int i = 0; i <= mx;) {
        if (count[i] > 0) {
            cout << i << " ";
            --count[i];
        }
        else {
            ++i;
        }
    }
}
