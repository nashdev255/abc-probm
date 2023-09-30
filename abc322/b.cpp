#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  string s, t;

  cin >> n >> m >> s >> t;

  if(s==t||(s==t.substr(0, n)&&s==t.substr(m-n, n))) {
    cout << 0 << endl;
    return 0;
  }

  if(s==t.substr(0, n)) {
    cout << 1 << endl;
    return 0;
  }

  if(s==t.substr(m-n, n)) {
    cout << 2 << endl;
    return 0;
  }

  cout << 3 << endl;

  return 0;
}
