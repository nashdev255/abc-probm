#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) {
            int c = n - (i + j);
            if(c<0) break;
            if(i*10000+j*5000+c*1000==y) {
                cout << i << ' ' << j << ' ' << c << endl;
                return 0;
            }
        }
    }
    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    return 0;
}
