#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;
    for(int i=0;i<n;i++) {
        int t;
        cin >> t;
        a.insert(t);
    }
    for(auto& i : a) cout << i << endl;
    return 0;
}
