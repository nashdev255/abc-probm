#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    for(auto& c : str) {
        if(c=='6') c = '9';
        else if(c=='9') c = '6';
    }
    cout << str << endl;
    return 0;
}
