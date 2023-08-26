#include <bits/stdc++.h>
using namespace std;

int main() {
    std::string str, ans;
    cin >> str;
    for ( char c : str ) {
        if ( c == 'a' ) continue;
        if ( c == 'i' ) continue;
        if ( c == 'u' ) continue;
        if ( c == 'e' ) continue;
        if ( c == 'o' ) continue;
        ans += c;
    }
    cout << ans << endl;
    return 0;
}
