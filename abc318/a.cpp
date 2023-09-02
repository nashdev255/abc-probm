#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int count = 0;
    while(m<=n) {
        m += p;
        count++;
    }
    cout << count << endl;
    return 0;
}
