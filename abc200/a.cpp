#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%10) cout << n/100+1 << endl;
    else cout << n/100 << endl;
    return 0;
}
