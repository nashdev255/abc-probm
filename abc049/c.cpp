#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    vector<string> words = { "dream", "dreamer", "erase", "eraser" };

    reverse(str.begin(), str.end());
    for(auto& w : words) reverse(w.begin(), w.end());

    for(int i=0;i<1000000;i++) {
        for(const auto& w : words) {
            if(str.size()<w.size()) continue;
            if(str.substr(0, w.size())==w) str.erase(0, w.size());
        }
    }

    if(str.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
