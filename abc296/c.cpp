#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    set<int> a;

    for(int i=0;i<n;i++) {
        int t;
        cin >> t;
        a.insert(t);
    }

    for(auto i : a) {
        int y = i - x;
        if (a.count(y)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
