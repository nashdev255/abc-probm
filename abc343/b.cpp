#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;
  cin >> n;
  std::vector<std::vector<int>> a(n, std::vector<int>(n, 0));
  std::vector<std::vector<int>> ans(n, std::vector<int>(n, 0));
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      cin >> a[i][j];
      if ( a[i][j] ) {
        ans[i].emplace_back(j + 1);
      }
    }
  }
  for ( auto& i : ans ) std::sort(i.begin(), i.end());
  for ( auto& i : ans ) {
    for ( auto& j : i ) {
      if ( j == 0 ) continue;
      cout << j << ' ';
    }
    cout << endl;
  }
  return 0;
}
