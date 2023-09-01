#include <bits/stdc++.h>
using namespace std;

bool isAllEven(vector<unsigned int>& a) {
     for(auto& i : a) if(i%2==1) return false;
     for(auto& i : a) i /= 2;
     return true;
}

int main() {
    int n, count = 0;
    cin >> n;
    vector<unsigned int> a(n);
    for(auto& i : a) cin >> i;
    while(isAllEven(a)) count++;
    cout << count << endl;
    return 0;
}
