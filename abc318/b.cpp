#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> plane(1000, vector<int>(1000));
    for(int i=0;i<n;i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int j=a;j<b;j++) {
            for(int k=c;k<d;k++) {
                plane[j][k]++;
            }
        }
    }

    int count = 0;
    for(int i=0;i<1000;i++) {
        for(int j=0;j<1000;j++) {
            if(0<plane[i][j]) count++;
        }
    }

    cout << count << endl;
    
    return 0;
}
