#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string ans;
    if(!a) ans = "Silver";
    if(!b) ans = "Gold";
    if(a&&b) ans = "Alloy";
    cout << ans << endl;
    return 0;
}
