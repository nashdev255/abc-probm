#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    string ans;
    for (char c : str) {
        if (c == 'a') continue;
        if (c == 'i') continue;
        if (c == 'u') continue;
        if (c == 'e') continue;
        if (c == 'o') continue;
        ans += c;
    }
    cout << ans << endl;
    return 0;
}
