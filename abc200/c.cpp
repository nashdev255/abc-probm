#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<int> a(n);
    for(auto& i : a) {
        cin >> i;
        i %= 200;
    }
    sort(a.begin(), a.end());
    long long sum = 0;
    for(int i=0;i<200;i++) {
        if(count(a.begin(), a.end(), i) != 1) {
            long long t = count(a.begin(), a.end(), i);
            sum += (t*(t-1))/2;
        }
    }
    cout << sum << endl;
    return 0;
}
