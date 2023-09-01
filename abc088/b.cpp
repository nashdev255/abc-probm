#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    sort(a.begin(), a.end(), greater<int>());
    int aliceSum = 0, bobSum = 0;
    for(auto it=a.begin();it!=a.end();it++) {
        aliceSum += *it;
        if(it+1!=a.end()) it++;
        else break;
        bobSum += *it;
    }
    cout << aliceSum - bobSum << endl;
    return 0;
}
