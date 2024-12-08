#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <set>
using namespace std;

bool comp(int a, int b) {
    return a < b;
}


int main() {
    // 3 1 12 1 14515 1 616 16 123 2512
    // insert
    // delete
    // search
    unordered_set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(12);
    s.insert(12); // duplicate
    s.erase(12);
    for (int i : s) {
        cout << i << " ";
    }
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    if (s.count(12)) {
        cout << "12 is present" << endl;
    } else {
        cout << "12 is not present" << endl;
    }
    if (s.find(12) != s.end()) {
        cout << "12 is present" << endl;
        s.end();
    } else {
        cout << "12 is not present" << endl;
    }

    unordered_map<string, int> m;

    m["abc"] = 1;
    m["abc"] = 2;
    m.insert({"def", 3});
    // {abc, 2}, {def, 3}
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    if (m.count("abc")) {
        cout << "abc is present" << endl;
    } else {
        cout << "abc is not present" << endl;
    }
    
    set<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.erase(2);
    for (int i : st) {
        cout << i << " ";
    }
    // 3 2 1
    // 1 2 3
    
}

