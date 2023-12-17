#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<n;i++)
#define repa(i, a, n) for(int i=a;i<n;i++)
using namespace std;
using ll = long long;

int main() {
  int n, s, k;
  cin >> n >> s >> k;
  int sum = 0;
  for(int i=0;i<n;i++) {
    int p, q;
    cin >> p >> q;
    sum += p * q;
  }
  if(!(s<=sum)) sum += k;
  cout << sum << endl;
  return 0;
}
